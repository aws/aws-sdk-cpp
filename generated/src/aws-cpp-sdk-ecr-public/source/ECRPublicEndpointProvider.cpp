/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/ECRPublicEndpointProvider.h>
#include <aws/ecr-public/internal/ECRPublicEndpointRules.h>

namespace Aws {
namespace ECRPublic {
namespace Endpoint {
ECRPublicEndpointProvider::ECRPublicEndpointProvider()
    : ECRPublicDefaultEpProviderBase(Aws::ECRPublic::ECRPublicEndpointRules::GetRulesBlob(),
                                     Aws::ECRPublic::ECRPublicEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ECRPublic
}  // namespace Aws
