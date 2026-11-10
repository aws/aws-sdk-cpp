/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/ApplicationSignalsClientConfiguration.h>

namespace Aws {
namespace ApplicationSignals {

void ApplicationSignalsClientConfiguration::LoadApplicationSignalsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ApplicationSignalsClientConfiguration::ApplicationSignalsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApplicationSignalsSpecificConfig(this->profileName);
}

ApplicationSignalsClientConfiguration::ApplicationSignalsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApplicationSignalsSpecificConfig(Aws::String(inputProfileName));
}

ApplicationSignalsClientConfiguration::ApplicationSignalsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApplicationSignalsSpecificConfig(this->profileName);
}

ApplicationSignalsClientConfiguration::ApplicationSignalsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApplicationSignalsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ApplicationSignalsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ApplicationSignals
}  // namespace Aws
