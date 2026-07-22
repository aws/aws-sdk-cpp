/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/IoTManagedIntegrationsEndpointProvider.h>
#include <aws/iot-managed-integrations/internal/IoTManagedIntegrationsEndpointRules.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Endpoint {
IoTManagedIntegrationsEndpointProvider::IoTManagedIntegrationsEndpointProvider()
    : IoTManagedIntegrationsDefaultEpProviderBase(Aws::IoTManagedIntegrations::IoTManagedIntegrationsEndpointRules::GetRulesBlob(),
                                                  Aws::IoTManagedIntegrations::IoTManagedIntegrationsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTManagedIntegrations
}  // namespace Aws
