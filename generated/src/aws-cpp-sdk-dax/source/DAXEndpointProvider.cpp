/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/DAXEndpointProvider.h>
#include <aws/dax/internal/DAXEndpointRules.h>

namespace Aws {
namespace DAX {
namespace Endpoint {
DAXEndpointProvider::DAXEndpointProvider()
    : DAXDefaultEpProviderBase(Aws::DAX::DAXEndpointRules::GetRulesBlob(), Aws::DAX::DAXEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DAX
}  // namespace Aws
