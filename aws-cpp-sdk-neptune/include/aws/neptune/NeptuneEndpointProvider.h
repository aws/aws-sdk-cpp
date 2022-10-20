/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/neptune/NeptuneEndpointRules.h>


namespace Aws
{
namespace Neptune
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using NeptuneClientContextParameters = Aws::Endpoint::ClientContextParameters;
using NeptuneBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class NeptuneEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<NeptuneEndpointProvider,
                                                                        NeptuneBuiltInParameters,
                                                                        NeptuneClientContextParameters>;


class NeptuneEndpointProvider : public DefaultEndpointProviderT
{
public:
    using NeptuneResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    NeptuneEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Neptune::NeptuneEndpointRules::Rules),
        clientConfiguration(config)
    {}

    NeptuneResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<NeptuneEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~NeptuneEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Neptune
} // namespace Aws
