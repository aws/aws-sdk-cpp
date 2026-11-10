/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/CodeStarconnectionsClientConfiguration.h>

namespace Aws {
namespace CodeStarconnections {

void CodeStarconnectionsClientConfiguration::LoadCodeStarconnectionsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const CodeStarconnectionsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace CodeStarconnections
}  // namespace Aws
