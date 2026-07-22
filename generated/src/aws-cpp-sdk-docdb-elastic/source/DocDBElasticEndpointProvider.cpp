/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/DocDBElasticEndpointProvider.h>
#include <aws/docdb-elastic/internal/DocDBElasticEndpointRules.h>

namespace Aws {
namespace DocDBElastic {
namespace Endpoint {
DocDBElasticEndpointProvider::DocDBElasticEndpointProvider()
    : DocDBElasticDefaultEpProviderBase(Aws::DocDBElastic::DocDBElasticEndpointRules::GetRulesBlob(),
                                        Aws::DocDBElastic::DocDBElasticEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DocDBElastic
}  // namespace Aws
