/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/IoTEndpointProvider.h>
#include <aws/iot/internal/IoTEndpointRules.h>

namespace Aws {
namespace IoT {
namespace Endpoint {
IoTEndpointProvider::IoTEndpointProvider()
    : IoTDefaultEpProviderBase(Aws::IoT::IoTEndpointRules::GetRulesBlob(), Aws::IoT::IoTEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoT
}  // namespace Aws
