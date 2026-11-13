/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/EBSClientConfiguration.h>

namespace Aws {
namespace EBS {

void EBSClientConfiguration::LoadEBSSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EBSClientConfiguration::EBSClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEBSSpecificConfig(this->profileName);
}

EBSClientConfiguration::EBSClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEBSSpecificConfig(Aws::String(inputProfileName));
}

EBSClientConfiguration::EBSClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEBSSpecificConfig(this->profileName);
}

EBSClientConfiguration::EBSClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadEBSSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EBSClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace EBS
}  // namespace Aws
