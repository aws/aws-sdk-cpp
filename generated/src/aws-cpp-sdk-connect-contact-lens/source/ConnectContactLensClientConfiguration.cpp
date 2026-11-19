/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/ConnectContactLensClientConfiguration.h>

namespace Aws {
namespace ConnectContactLens {

void ConnectContactLensClientConfiguration::LoadConnectContactLensSpecificConfig(const Aws::String& inputProfileName) {
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

ConnectContactLensClientConfiguration::ConnectContactLensClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadConnectContactLensSpecificConfig(this->profileName);
}

ConnectContactLensClientConfiguration::ConnectContactLensClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadConnectContactLensSpecificConfig(Aws::String(inputProfileName));
}

ConnectContactLensClientConfiguration::ConnectContactLensClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadConnectContactLensSpecificConfig(this->profileName);
}

ConnectContactLensClientConfiguration::ConnectContactLensClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadConnectContactLensSpecificConfig(this->profileName);
}

}  // namespace ConnectContactLens
}  // namespace Aws
