/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/GeoPlacesClientConfiguration.h>

namespace Aws {
namespace GeoPlaces {

void GeoPlacesClientConfiguration::LoadGeoPlacesSpecificConfig(const Aws::String& inputProfileName) {
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

GeoPlacesClientConfiguration::GeoPlacesClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadGeoPlacesSpecificConfig(this->profileName);
}

GeoPlacesClientConfiguration::GeoPlacesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadGeoPlacesSpecificConfig(Aws::String(inputProfileName));
}

GeoPlacesClientConfiguration::GeoPlacesClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadGeoPlacesSpecificConfig(this->profileName);
}

GeoPlacesClientConfiguration::GeoPlacesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadGeoPlacesSpecificConfig(this->profileName);
}

}  // namespace GeoPlaces
}  // namespace Aws
