/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/AmplifyUIBuilderClientConfiguration.h>

namespace Aws {
namespace AmplifyUIBuilder {

void AmplifyUIBuilderClientConfiguration::LoadAmplifyUIBuilderSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

AmplifyUIBuilderClientConfiguration::AmplifyUIBuilderClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAmplifyUIBuilderSpecificConfig(this->profileName);
}

AmplifyUIBuilderClientConfiguration::AmplifyUIBuilderClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAmplifyUIBuilderSpecificConfig(Aws::String(inputProfileName));
}

AmplifyUIBuilderClientConfiguration::AmplifyUIBuilderClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAmplifyUIBuilderSpecificConfig(this->profileName);
}

AmplifyUIBuilderClientConfiguration::AmplifyUIBuilderClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAmplifyUIBuilderSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const AmplifyUIBuilderClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace AmplifyUIBuilder
}  // namespace Aws
