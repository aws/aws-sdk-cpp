/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/ComprehendEndpointProvider.h>
#include <aws/comprehend/internal/ComprehendEndpointRules.h>

namespace Aws {
namespace Comprehend {
namespace Endpoint {
ComprehendEndpointProvider::ComprehendEndpointProvider()
    : ComprehendDefaultEpProviderBase(Aws::Comprehend::ComprehendEndpointRules::GetRulesBlob(),
                                      Aws::Comprehend::ComprehendEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Comprehend
}  // namespace Aws
