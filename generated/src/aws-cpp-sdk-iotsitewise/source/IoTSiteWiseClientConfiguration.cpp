/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/IoTSiteWiseClientConfiguration.h>

namespace Aws {
namespace IoTSiteWise {

void IoTSiteWiseClientConfiguration::LoadIoTSiteWiseSpecificConfig(const Aws::String& inputProfileName) {
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

IoTSiteWiseClientConfiguration::IoTSiteWiseClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTSiteWiseSpecificConfig(this->profileName);
}

IoTSiteWiseClientConfiguration::IoTSiteWiseClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTSiteWiseSpecificConfig(Aws::String(inputProfileName));
}

IoTSiteWiseClientConfiguration::IoTSiteWiseClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTSiteWiseSpecificConfig(this->profileName);
}

IoTSiteWiseClientConfiguration::IoTSiteWiseClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTSiteWiseSpecificConfig(this->profileName);
}

}  // namespace IoTSiteWise
}  // namespace Aws
