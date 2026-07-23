/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-microvms/LambdaMicrovmsEndpointProvider.h>
#include <aws/lambda-microvms/internal/LambdaMicrovmsEndpointRules.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Endpoint {
LambdaMicrovmsEndpointProvider::LambdaMicrovmsEndpointProvider()
    : LambdaMicrovmsDefaultEpProviderBase(Aws::LambdaMicrovms::LambdaMicrovmsEndpointRules::GetRulesBlob(),
                                          Aws::LambdaMicrovms::LambdaMicrovmsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LambdaMicrovms
}  // namespace Aws
