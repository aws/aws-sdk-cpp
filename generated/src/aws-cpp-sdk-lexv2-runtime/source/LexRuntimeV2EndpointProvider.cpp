/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/LexRuntimeV2EndpointProvider.h>
#include <aws/lexv2-runtime/internal/LexRuntimeV2EndpointRules.h>

namespace Aws {
namespace LexRuntimeV2 {
namespace Endpoint {
LexRuntimeV2EndpointProvider::LexRuntimeV2EndpointProvider()
    : LexRuntimeV2DefaultEpProviderBase(Aws::LexRuntimeV2::LexRuntimeV2EndpointRules::GetRulesBlob(),
                                        Aws::LexRuntimeV2::LexRuntimeV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LexRuntimeV2
}  // namespace Aws
