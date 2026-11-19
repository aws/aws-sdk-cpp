/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/BedrockRuntimeClientConfiguration.h>
#include <aws/core/http/HttpClient.h>
#include <smithy/client/features/ChunkingInterceptor.h>
#include <smithy/client/features/ExpectHeaderInterceptor.h>

namespace Aws {
namespace BedrockRuntime {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";
namespace {
// Default aws-chunked buffer size used to content encode streaming request bodies.
const size_t DEFAULT_AWS_CHUNKED_BUFFER_SIZE = 64UL * 1024;
}  // namespace

void BedrockRuntimeClientConfiguration::LoadBedrockRuntimeSpecificConfig(const Aws::String& inputProfileName) {
  awsChunkedBufferSize = DEFAULT_AWS_CHUNKED_BUFFER_SIZE;
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  const Aws::String& bedrockToken =
      BaseClientConfigClass::LoadConfigFromEnvOrProfile(AWS_BEARER_TOKEN_BEDROCK, inputProfileName, AWS_BEARER_TOKEN_BEDROCK, {}, "");
  if (!bedrockToken.empty()) {
    Aws::Vector<Aws::String>::iterator position = std::find(authPreferences.begin(), authPreferences.end(), "bearer");
    if (position != authPreferences.end()) {
      authPreferences.erase(position);
    }
    authPreferences.insert(authPreferences.begin(), "bearer");
  }
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockRuntimeSpecificConfig(this->profileName);
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockRuntimeSpecificConfig(Aws::String(inputProfileName));
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockRuntimeSpecificConfig(this->profileName);
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBedrockRuntimeSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> BedrockRuntimeClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "BedrockRuntimeClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  interceptors.push_back(Aws::MakeShared<smithy::client::features::ChunkingInterceptor>(
      TAG, request.httpClient->IsDefaultAwsHttpClient() ? Aws::Client::HttpClientChunkedMode::DEFAULT : httpClientChunkedMode,
      awsChunkedBufferSize));
  if (!disableExpectHeader) {
    interceptors.push_back(Aws::MakeShared<smithy::client::features::ExpectHeaderInterceptor>(TAG));
  }
  return interceptors;
}

}  // namespace BedrockRuntime
}  // namespace Aws
