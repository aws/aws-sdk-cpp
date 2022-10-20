/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/personalize/PersonalizeEndpointRules.h>


namespace Aws
{
namespace Personalize
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PersonalizeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PersonalizeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PersonalizeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PersonalizeEndpointProvider,
                                                                        PersonalizeBuiltInParameters,
                                                                        PersonalizeClientContextParameters>;


class PersonalizeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PersonalizeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PersonalizeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Personalize::PersonalizeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PersonalizeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PersonalizeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PersonalizeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Personalize
} // namespace Aws
