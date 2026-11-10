/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/ConnectCampaignsV2ClientConfiguration.h>

namespace Aws {
namespace ConnectCampaignsV2 {

void ConnectCampaignsV2ClientConfiguration::LoadConnectCampaignsV2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ConnectCampaignsV2ClientConfiguration::ConnectCampaignsV2ClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadConnectCampaignsV2SpecificConfig(this->profileName);
}

ConnectCampaignsV2ClientConfiguration::ConnectCampaignsV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadConnectCampaignsV2SpecificConfig(Aws::String(inputProfileName));
}

ConnectCampaignsV2ClientConfiguration::ConnectCampaignsV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadConnectCampaignsV2SpecificConfig(this->profileName);
}

ConnectCampaignsV2ClientConfiguration::ConnectCampaignsV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadConnectCampaignsV2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ConnectCampaignsV2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ConnectCampaignsV2
}  // namespace Aws
