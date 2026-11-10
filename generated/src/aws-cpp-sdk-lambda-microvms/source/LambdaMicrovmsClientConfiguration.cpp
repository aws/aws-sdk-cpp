/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-microvms/LambdaMicrovmsClientConfiguration.h>

namespace Aws {
namespace LambdaMicrovms {

void LambdaMicrovmsClientConfiguration::LoadLambdaMicrovmsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

LambdaMicrovmsClientConfiguration::LambdaMicrovmsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLambdaMicrovmsSpecificConfig(this->profileName);
}

LambdaMicrovmsClientConfiguration::LambdaMicrovmsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLambdaMicrovmsSpecificConfig(Aws::String(inputProfileName));
}

LambdaMicrovmsClientConfiguration::LambdaMicrovmsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLambdaMicrovmsSpecificConfig(this->profileName);
}

LambdaMicrovmsClientConfiguration::LambdaMicrovmsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLambdaMicrovmsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const LambdaMicrovmsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace LambdaMicrovms
}  // namespace Aws
