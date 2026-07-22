/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/ElasticsearchServiceEndpointProvider.h>
#include <aws/es/internal/ElasticsearchServiceEndpointRules.h>

namespace Aws {
namespace ElasticsearchService {
namespace Endpoint {
ElasticsearchServiceEndpointProvider::ElasticsearchServiceEndpointProvider()
    : ElasticsearchServiceDefaultEpProviderBase(Aws::ElasticsearchService::ElasticsearchServiceEndpointRules::GetRulesBlob(),
                                                Aws::ElasticsearchService::ElasticsearchServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ElasticsearchService
}  // namespace Aws
