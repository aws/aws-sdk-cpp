/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/swf/SWFEndpointRules.h>


namespace Aws
{
namespace SWF
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SWFClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SWFBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SWFEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SWFEndpointProvider,
                                                                        SWFBuiltInParameters,
                                                                        SWFClientContextParameters>;


class SWFEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SWFResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SWFEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SWF::SWFEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SWFResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SWFEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SWFEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SWF
} // namespace Aws
