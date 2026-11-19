/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/IdentityStoreClientConfiguration.h>

namespace Aws {
namespace IdentityStore {

void IdentityStoreClientConfiguration::LoadIdentityStoreSpecificConfig(const Aws::String& inputProfileName) {
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

IdentityStoreClientConfiguration::IdentityStoreClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIdentityStoreSpecificConfig(this->profileName);
}

IdentityStoreClientConfiguration::IdentityStoreClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIdentityStoreSpecificConfig(Aws::String(inputProfileName));
}

IdentityStoreClientConfiguration::IdentityStoreClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIdentityStoreSpecificConfig(this->profileName);
}

IdentityStoreClientConfiguration::IdentityStoreClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIdentityStoreSpecificConfig(this->profileName);
}

}  // namespace IdentityStore
}  // namespace Aws
