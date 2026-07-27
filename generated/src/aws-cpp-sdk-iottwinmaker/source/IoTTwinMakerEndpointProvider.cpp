/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/IoTTwinMakerEndpointProvider.h>
#include <aws/iottwinmaker/internal/IoTTwinMakerEndpointRules.h>

namespace Aws {
namespace IoTTwinMaker {
namespace Endpoint {
IoTTwinMakerEndpointProvider::IoTTwinMakerEndpointProvider()
    : IoTTwinMakerDefaultEpProviderBase(Aws::IoTTwinMaker::IoTTwinMakerEndpointRules::GetRulesBlob(),
                                        Aws::IoTTwinMaker::IoTTwinMakerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTTwinMaker
}  // namespace Aws
