/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointProvider.h>
#include <aws/iotsecuretunneling/internal/IoTSecureTunnelingEndpointRules.h>

namespace Aws {
namespace IoTSecureTunneling {
namespace Endpoint {
IoTSecureTunnelingEndpointProvider::IoTSecureTunnelingEndpointProvider()
    : IoTSecureTunnelingDefaultEpProviderBase(Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::GetRulesBlob(),
                                              Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTSecureTunneling
}  // namespace Aws
