/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/EventBridgeEndpointProvider.h>
#include <aws/eventbridge/internal/EventBridgeEndpointRules.h>

namespace Aws {
namespace EventBridge {
namespace Endpoint {
EventBridgeEndpointProvider::EventBridgeEndpointProvider()
    : EventBridgeDefaultEpProviderBase(Aws::EventBridge::EventBridgeEndpointRules::GetRulesBlob(),
                                       Aws::EventBridge::EventBridgeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EventBridge
}  // namespace Aws
