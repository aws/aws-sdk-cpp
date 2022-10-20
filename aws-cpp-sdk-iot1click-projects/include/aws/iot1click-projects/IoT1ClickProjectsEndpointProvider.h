/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot1click-projects/IoT1ClickProjectsEndpointRules.h>


namespace Aws
{
namespace IoT1ClickProjects
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoT1ClickProjectsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoT1ClickProjectsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoT1ClickProjectsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoT1ClickProjectsEndpointProvider,
                                                                        IoT1ClickProjectsBuiltInParameters,
                                                                        IoT1ClickProjectsClientContextParameters>;


class IoT1ClickProjectsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoT1ClickProjectsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoT1ClickProjectsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoT1ClickProjects::IoT1ClickProjectsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoT1ClickProjectsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoT1ClickProjectsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoT1ClickProjectsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoT1ClickProjects
} // namespace Aws
