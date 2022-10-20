/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/inspector/InspectorEndpointRules.h>


namespace Aws
{
namespace Inspector
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using InspectorClientContextParameters = Aws::Endpoint::ClientContextParameters;
using InspectorBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class InspectorEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<InspectorEndpointProvider,
                                                                        InspectorBuiltInParameters,
                                                                        InspectorClientContextParameters>;


class InspectorEndpointProvider : public DefaultEndpointProviderT
{
public:
    using InspectorResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    InspectorEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Inspector::InspectorEndpointRules::Rules),
        clientConfiguration(config)
    {}

    InspectorResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<InspectorEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~InspectorEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Inspector
} // namespace Aws
