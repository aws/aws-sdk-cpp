/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolClientConfiguration.h>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {

void NonQueryCompatibleRpcV2ProtocolClientConfiguration::LoadNonQueryCompatibleRpcV2ProtocolSpecificConfig(
    const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

NonQueryCompatibleRpcV2ProtocolClientConfiguration::NonQueryCompatibleRpcV2ProtocolClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadNonQueryCompatibleRpcV2ProtocolSpecificConfig(this->profileName);
}

NonQueryCompatibleRpcV2ProtocolClientConfiguration::NonQueryCompatibleRpcV2ProtocolClientConfiguration(const char* inputProfileName,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadNonQueryCompatibleRpcV2ProtocolSpecificConfig(Aws::String(inputProfileName));
}

NonQueryCompatibleRpcV2ProtocolClientConfiguration::NonQueryCompatibleRpcV2ProtocolClientConfiguration(bool useSmartDefaults,
                                                                                                       const char* defaultMode,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadNonQueryCompatibleRpcV2ProtocolSpecificConfig(this->profileName);
}

NonQueryCompatibleRpcV2ProtocolClientConfiguration::NonQueryCompatibleRpcV2ProtocolClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadNonQueryCompatibleRpcV2ProtocolSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const NonQueryCompatibleRpcV2ProtocolClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
