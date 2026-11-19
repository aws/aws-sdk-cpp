/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/UserAgent.h>
#include <aws/kinesis/KinesisClientConfiguration.h>
#include <smithy/client/features/UserAgentFeatureInterceptor.h>

namespace Aws {
namespace Kinesis {

void KinesisClientConfiguration::LoadKinesisSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  // accountId is intentionally not loaded: AWS_ACCOUNT_ID may not match the credentials in use.
  accountIdEndpointMode = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
      "AWS_ACCOUNT_ID_ENDPOINT_MODE", this->profileName, "account_id_endpoint_mode", {"required", "disabled", "preferred"}, "preferred");
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

KinesisClientConfiguration::KinesisClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisSpecificConfig(this->profileName);
}

KinesisClientConfiguration::KinesisClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisSpecificConfig(Aws::String(inputProfileName));
}

KinesisClientConfiguration::KinesisClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisSpecificConfig(this->profileName);
}

KinesisClientConfiguration::KinesisClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> KinesisClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "KinesisClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  const auto accountIdEndpointModeFeature = Aws::Client::UserAgent::FeatureForAccountIdEndpointMode(accountIdEndpointMode);
  if (accountIdEndpointModeFeature) {
    interceptors.push_back(Aws::MakeShared<smithy::client::features::UserAgentFeatureInterceptor>(
        TAG, Aws::Set<Aws::Client::UserAgentFeature>{*accountIdEndpointModeFeature}));
  }
  (void)(request);
  return interceptors;
}

}  // namespace Kinesis
}  // namespace Aws
