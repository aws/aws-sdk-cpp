/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/CleanRoomsMLEndpointProvider.h>
#include <aws/cleanroomsml/internal/CleanRoomsMLEndpointRules.h>

namespace Aws {
namespace CleanRoomsML {
namespace Endpoint {
CleanRoomsMLEndpointProvider::CleanRoomsMLEndpointProvider()
    : CleanRoomsMLDefaultEpProviderBase(Aws::CleanRoomsML::CleanRoomsMLEndpointRules::GetRulesBlob(),
                                        Aws::CleanRoomsML::CleanRoomsMLEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CleanRoomsML
}  // namespace Aws
