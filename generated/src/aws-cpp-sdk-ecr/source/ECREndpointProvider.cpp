/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/ECREndpointProvider.h>
#include <aws/ecr/internal/ECREndpointRules.h>

namespace Aws {
namespace ECR {
namespace Endpoint {
ECREndpointProvider::ECREndpointProvider()
    : ECRDefaultEpProviderBase(Aws::ECR::ECREndpointRules::GetRulesBlob(), Aws::ECR::ECREndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ECR
}  // namespace Aws
