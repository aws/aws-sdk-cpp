/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elb-proxy/ELBProxyEndpointProvider.h>
#include <aws/elb-proxy/internal/ELBProxyEndpointRules.h>

namespace Aws {
namespace ELBProxy {
namespace Endpoint {
ELBProxyEndpointProvider::ELBProxyEndpointProvider()
    : ELBProxyDefaultEpProviderBase(Aws::ELBProxy::ELBProxyEndpointRules::GetRulesBlob(),
                                    Aws::ELBProxy::ELBProxyEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ELBProxy
}  // namespace Aws
