/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/ACMPCAEndpointProvider.h>
#include <aws/acm-pca/internal/ACMPCAEndpointRules.h>

namespace Aws {
namespace ACMPCA {
namespace Endpoint {
ACMPCAEndpointProvider::ACMPCAEndpointProvider()
    : ACMPCADefaultEpProviderBase(Aws::ACMPCA::ACMPCAEndpointRules::GetRulesBlob(), Aws::ACMPCA::ACMPCAEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ACMPCA
}  // namespace Aws
