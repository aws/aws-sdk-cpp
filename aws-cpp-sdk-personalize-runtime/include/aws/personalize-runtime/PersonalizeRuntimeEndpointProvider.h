/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/personalize-runtime/PersonalizeRuntimeEndpointRules.h>


namespace Aws
{
namespace PersonalizeRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PersonalizeRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PersonalizeRuntimeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PersonalizeRuntimeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PersonalizeRuntimeEndpointProvider,
                                                                        PersonalizeRuntimeBuiltInParameters,
                                                                        PersonalizeRuntimeClientContextParameters>;


class PersonalizeRuntimeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PersonalizeRuntimeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PersonalizeRuntimeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PersonalizeRuntime::PersonalizeRuntimeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PersonalizeRuntimeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PersonalizeRuntimeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PersonalizeRuntimeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PersonalizeRuntime
} // namespace Aws
