/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/RpcV2ProtocolClientConfiguration.h>

namespace Aws {
namespace RpcV2Protocol {

void RpcV2ProtocolClientConfiguration::LoadRpcV2ProtocolSpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

RpcV2ProtocolClientConfiguration::RpcV2ProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRpcV2ProtocolSpecificConfig(this->profileName);
}

RpcV2ProtocolClientConfiguration::RpcV2ProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRpcV2ProtocolSpecificConfig(Aws::String(inputProfileName));
}

RpcV2ProtocolClientConfiguration::RpcV2ProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRpcV2ProtocolSpecificConfig(this->profileName);
}

RpcV2ProtocolClientConfiguration::RpcV2ProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRpcV2ProtocolSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const RpcV2ProtocolClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace RpcV2Protocol
}  // namespace Aws
