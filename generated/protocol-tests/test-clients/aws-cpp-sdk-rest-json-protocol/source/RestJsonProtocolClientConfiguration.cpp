/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/RequestCompression.h>
#include <aws/core/http/HttpClient.h>
#include <aws/rest-json-protocol/RestJsonProtocolClientConfiguration.h>
#include <smithy/client/features/ChunkingInterceptor.h>
#include <smithy/client/features/ExpectHeaderInterceptor.h>
#include <smithy/client/features/RequestCompressionInterceptor.h>

namespace Aws {
namespace RestJsonProtocol {

namespace {
// Default aws-chunked buffer size used to content encode streaming request bodies.
const size_t DEFAULT_AWS_CHUNKED_BUFFER_SIZE = 64UL * 1024;
}  // namespace

void RestJsonProtocolClientConfiguration::LoadRestJsonProtocolSpecificConfig(const Aws::String& inputProfileName) {
  awsChunkedBufferSize = DEFAULT_AWS_CHUNKED_BUFFER_SIZE;
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

RestJsonProtocolClientConfiguration::RestJsonProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRestJsonProtocolSpecificConfig(this->profileName);
}

RestJsonProtocolClientConfiguration::RestJsonProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRestJsonProtocolSpecificConfig(Aws::String(inputProfileName));
}

RestJsonProtocolClientConfiguration::RestJsonProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRestJsonProtocolSpecificConfig(this->profileName);
}

RestJsonProtocolClientConfiguration::RestJsonProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRestJsonProtocolSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> RestJsonProtocolClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "RestJsonProtocolClientConfiguration";
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

}  // namespace RestJsonProtocol
}  // namespace Aws
