/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpointRules.h>


namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AmplifyUIBuilderClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AmplifyUIBuilderBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AmplifyUIBuilderEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AmplifyUIBuilderEndpointProvider,
                                                                        AmplifyUIBuilderBuiltInParameters,
                                                                        AmplifyUIBuilderClientContextParameters>;


class AmplifyUIBuilderEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AmplifyUIBuilderResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AmplifyUIBuilderEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AmplifyUIBuilder::AmplifyUIBuilderEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AmplifyUIBuilderResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AmplifyUIBuilderEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AmplifyUIBuilderEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AmplifyUIBuilder
} // namespace Aws
