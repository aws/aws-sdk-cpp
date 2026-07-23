/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/AthenaEndpointProvider.h>
#include <aws/athena/internal/AthenaEndpointRules.h>

namespace Aws {
namespace Athena {
namespace Endpoint {
AthenaEndpointProvider::AthenaEndpointProvider()
    : AthenaDefaultEpProviderBase(Aws::Athena::AthenaEndpointRules::GetRulesBlob(), Aws::Athena::AthenaEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Athena
}  // namespace Aws
