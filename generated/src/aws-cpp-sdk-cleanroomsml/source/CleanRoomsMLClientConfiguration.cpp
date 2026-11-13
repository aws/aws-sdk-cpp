/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/CleanRoomsMLClientConfiguration.h>

namespace Aws {
namespace CleanRoomsML {

void CleanRoomsMLClientConfiguration::LoadCleanRoomsMLSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CleanRoomsMLClientConfiguration::CleanRoomsMLClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCleanRoomsMLSpecificConfig(this->profileName);
}

CleanRoomsMLClientConfiguration::CleanRoomsMLClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCleanRoomsMLSpecificConfig(Aws::String(inputProfileName));
}

CleanRoomsMLClientConfiguration::CleanRoomsMLClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCleanRoomsMLSpecificConfig(this->profileName);
}

CleanRoomsMLClientConfiguration::CleanRoomsMLClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCleanRoomsMLSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const CleanRoomsMLClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace CleanRoomsML
}  // namespace Aws
