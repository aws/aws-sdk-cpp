/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/CloudSearchEndpointProvider.h>
#include <aws/cloudsearch/internal/CloudSearchEndpointRules.h>

namespace Aws {
namespace CloudSearch {
namespace Endpoint {
CloudSearchEndpointProvider::CloudSearchEndpointProvider()
    : CloudSearchDefaultEpProviderBase(Aws::CloudSearch::CloudSearchEndpointRules::GetRulesBlob(),
                                       Aws::CloudSearch::CloudSearchEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudSearch
}  // namespace Aws
