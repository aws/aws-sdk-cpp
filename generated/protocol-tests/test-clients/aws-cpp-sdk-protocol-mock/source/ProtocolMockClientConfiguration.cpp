/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/protocol-mock/ProtocolMockClientConfiguration.h>

namespace Aws {
namespace ProtocolMock {

void ProtocolMockClientConfiguration::LoadProtocolMockSpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ProtocolMockClientConfiguration::ProtocolMockClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadProtocolMockSpecificConfig(this->profileName);
}

ProtocolMockClientConfiguration::ProtocolMockClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadProtocolMockSpecificConfig(Aws::String(inputProfileName));
}

ProtocolMockClientConfiguration::ProtocolMockClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadProtocolMockSpecificConfig(this->profileName);
}

ProtocolMockClientConfiguration::ProtocolMockClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadProtocolMockSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ProtocolMockClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ProtocolMock
}  // namespace Aws
