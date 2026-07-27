/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/DSQLEndpointProvider.h>
#include <aws/dsql/internal/DSQLEndpointRules.h>

namespace Aws {
namespace DSQL {
namespace Endpoint {
DSQLEndpointProvider::DSQLEndpointProvider()
    : DSQLDefaultEpProviderBase(Aws::DSQL::DSQLEndpointRules::GetRulesBlob(), Aws::DSQL::DSQLEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DSQL
}  // namespace Aws
