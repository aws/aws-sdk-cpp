/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/IoTSecureTunnelingClientConfiguration.h>

namespace Aws {
namespace IoTSecureTunneling {

void IoTSecureTunnelingClientConfiguration::LoadIoTSecureTunnelingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

IoTSecureTunnelingClientConfiguration::IoTSecureTunnelingClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTSecureTunnelingSpecificConfig(this->profileName);
}

IoTSecureTunnelingClientConfiguration::IoTSecureTunnelingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTSecureTunnelingSpecificConfig(Aws::String(inputProfileName));
}

IoTSecureTunnelingClientConfiguration::IoTSecureTunnelingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTSecureTunnelingSpecificConfig(this->profileName);
}

IoTSecureTunnelingClientConfiguration::IoTSecureTunnelingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTSecureTunnelingSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const IoTSecureTunnelingClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace IoTSecureTunneling
}  // namespace Aws
