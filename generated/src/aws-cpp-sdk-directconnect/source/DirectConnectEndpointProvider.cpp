/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/DirectConnectEndpointProvider.h>
#include <aws/directconnect/internal/DirectConnectEndpointRules.h>

namespace Aws {
namespace DirectConnect {
namespace Endpoint {
DirectConnectEndpointProvider::DirectConnectEndpointProvider()
    : DirectConnectDefaultEpProviderBase(Aws::DirectConnect::DirectConnectEndpointRules::GetRulesBlob(),
                                         Aws::DirectConnect::DirectConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DirectConnect
}  // namespace Aws
