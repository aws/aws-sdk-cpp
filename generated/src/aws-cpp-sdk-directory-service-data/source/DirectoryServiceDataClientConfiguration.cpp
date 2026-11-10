/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/DirectoryServiceDataClientConfiguration.h>

namespace Aws {
namespace DirectoryServiceData {

void DirectoryServiceDataClientConfiguration::LoadDirectoryServiceDataSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const DirectoryServiceDataClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace DirectoryServiceData
}  // namespace Aws
