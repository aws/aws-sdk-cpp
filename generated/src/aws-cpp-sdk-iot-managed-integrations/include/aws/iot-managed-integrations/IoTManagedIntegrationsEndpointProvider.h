/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot-managed-integrations/IoTManagedIntegrationsEndpointRules.h>


namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTManagedIntegrationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTManagedIntegrationsClientConfiguration = Aws::Client::GenericClientConfiguration;
using IoTManagedIntegrationsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTManagedIntegrations Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTManagedIntegrationsEndpointProviderBase =
    EndpointProviderBase<IoTManagedIntegrationsClientConfiguration, IoTManagedIntegrationsBuiltInParameters, IoTManagedIntegrationsClientContextParameters>;

using IoTManagedIntegrationsDefaultEpProviderBase =
    DefaultEndpointProvider<IoTManagedIntegrationsClientConfiguration, IoTManagedIntegrationsBuiltInParameters, IoTManagedIntegrationsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTMANAGEDINTEGRATIONS_API IoTManagedIntegrationsEndpointProvider : public IoTManagedIntegrationsDefaultEpProviderBase
{
public:
    using IoTManagedIntegrationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTManagedIntegrationsEndpointProvider()
      : IoTManagedIntegrationsDefaultEpProviderBase(Aws::IoTManagedIntegrations::IoTManagedIntegrationsEndpointRules::GetRulesBlob(), Aws::IoTManagedIntegrations::IoTManagedIntegrationsEndpointRules::RulesBlobSize)
    {}

    ~IoTManagedIntegrationsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTManagedIntegrations
} // namespace Aws
