/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/DevOpsGuruClientConfiguration.h>

namespace Aws {
namespace DevOpsGuru {

void DevOpsGuruClientConfiguration::LoadDevOpsGuruSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDevOpsGuruSpecificConfig(this->profileName);
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDevOpsGuruSpecificConfig(Aws::String(inputProfileName));
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDevOpsGuruSpecificConfig(this->profileName);
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDevOpsGuruSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const DevOpsGuruClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace DevOpsGuru
}  // namespace Aws
