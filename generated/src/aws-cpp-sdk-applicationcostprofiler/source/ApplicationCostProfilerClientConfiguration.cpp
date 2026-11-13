/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/ApplicationCostProfilerClientConfiguration.h>

namespace Aws {
namespace ApplicationCostProfiler {

void ApplicationCostProfilerClientConfiguration::LoadApplicationCostProfilerSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ApplicationCostProfilerClientConfiguration::ApplicationCostProfilerClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApplicationCostProfilerSpecificConfig(this->profileName);
}

ApplicationCostProfilerClientConfiguration::ApplicationCostProfilerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApplicationCostProfilerSpecificConfig(Aws::String(inputProfileName));
}

ApplicationCostProfilerClientConfiguration::ApplicationCostProfilerClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApplicationCostProfilerSpecificConfig(this->profileName);
}

ApplicationCostProfilerClientConfiguration::ApplicationCostProfilerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApplicationCostProfilerSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ApplicationCostProfilerClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ApplicationCostProfiler
}  // namespace Aws
