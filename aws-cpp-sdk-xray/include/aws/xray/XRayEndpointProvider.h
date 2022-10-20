/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/xray/XRayEndpointRules.h>


namespace Aws
{
namespace XRay
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using XRayClientContextParameters = Aws::Endpoint::ClientContextParameters;
using XRayBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class XRayEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<XRayEndpointProvider,
                                                                        XRayBuiltInParameters,
                                                                        XRayClientContextParameters>;


class XRayEndpointProvider : public DefaultEndpointProviderT
{
public:
    using XRayResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    XRayEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::XRay::XRayEndpointRules::Rules),
        clientConfiguration(config)
    {}

    XRayResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<XRayEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~XRayEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace XRay
} // namespace Aws
