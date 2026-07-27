/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/Cloud9EndpointProvider.h>
#include <aws/cloud9/internal/Cloud9EndpointRules.h>

namespace Aws {
namespace Cloud9 {
namespace Endpoint {
Cloud9EndpointProvider::Cloud9EndpointProvider()
    : Cloud9DefaultEpProviderBase(Aws::Cloud9::Cloud9EndpointRules::GetRulesBlob(), Aws::Cloud9::Cloud9EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Cloud9
}  // namespace Aws
