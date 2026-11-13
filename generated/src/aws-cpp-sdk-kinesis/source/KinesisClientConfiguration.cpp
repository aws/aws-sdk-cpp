/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/KinesisClientConfiguration.h>

namespace Aws {
namespace Kinesis {

void KinesisClientConfiguration::LoadKinesisSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
  accountIdEndpointMode = Aws::Client::LoadAccountIdEndpointModeFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KinesisClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.accountId = config.accountId;
  options.accountIdEndpointMode = config.accountIdEndpointMode;
  return options;
}

}  // namespace Kinesis
}  // namespace Aws
