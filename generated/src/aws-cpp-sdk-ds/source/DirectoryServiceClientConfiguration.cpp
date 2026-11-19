/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/DirectoryServiceClientConfiguration.h>

namespace Aws {
namespace DirectoryService {

void DirectoryServiceClientConfiguration::LoadDirectoryServiceSpecificConfig(const Aws::String& inputProfileName) {
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

DirectoryServiceClientConfiguration::DirectoryServiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDirectoryServiceSpecificConfig(this->profileName);
}

DirectoryServiceClientConfiguration::DirectoryServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDirectoryServiceSpecificConfig(Aws::String(inputProfileName));
}

DirectoryServiceClientConfiguration::DirectoryServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDirectoryServiceSpecificConfig(this->profileName);
}

DirectoryServiceClientConfiguration::DirectoryServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDirectoryServiceSpecificConfig(this->profileName);
}

}  // namespace DirectoryService
}  // namespace Aws
