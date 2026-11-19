/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/IvsrealtimeClientConfiguration.h>

namespace Aws {
namespace ivsrealtime {

void IvsrealtimeClientConfiguration::LoadivsrealtimeSpecificConfig(const Aws::String& inputProfileName) {
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

IvsrealtimeClientConfiguration::IvsrealtimeClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadivsrealtimeSpecificConfig(this->profileName);
}

IvsrealtimeClientConfiguration::IvsrealtimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadivsrealtimeSpecificConfig(Aws::String(inputProfileName));
}

IvsrealtimeClientConfiguration::IvsrealtimeClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadivsrealtimeSpecificConfig(this->profileName);
}

IvsrealtimeClientConfiguration::IvsrealtimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadivsrealtimeSpecificConfig(this->profileName);
}

}  // namespace ivsrealtime
}  // namespace Aws
