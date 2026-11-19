/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/ApplicationAutoScalingClientConfiguration.h>

namespace Aws {
namespace ApplicationAutoScaling {

void ApplicationAutoScalingClientConfiguration::LoadApplicationAutoScalingSpecificConfig(const Aws::String& inputProfileName) {
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

ApplicationAutoScalingClientConfiguration::ApplicationAutoScalingClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApplicationAutoScalingSpecificConfig(this->profileName);
}

ApplicationAutoScalingClientConfiguration::ApplicationAutoScalingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApplicationAutoScalingSpecificConfig(Aws::String(inputProfileName));
}

ApplicationAutoScalingClientConfiguration::ApplicationAutoScalingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApplicationAutoScalingSpecificConfig(this->profileName);
}

ApplicationAutoScalingClientConfiguration::ApplicationAutoScalingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApplicationAutoScalingSpecificConfig(this->profileName);
}

}  // namespace ApplicationAutoScaling
}  // namespace Aws
