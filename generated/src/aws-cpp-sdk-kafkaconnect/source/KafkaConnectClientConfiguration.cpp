/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/KafkaConnectClientConfiguration.h>

namespace Aws {
namespace KafkaConnect {

void KafkaConnectClientConfiguration::LoadKafkaConnectSpecificConfig(const Aws::String& inputProfileName) {
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

KafkaConnectClientConfiguration::KafkaConnectClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKafkaConnectSpecificConfig(this->profileName);
}

KafkaConnectClientConfiguration::KafkaConnectClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKafkaConnectSpecificConfig(Aws::String(inputProfileName));
}

KafkaConnectClientConfiguration::KafkaConnectClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKafkaConnectSpecificConfig(this->profileName);
}

KafkaConnectClientConfiguration::KafkaConnectClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKafkaConnectSpecificConfig(this->profileName);
}

}  // namespace KafkaConnect
}  // namespace Aws
