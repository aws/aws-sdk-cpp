/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/Cloud9ClientConfiguration.h>

namespace Aws {
namespace Cloud9 {

void Cloud9ClientConfiguration::LoadCloud9SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Cloud9ClientConfiguration::Cloud9ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloud9SpecificConfig(this->profileName);
}

Cloud9ClientConfiguration::Cloud9ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloud9SpecificConfig(Aws::String(inputProfileName));
}

Cloud9ClientConfiguration::Cloud9ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloud9SpecificConfig(this->profileName);
}

Cloud9ClientConfiguration::Cloud9ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloud9SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const Cloud9ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace Cloud9
}  // namespace Aws
