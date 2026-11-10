/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/LookoutEquipmentClientConfiguration.h>

namespace Aws {
namespace LookoutEquipment {

void LookoutEquipmentClientConfiguration::LoadLookoutEquipmentSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const LookoutEquipmentClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace LookoutEquipment
}  // namespace Aws
