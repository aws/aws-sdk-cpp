/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-core/LambdaCoreEndpointProvider.h>
#include <aws/lambda-core/internal/LambdaCoreEndpointRules.h>

namespace Aws {
namespace LambdaCore {
namespace Endpoint {
LambdaCoreEndpointProvider::LambdaCoreEndpointProvider()
    : LambdaCoreDefaultEpProviderBase(Aws::LambdaCore::LambdaCoreEndpointRules::GetRulesBlob(),
                                      Aws::LambdaCore::LambdaCoreEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LambdaCore
}  // namespace Aws
