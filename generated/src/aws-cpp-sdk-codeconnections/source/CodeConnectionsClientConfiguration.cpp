/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/CodeConnectionsClientConfiguration.h>

namespace Aws {
namespace CodeConnections {

void CodeConnectionsClientConfiguration::LoadCodeConnectionsSpecificConfig(const Aws::String& inputProfileName) {
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

CodeConnectionsClientConfiguration::CodeConnectionsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCodeConnectionsSpecificConfig(this->profileName);
}

CodeConnectionsClientConfiguration::CodeConnectionsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCodeConnectionsSpecificConfig(Aws::String(inputProfileName));
}

CodeConnectionsClientConfiguration::CodeConnectionsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCodeConnectionsSpecificConfig(this->profileName);
}

CodeConnectionsClientConfiguration::CodeConnectionsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCodeConnectionsSpecificConfig(this->profileName);
}

}  // namespace CodeConnections
}  // namespace Aws
