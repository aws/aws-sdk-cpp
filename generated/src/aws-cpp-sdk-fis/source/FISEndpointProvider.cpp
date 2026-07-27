/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/FISEndpointProvider.h>
#include <aws/fis/internal/FISEndpointRules.h>

namespace Aws {
namespace FIS {
namespace Endpoint {
FISEndpointProvider::FISEndpointProvider()
    : FISDefaultEpProviderBase(Aws::FIS::FISEndpointRules::GetRulesBlob(), Aws::FIS::FISEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace FIS
}  // namespace Aws
