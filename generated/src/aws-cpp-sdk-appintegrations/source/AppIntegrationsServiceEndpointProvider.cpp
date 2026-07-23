/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/AppIntegrationsServiceEndpointProvider.h>
#include <aws/appintegrations/internal/AppIntegrationsServiceEndpointRules.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Endpoint {
AppIntegrationsServiceEndpointProvider::AppIntegrationsServiceEndpointProvider()
    : AppIntegrationsServiceDefaultEpProviderBase(Aws::AppIntegrationsService::AppIntegrationsServiceEndpointRules::GetRulesBlob(),
                                                  Aws::AppIntegrationsService::AppIntegrationsServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppIntegrationsService
}  // namespace Aws
