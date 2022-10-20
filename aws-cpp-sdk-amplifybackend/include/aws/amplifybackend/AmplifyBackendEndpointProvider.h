/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amplifybackend/AmplifyBackendEndpointRules.h>


namespace Aws
{
namespace AmplifyBackend
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AmplifyBackendClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AmplifyBackendBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AmplifyBackendEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AmplifyBackendEndpointProvider,
                                                                        AmplifyBackendBuiltInParameters,
                                                                        AmplifyBackendClientContextParameters>;


class AmplifyBackendEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AmplifyBackendResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AmplifyBackendEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AmplifyBackend::AmplifyBackendEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AmplifyBackendResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AmplifyBackendEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AmplifyBackendEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AmplifyBackend
} // namespace Aws
