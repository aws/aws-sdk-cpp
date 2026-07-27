/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/EKSAuthEndpointProvider.h>
#include <aws/eks-auth/internal/EKSAuthEndpointRules.h>

namespace Aws {
namespace EKSAuth {
namespace Endpoint {
EKSAuthEndpointProvider::EKSAuthEndpointProvider()
    : EKSAuthDefaultEpProviderBase(Aws::EKSAuth::EKSAuthEndpointRules::GetRulesBlob(), Aws::EKSAuth::EKSAuthEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EKSAuth
}  // namespace Aws
