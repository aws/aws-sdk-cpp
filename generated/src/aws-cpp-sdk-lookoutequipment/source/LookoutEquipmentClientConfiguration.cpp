/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/LookoutEquipmentClientConfiguration.h>

namespace Aws {
namespace LookoutEquipment {

void LookoutEquipmentClientConfiguration::LoadLookoutEquipmentSpecificConfig(const Aws::String& inputProfileName) {
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

LookoutEquipmentClientConfiguration::LookoutEquipmentClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLookoutEquipmentSpecificConfig(this->profileName);
}

LookoutEquipmentClientConfiguration::LookoutEquipmentClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLookoutEquipmentSpecificConfig(Aws::String(inputProfileName));
}

LookoutEquipmentClientConfiguration::LookoutEquipmentClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLookoutEquipmentSpecificConfig(this->profileName);
}

LookoutEquipmentClientConfiguration::LookoutEquipmentClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLookoutEquipmentSpecificConfig(this->profileName);
}

}  // namespace LookoutEquipment
}  // namespace Aws
