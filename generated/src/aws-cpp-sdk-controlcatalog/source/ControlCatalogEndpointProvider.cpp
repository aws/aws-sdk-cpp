/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/ControlCatalogEndpointProvider.h>
#include <aws/controlcatalog/internal/ControlCatalogEndpointRules.h>

namespace Aws {
namespace ControlCatalog {
namespace Endpoint {
ControlCatalogEndpointProvider::ControlCatalogEndpointProvider()
    : ControlCatalogDefaultEpProviderBase(Aws::ControlCatalog::ControlCatalogEndpointRules::GetRulesBlob(),
                                          Aws::ControlCatalog::ControlCatalogEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ControlCatalog
}  // namespace Aws
