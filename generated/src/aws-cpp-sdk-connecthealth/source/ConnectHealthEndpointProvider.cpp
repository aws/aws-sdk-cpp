/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/ConnectHealthEndpointProvider.h>
#include <aws/connecthealth/internal/ConnectHealthEndpointRules.h>

namespace Aws {
namespace ConnectHealth {
namespace Endpoint {
ConnectHealthEndpointProvider::ConnectHealthEndpointProvider()
    : ConnectHealthDefaultEpProviderBase(Aws::ConnectHealth::ConnectHealthEndpointRules::GetRulesBlob(),
                                         Aws::ConnectHealth::ConnectHealthEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectHealth
}  // namespace Aws
