/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/DirectoryServiceDataClientConfiguration.h>

namespace Aws {
namespace DirectoryServiceData {

void DirectoryServiceDataClientConfiguration::LoadDirectoryServiceDataSpecificConfig(const Aws::String& inputProfileName) {
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

DirectoryServiceDataClientConfiguration::DirectoryServiceDataClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDirectoryServiceDataSpecificConfig(this->profileName);
}

DirectoryServiceDataClientConfiguration::DirectoryServiceDataClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDirectoryServiceDataSpecificConfig(Aws::String(inputProfileName));
}

DirectoryServiceDataClientConfiguration::DirectoryServiceDataClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDirectoryServiceDataSpecificConfig(this->profileName);
}

DirectoryServiceDataClientConfiguration::DirectoryServiceDataClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDirectoryServiceDataSpecificConfig(this->profileName);
}

}  // namespace DirectoryServiceData
}  // namespace Aws
