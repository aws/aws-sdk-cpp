/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/athena/AthenaEndpointRules.h>


namespace Aws
{
namespace Athena
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AthenaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AthenaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AthenaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AthenaEndpointProvider,
                                                                        AthenaBuiltInParameters,
                                                                        AthenaClientContextParameters>;


class AthenaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AthenaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AthenaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Athena::AthenaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AthenaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AthenaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AthenaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Athena
} // namespace Aws
