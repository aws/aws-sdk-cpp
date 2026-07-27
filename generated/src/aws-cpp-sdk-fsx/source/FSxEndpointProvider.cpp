/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/FSxEndpointProvider.h>
#include <aws/fsx/internal/FSxEndpointRules.h>

namespace Aws {
namespace FSx {
namespace Endpoint {
FSxEndpointProvider::FSxEndpointProvider()
    : FSxDefaultEpProviderBase(Aws::FSx::FSxEndpointRules::GetRulesBlob(), Aws::FSx::FSxEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace FSx
}  // namespace Aws
