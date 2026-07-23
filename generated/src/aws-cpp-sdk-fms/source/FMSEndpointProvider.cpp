/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/FMSEndpointProvider.h>
#include <aws/fms/internal/FMSEndpointRules.h>

namespace Aws {
namespace FMS {
namespace Endpoint {
FMSEndpointProvider::FMSEndpointProvider()
    : FMSDefaultEpProviderBase(Aws::FMS::FMSEndpointRules::GetRulesBlob(), Aws::FMS::FMSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace FMS
}  // namespace Aws
