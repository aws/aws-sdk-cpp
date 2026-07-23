/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/DocDBEndpointProvider.h>
#include <aws/docdb/internal/DocDBEndpointRules.h>

namespace Aws {
namespace DocDB {
namespace Endpoint {
DocDBEndpointProvider::DocDBEndpointProvider()
    : DocDBDefaultEpProviderBase(Aws::DocDB::DocDBEndpointRules::GetRulesBlob(), Aws::DocDB::DocDBEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DocDB
}  // namespace Aws
