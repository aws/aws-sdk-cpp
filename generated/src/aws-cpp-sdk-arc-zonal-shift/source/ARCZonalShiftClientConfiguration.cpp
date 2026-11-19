/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/ARCZonalShiftClientConfiguration.h>

namespace Aws {
namespace ARCZonalShift {

void ARCZonalShiftClientConfiguration::LoadARCZonalShiftSpecificConfig(const Aws::String& inputProfileName) {
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

ARCZonalShiftClientConfiguration::ARCZonalShiftClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadARCZonalShiftSpecificConfig(this->profileName);
}

ARCZonalShiftClientConfiguration::ARCZonalShiftClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadARCZonalShiftSpecificConfig(Aws::String(inputProfileName));
}

ARCZonalShiftClientConfiguration::ARCZonalShiftClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadARCZonalShiftSpecificConfig(this->profileName);
}

ARCZonalShiftClientConfiguration::ARCZonalShiftClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadARCZonalShiftSpecificConfig(this->profileName);
}

}  // namespace ARCZonalShift
}  // namespace Aws
