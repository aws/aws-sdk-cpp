/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/EBSEndpointProvider.h>
#include <aws/ebs/internal/EBSEndpointRules.h>

namespace Aws {
namespace EBS {
namespace Endpoint {
EBSEndpointProvider::EBSEndpointProvider()
    : EBSDefaultEpProviderBase(Aws::EBS::EBSEndpointRules::GetRulesBlob(), Aws::EBS::EBSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EBS
}  // namespace Aws
