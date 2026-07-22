/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/KMSEndpointProvider.h>
#include <aws/kms/internal/KMSEndpointRules.h>

namespace Aws {
namespace KMS {
namespace Endpoint {
KMSEndpointProvider::KMSEndpointProvider()
    : KMSDefaultEpProviderBase(Aws::KMS::KMSEndpointRules::GetRulesBlob(), Aws::KMS::KMSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KMS
}  // namespace Aws
