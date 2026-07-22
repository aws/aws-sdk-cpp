/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/internal/ConnectEndpointRules.h>

namespace Aws {
namespace Connect {
namespace Endpoint {
ConnectEndpointProvider::ConnectEndpointProvider()
    : ConnectDefaultEpProviderBase(Aws::Connect::ConnectEndpointRules::GetRulesBlob(), Aws::Connect::ConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Connect
}  // namespace Aws
