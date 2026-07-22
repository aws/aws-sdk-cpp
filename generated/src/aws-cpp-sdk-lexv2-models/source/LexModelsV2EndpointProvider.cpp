/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/LexModelsV2EndpointProvider.h>
#include <aws/lexv2-models/internal/LexModelsV2EndpointRules.h>

namespace Aws {
namespace LexModelsV2 {
namespace Endpoint {
LexModelsV2EndpointProvider::LexModelsV2EndpointProvider()
    : LexModelsV2DefaultEpProviderBase(Aws::LexModelsV2::LexModelsV2EndpointRules::GetRulesBlob(),
                                       Aws::LexModelsV2::LexModelsV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LexModelsV2
}  // namespace Aws
