/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/IVSEndpointProvider.h>
#include <aws/ivs/internal/IVSEndpointRules.h>

namespace Aws {
namespace IVS {
namespace Endpoint {
IVSEndpointProvider::IVSEndpointProvider()
    : IVSDefaultEpProviderBase(Aws::IVS::IVSEndpointRules::GetRulesBlob(), Aws::IVS::IVSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IVS
}  // namespace Aws
