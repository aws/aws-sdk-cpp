/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <aws/cleanrooms/internal/CleanRoomsEndpointRules.h>

namespace Aws {
namespace CleanRooms {
namespace Endpoint {
CleanRoomsEndpointProvider::CleanRoomsEndpointProvider()
    : CleanRoomsDefaultEpProviderBase(Aws::CleanRooms::CleanRoomsEndpointRules::GetRulesBlob(),
                                      Aws::CleanRooms::CleanRoomsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CleanRooms
}  // namespace Aws
