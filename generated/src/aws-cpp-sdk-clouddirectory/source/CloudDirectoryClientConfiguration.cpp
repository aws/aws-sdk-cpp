/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/CloudDirectoryClientConfiguration.h>

namespace Aws {
namespace CloudDirectory {

void CloudDirectoryClientConfiguration::LoadCloudDirectorySpecificConfig(const Aws::String& inputProfileName) {
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

CloudDirectoryClientConfiguration::CloudDirectoryClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudDirectorySpecificConfig(this->profileName);
}

CloudDirectoryClientConfiguration::CloudDirectoryClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudDirectorySpecificConfig(Aws::String(inputProfileName));
}

CloudDirectoryClientConfiguration::CloudDirectoryClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudDirectorySpecificConfig(this->profileName);
}

CloudDirectoryClientConfiguration::CloudDirectoryClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudDirectorySpecificConfig(this->profileName);
}

}  // namespace CloudDirectory
}  // namespace Aws
