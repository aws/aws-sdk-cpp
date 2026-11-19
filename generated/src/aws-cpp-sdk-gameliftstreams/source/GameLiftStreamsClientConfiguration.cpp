/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/GameLiftStreamsClientConfiguration.h>

namespace Aws {
namespace GameLiftStreams {

void GameLiftStreamsClientConfiguration::LoadGameLiftStreamsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

GameLiftStreamsClientConfiguration::GameLiftStreamsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadGameLiftStreamsSpecificConfig(this->profileName);
}

GameLiftStreamsClientConfiguration::GameLiftStreamsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadGameLiftStreamsSpecificConfig(Aws::String(inputProfileName));
}

GameLiftStreamsClientConfiguration::GameLiftStreamsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadGameLiftStreamsSpecificConfig(this->profileName);
}

GameLiftStreamsClientConfiguration::GameLiftStreamsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadGameLiftStreamsSpecificConfig(this->profileName);
}

}  // namespace GameLiftStreams
}  // namespace Aws
