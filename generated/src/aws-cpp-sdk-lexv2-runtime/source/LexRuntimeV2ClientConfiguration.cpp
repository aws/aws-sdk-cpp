/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/HttpClient.h>
#include <aws/lexv2-runtime/LexRuntimeV2ClientConfiguration.h>
#include <smithy/client/features/ChunkingInterceptor.h>
#include <smithy/client/features/ExpectHeaderInterceptor.h>

namespace Aws {
namespace LexRuntimeV2 {

namespace {
// Default aws-chunked buffer size used to content encode streaming request bodies.
const size_t DEFAULT_AWS_CHUNKED_BUFFER_SIZE = 64UL * 1024;
}  // namespace

void LexRuntimeV2ClientConfiguration::LoadLexRuntimeV2SpecificConfig(const Aws::String& inputProfileName) {
  awsChunkedBufferSize = DEFAULT_AWS_CHUNKED_BUFFER_SIZE;
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLexRuntimeV2SpecificConfig(this->profileName);
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLexRuntimeV2SpecificConfig(Aws::String(inputProfileName));
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLexRuntimeV2SpecificConfig(this->profileName);
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLexRuntimeV2SpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> LexRuntimeV2ClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "LexRuntimeV2ClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(Aws::MakeShared<smithy::client::features::ChunkingInterceptor>(
      TAG, request.httpClient->IsDefaultAwsHttpClient() ? Aws::Client::HttpClientChunkedMode::DEFAULT : httpClientChunkedMode,
      awsChunkedBufferSize));
  if (!disableExpectHeader) {
    interceptors.push_back(Aws::MakeShared<smithy::client::features::ExpectHeaderInterceptor>(TAG));
  }
  return interceptors;
}

}  // namespace LexRuntimeV2
}  // namespace Aws
