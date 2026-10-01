/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-web/LambdaWebEndpointProvider.h>
#include <aws/lambda-web/internal/LambdaWebEndpointRules.h>

namespace Aws {
namespace LambdaWeb {
namespace Endpoint {
LambdaWebEndpointProvider::LambdaWebEndpointProvider()
    : LambdaWebDefaultEpProviderBase(Aws::LambdaWeb::LambdaWebEndpointRules::GetRulesBlob(),
                                     Aws::LambdaWeb::LambdaWebEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LambdaWeb
}  // namespace Aws
