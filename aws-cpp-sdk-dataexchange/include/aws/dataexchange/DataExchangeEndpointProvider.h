/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dataexchange/DataExchangeEndpointRules.h>


namespace Aws
{
namespace DataExchange
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DataExchangeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DataExchangeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DataExchangeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DataExchangeEndpointProvider,
                                                                        DataExchangeBuiltInParameters,
                                                                        DataExchangeClientContextParameters>;


class DataExchangeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DataExchangeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DataExchangeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DataExchange::DataExchangeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DataExchangeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DataExchangeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DataExchangeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DataExchange
} // namespace Aws
