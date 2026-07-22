/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/LexModelBuildingServiceEndpointProvider.h>
#include <aws/lex-models/internal/LexModelBuildingServiceEndpointRules.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Endpoint {
LexModelBuildingServiceEndpointProvider::LexModelBuildingServiceEndpointProvider()
    : LexModelBuildingServiceDefaultEpProviderBase(Aws::LexModelBuildingService::LexModelBuildingServiceEndpointRules::GetRulesBlob(),
                                                   Aws::LexModelBuildingService::LexModelBuildingServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LexModelBuildingService
}  // namespace Aws
