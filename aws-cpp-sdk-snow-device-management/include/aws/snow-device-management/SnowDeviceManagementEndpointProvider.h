/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/snow-device-management/SnowDeviceManagementEndpointRules.h>


namespace Aws
{
namespace SnowDeviceManagement
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SnowDeviceManagementClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SnowDeviceManagementBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SnowDeviceManagementEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SnowDeviceManagementEndpointProvider,
                                                                        SnowDeviceManagementBuiltInParameters,
                                                                        SnowDeviceManagementClientContextParameters>;


class SnowDeviceManagementEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SnowDeviceManagementResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SnowDeviceManagementEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SnowDeviceManagement::SnowDeviceManagementEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SnowDeviceManagementResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SnowDeviceManagementEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SnowDeviceManagementEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SnowDeviceManagement
} // namespace Aws
