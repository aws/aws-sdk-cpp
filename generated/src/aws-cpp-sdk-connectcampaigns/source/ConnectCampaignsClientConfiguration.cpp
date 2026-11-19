/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/ConnectCampaignsClientConfiguration.h>

namespace Aws {
namespace ConnectCampaigns {

void ConnectCampaignsClientConfiguration::LoadConnectCampaignsSpecificConfig(const Aws::String& inputProfileName) {
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

ConnectCampaignsClientConfiguration::ConnectCampaignsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadConnectCampaignsSpecificConfig(this->profileName);
}

ConnectCampaignsClientConfiguration::ConnectCampaignsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadConnectCampaignsSpecificConfig(Aws::String(inputProfileName));
}

ConnectCampaignsClientConfiguration::ConnectCampaignsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadConnectCampaignsSpecificConfig(this->profileName);
}

ConnectCampaignsClientConfiguration::ConnectCampaignsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadConnectCampaignsSpecificConfig(this->profileName);
}

}  // namespace ConnectCampaigns
}  // namespace Aws
