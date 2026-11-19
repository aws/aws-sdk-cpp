/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/ControlCatalogClientConfiguration.h>

namespace Aws {
namespace ControlCatalog {

void ControlCatalogClientConfiguration::LoadControlCatalogSpecificConfig(const Aws::String& inputProfileName) {
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

ControlCatalogClientConfiguration::ControlCatalogClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadControlCatalogSpecificConfig(this->profileName);
}

ControlCatalogClientConfiguration::ControlCatalogClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadControlCatalogSpecificConfig(Aws::String(inputProfileName));
}

ControlCatalogClientConfiguration::ControlCatalogClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadControlCatalogSpecificConfig(this->profileName);
}

ControlCatalogClientConfiguration::ControlCatalogClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadControlCatalogSpecificConfig(this->profileName);
}

}  // namespace ControlCatalog
}  // namespace Aws
