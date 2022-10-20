/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotsitewise/IoTSiteWiseEndpointRules.h>


namespace Aws
{
namespace IoTSiteWise
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTSiteWiseClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTSiteWiseBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTSiteWiseEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTSiteWiseEndpointProvider,
                                                                        IoTSiteWiseBuiltInParameters,
                                                                        IoTSiteWiseClientContextParameters>;


class IoTSiteWiseEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTSiteWiseResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTSiteWiseEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTSiteWise::IoTSiteWiseEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTSiteWiseResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTSiteWiseEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTSiteWiseEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTSiteWise
} // namespace Aws
