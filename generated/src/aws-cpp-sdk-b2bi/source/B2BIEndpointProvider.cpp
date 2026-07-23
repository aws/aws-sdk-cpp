/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/B2BIEndpointProvider.h>
#include <aws/b2bi/internal/B2BIEndpointRules.h>

namespace Aws {
namespace B2BI {
namespace Endpoint {
B2BIEndpointProvider::B2BIEndpointProvider()
    : B2BIDefaultEpProviderBase(Aws::B2BI::B2BIEndpointRules::GetRulesBlob(), Aws::B2BI::B2BIEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace B2BI
}  // namespace Aws
