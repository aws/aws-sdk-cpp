/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/CodeStarconnectionsClientConfiguration.h>

namespace Aws {
namespace CodeStarconnections {

void CodeStarconnectionsClientConfiguration::LoadCodeStarconnectionsSpecificConfig(const Aws::String& inputProfileName) {
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

CodeStarconnectionsClientConfiguration::CodeStarconnectionsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCodeStarconnectionsSpecificConfig(this->profileName);
}

CodeStarconnectionsClientConfiguration::CodeStarconnectionsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCodeStarconnectionsSpecificConfig(Aws::String(inputProfileName));
}

CodeStarconnectionsClientConfiguration::CodeStarconnectionsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCodeStarconnectionsSpecificConfig(this->profileName);
}

CodeStarconnectionsClientConfiguration::CodeStarconnectionsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCodeStarconnectionsSpecificConfig(this->profileName);
}

}  // namespace CodeStarconnections
}  // namespace Aws
