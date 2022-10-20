/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/finspace-data/FinSpaceDataEndpointRules.h>


namespace Aws
{
namespace FinSpaceData
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FinSpaceDataClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FinSpaceDataBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FinSpaceDataEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FinSpaceDataEndpointProvider,
                                                                        FinSpaceDataBuiltInParameters,
                                                                        FinSpaceDataClientContextParameters>;


class FinSpaceDataEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FinSpaceDataResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FinSpaceDataEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::FinSpaceData::FinSpaceDataEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FinSpaceDataResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FinSpaceDataEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FinSpaceDataEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace FinSpaceData
} // namespace Aws
