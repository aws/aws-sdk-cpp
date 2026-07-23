/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/ManagedGrafanaEndpointProvider.h>
#include <aws/grafana/internal/ManagedGrafanaEndpointRules.h>

namespace Aws {
namespace ManagedGrafana {
namespace Endpoint {
ManagedGrafanaEndpointProvider::ManagedGrafanaEndpointProvider()
    : ManagedGrafanaDefaultEpProviderBase(Aws::ManagedGrafana::ManagedGrafanaEndpointRules::GetRulesBlob(),
                                          Aws::ManagedGrafana::ManagedGrafanaEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ManagedGrafana
}  // namespace Aws
