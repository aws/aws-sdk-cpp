/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/IvsrealtimeEndpointProvider.h>
#include <aws/ivs-realtime/internal/IvsrealtimeEndpointRules.h>

namespace Aws {
namespace ivsrealtime {
namespace Endpoint {
IvsrealtimeEndpointProvider::IvsrealtimeEndpointProvider()
    : IvsrealtimeDefaultEpProviderBase(Aws::ivsrealtime::IvsrealtimeEndpointRules::GetRulesBlob(),
                                       Aws::ivsrealtime::IvsrealtimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ivsrealtime
}  // namespace Aws
