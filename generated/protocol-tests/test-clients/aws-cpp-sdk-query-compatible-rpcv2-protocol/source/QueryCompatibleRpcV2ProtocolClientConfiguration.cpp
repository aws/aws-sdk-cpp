/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolClientConfiguration.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {

void QueryCompatibleRpcV2ProtocolClientConfiguration::LoadQueryCompatibleRpcV2ProtocolSpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

QueryCompatibleRpcV2ProtocolClientConfiguration::QueryCompatibleRpcV2ProtocolClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadQueryCompatibleRpcV2ProtocolSpecificConfig(this->profileName);
}

QueryCompatibleRpcV2ProtocolClientConfiguration::QueryCompatibleRpcV2ProtocolClientConfiguration(const char* inputProfileName,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadQueryCompatibleRpcV2ProtocolSpecificConfig(Aws::String(inputProfileName));
}

QueryCompatibleRpcV2ProtocolClientConfiguration::QueryCompatibleRpcV2ProtocolClientConfiguration(bool useSmartDefaults,
                                                                                                 const char* defaultMode,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadQueryCompatibleRpcV2ProtocolSpecificConfig(this->profileName);
}

QueryCompatibleRpcV2ProtocolClientConfiguration::QueryCompatibleRpcV2ProtocolClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadQueryCompatibleRpcV2ProtocolSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const QueryCompatibleRpcV2ProtocolClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
