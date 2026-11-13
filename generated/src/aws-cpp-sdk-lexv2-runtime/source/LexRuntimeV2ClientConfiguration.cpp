/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/LexRuntimeV2ClientConfiguration.h>

namespace Aws {
namespace LexRuntimeV2 {

void LexRuntimeV2ClientConfiguration::LoadLexRuntimeV2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLexRuntimeV2SpecificConfig(this->profileName);
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLexRuntimeV2SpecificConfig(Aws::String(inputProfileName));
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLexRuntimeV2SpecificConfig(this->profileName);
}

LexRuntimeV2ClientConfiguration::LexRuntimeV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLexRuntimeV2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const LexRuntimeV2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace LexRuntimeV2
}  // namespace Aws
