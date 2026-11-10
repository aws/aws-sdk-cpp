/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/KeyspacesStreamsClientConfiguration.h>

namespace Aws {
namespace KeyspacesStreams {

void KeyspacesStreamsClientConfiguration::LoadKeyspacesStreamsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

KeyspacesStreamsClientConfiguration::KeyspacesStreamsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKeyspacesStreamsSpecificConfig(this->profileName);
}

KeyspacesStreamsClientConfiguration::KeyspacesStreamsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKeyspacesStreamsSpecificConfig(Aws::String(inputProfileName));
}

KeyspacesStreamsClientConfiguration::KeyspacesStreamsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKeyspacesStreamsSpecificConfig(this->profileName);
}

KeyspacesStreamsClientConfiguration::KeyspacesStreamsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKeyspacesStreamsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KeyspacesStreamsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace KeyspacesStreams
}  // namespace Aws
