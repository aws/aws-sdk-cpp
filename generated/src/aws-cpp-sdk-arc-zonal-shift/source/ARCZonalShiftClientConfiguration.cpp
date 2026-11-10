/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/ARCZonalShiftClientConfiguration.h>

namespace Aws {
namespace ARCZonalShift {

void ARCZonalShiftClientConfiguration::LoadARCZonalShiftSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ARCZonalShiftClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ARCZonalShift
}  // namespace Aws
