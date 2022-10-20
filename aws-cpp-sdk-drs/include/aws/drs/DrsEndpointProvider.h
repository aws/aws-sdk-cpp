/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/drs/DrsEndpointRules.h>


namespace Aws
{
namespace drs
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DrsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DrsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DrsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DrsEndpointProvider,
                                                                        DrsBuiltInParameters,
                                                                        DrsClientContextParameters>;


class DrsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DrsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DrsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::drs::DrsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DrsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DrsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DrsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace drs
} // namespace Aws
