/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/B2BIClientConfiguration.h>

namespace Aws {
namespace B2BI {

void B2BIClientConfiguration::LoadB2BISpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

B2BIClientConfiguration::B2BIClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadB2BISpecificConfig(this->profileName);
}

B2BIClientConfiguration::B2BIClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadB2BISpecificConfig(Aws::String(inputProfileName));
}

B2BIClientConfiguration::B2BIClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadB2BISpecificConfig(this->profileName);
}

B2BIClientConfiguration::B2BIClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadB2BISpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const B2BIClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace B2BI
}  // namespace Aws
