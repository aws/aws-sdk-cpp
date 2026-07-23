/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/LambdaEndpointProvider.h>
#include <aws/lambda/internal/LambdaEndpointRules.h>

namespace Aws {
namespace Lambda {
namespace Endpoint {
LambdaEndpointProvider::LambdaEndpointProvider()
    : LambdaDefaultEpProviderBase(Aws::Lambda::LambdaEndpointRules::GetRulesBlob(), Aws::Lambda::LambdaEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Lambda
}  // namespace Aws
