/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/RequestCompression.h>
#include <aws/core/http/HttpClient.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClientConfiguration.h>
#include <smithy/client/features/ChunkingInterceptor.h>
#include <smithy/client/features/ExpectHeaderInterceptor.h>
#include <smithy/client/features/RequestCompressionInterceptor.h>

namespace Aws {
namespace RestXmlProtocol {

namespace {
// Default aws-chunked buffer size used to content encode streaming request bodies.
const size_t DEFAULT_AWS_CHUNKED_BUFFER_SIZE = 64UL * 1024;
}  // namespace

void RestXmlProtocolClientConfiguration::LoadRestXmlProtocolSpecificConfig(const Aws::String& inputProfileName) {
  awsChunkedBufferSize = DEFAULT_AWS_CHUNKED_BUFFER_SIZE;
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

RestXmlProtocolClientConfiguration::RestXmlProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRestXmlProtocolSpecificConfig(this->profileName);
}

RestXmlProtocolClientConfiguration::RestXmlProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRestXmlProtocolSpecificConfig(Aws::String(inputProfileName));
}

RestXmlProtocolClientConfiguration::RestXmlProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRestXmlProtocolSpecificConfig(this->profileName);
}

RestXmlProtocolClientConfiguration::RestXmlProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRestXmlProtocolSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> RestXmlProtocolClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "RestXmlProtocolClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(
      Aws::MakeShared<smithy::client::features::RequestCompressionInterceptor>(TAG, requestCompressionConfig, request.httpClient));
  interceptors.push_back(Aws::MakeShared<smithy::client::features::ChunkingInterceptor>(
      TAG, request.httpClient->IsDefaultAwsHttpClient() ? Aws::Client::HttpClientChunkedMode::DEFAULT : httpClientChunkedMode,
      awsChunkedBufferSize));
  if (!disableExpectHeader) {
    interceptors.push_back(Aws::MakeShared<smithy::client::features::ExpectHeaderInterceptor>(TAG));
  }
  return interceptors;
}

}  // namespace RestXmlProtocol
}  // namespace Aws
