/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/ConnectSchedulingEndpointProvider.h>
#include <aws/connectscheduling/internal/ConnectSchedulingEndpointRules.h>

namespace Aws {
namespace ConnectScheduling {
namespace Endpoint {
ConnectSchedulingEndpointProvider::ConnectSchedulingEndpointProvider()
    : ConnectSchedulingDefaultEpProviderBase(Aws::ConnectScheduling::ConnectSchedulingEndpointRules::GetRulesBlob(),
                                             Aws::ConnectScheduling::ConnectSchedulingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectScheduling
}  // namespace Aws
