/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/CloudHSMV2ClientConfiguration.h>

namespace Aws {
namespace CloudHSMV2 {

void CloudHSMV2ClientConfiguration::LoadCloudHSMV2SpecificConfig(const Aws::String& inputProfileName) {
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

CloudHSMV2ClientConfiguration::CloudHSMV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudHSMV2SpecificConfig(this->profileName);
}

CloudHSMV2ClientConfiguration::CloudHSMV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudHSMV2SpecificConfig(Aws::String(inputProfileName));
}

CloudHSMV2ClientConfiguration::CloudHSMV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudHSMV2SpecificConfig(this->profileName);
}

CloudHSMV2ClientConfiguration::CloudHSMV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudHSMV2SpecificConfig(this->profileName);
}

}  // namespace CloudHSMV2
}  // namespace Aws
