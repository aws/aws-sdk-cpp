/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/EKSEndpointProvider.h>
#include <aws/eks/internal/EKSEndpointRules.h>

namespace Aws {
namespace EKS {
namespace Endpoint {
EKSEndpointProvider::EKSEndpointProvider()
    : EKSDefaultEpProviderBase(Aws::EKS::EKSEndpointRules::GetRulesBlob(), Aws::EKS::EKSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EKS
}  // namespace Aws
