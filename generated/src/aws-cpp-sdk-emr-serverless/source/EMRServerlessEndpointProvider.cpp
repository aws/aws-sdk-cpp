/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/EMRServerlessEndpointProvider.h>
#include <aws/emr-serverless/internal/EMRServerlessEndpointRules.h>

namespace Aws {
namespace EMRServerless {
namespace Endpoint {
EMRServerlessEndpointProvider::EMRServerlessEndpointProvider()
    : EMRServerlessDefaultEpProviderBase(Aws::EMRServerless::EMRServerlessEndpointRules::GetRulesBlob(),
                                         Aws::EMRServerless::EMRServerlessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EMRServerless
}  // namespace Aws
