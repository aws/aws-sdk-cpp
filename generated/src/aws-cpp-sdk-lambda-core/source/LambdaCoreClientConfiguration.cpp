/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-core/LambdaCoreClientConfiguration.h>

namespace Aws {
namespace LambdaCore {

void LambdaCoreClientConfiguration::LoadLambdaCoreSpecificConfig(const Aws::String& inputProfileName) {
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

LambdaCoreClientConfiguration::LambdaCoreClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLambdaCoreSpecificConfig(this->profileName);
}

LambdaCoreClientConfiguration::LambdaCoreClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLambdaCoreSpecificConfig(Aws::String(inputProfileName));
}

LambdaCoreClientConfiguration::LambdaCoreClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLambdaCoreSpecificConfig(this->profileName);
}

LambdaCoreClientConfiguration::LambdaCoreClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLambdaCoreSpecificConfig(this->profileName);
}

}  // namespace LambdaCore
}  // namespace Aws
