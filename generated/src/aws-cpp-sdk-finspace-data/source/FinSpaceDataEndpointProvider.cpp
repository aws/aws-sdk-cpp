/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/FinSpaceDataEndpointProvider.h>
#include <aws/finspace-data/internal/FinSpaceDataEndpointRules.h>

namespace Aws {
namespace FinSpaceData {
namespace Endpoint {
FinSpaceDataEndpointProvider::FinSpaceDataEndpointProvider()
    : FinSpaceDataDefaultEpProviderBase(Aws::FinSpaceData::FinSpaceDataEndpointRules::GetRulesBlob(),
                                        Aws::FinSpaceData::FinSpaceDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace FinSpaceData
}  // namespace Aws
