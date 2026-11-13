/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/AutoScalingPlansClientConfiguration.h>

namespace Aws {
namespace AutoScalingPlans {

void AutoScalingPlansClientConfiguration::LoadAutoScalingPlansSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

AutoScalingPlansClientConfiguration::AutoScalingPlansClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAutoScalingPlansSpecificConfig(this->profileName);
}

AutoScalingPlansClientConfiguration::AutoScalingPlansClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAutoScalingPlansSpecificConfig(Aws::String(inputProfileName));
}

AutoScalingPlansClientConfiguration::AutoScalingPlansClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAutoScalingPlansSpecificConfig(this->profileName);
}

AutoScalingPlansClientConfiguration::AutoScalingPlansClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAutoScalingPlansSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const AutoScalingPlansClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace AutoScalingPlans
}  // namespace Aws
