/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/AccountAccessClientConfiguration.h>

namespace Aws {
namespace AccountAccess {

void AccountAccessClientConfiguration::LoadAccountAccessSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

AccountAccessClientConfiguration::AccountAccessClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAccountAccessSpecificConfig(this->profileName);
}

AccountAccessClientConfiguration::AccountAccessClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAccountAccessSpecificConfig(Aws::String(inputProfileName));
}

AccountAccessClientConfiguration::AccountAccessClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAccountAccessSpecificConfig(this->profileName);
}

AccountAccessClientConfiguration::AccountAccessClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAccountAccessSpecificConfig(this->profileName);
}

}  // namespace AccountAccess
}  // namespace Aws
