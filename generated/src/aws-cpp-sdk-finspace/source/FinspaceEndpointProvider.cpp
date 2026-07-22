/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/FinspaceEndpointProvider.h>
#include <aws/finspace/internal/FinspaceEndpointRules.h>

namespace Aws {
namespace finspace {
namespace Endpoint {
FinspaceEndpointProvider::FinspaceEndpointProvider()
    : FinspaceDefaultEpProviderBase(Aws::finspace::FinspaceEndpointRules::GetRulesBlob(),
                                    Aws::finspace::FinspaceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace finspace
}  // namespace Aws
