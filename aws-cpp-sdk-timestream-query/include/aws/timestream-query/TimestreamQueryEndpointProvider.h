/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-query/TimestreamQueryEndpointRules.h>


namespace Aws
{
namespace TimestreamQuery
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TimestreamQueryClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TimestreamQueryBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TimestreamQueryEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TimestreamQueryEndpointProvider,
                                                                        TimestreamQueryBuiltInParameters,
                                                                        TimestreamQueryClientContextParameters>;


class TimestreamQueryEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TimestreamQueryResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TimestreamQueryEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::TimestreamQuery::TimestreamQueryEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TimestreamQueryResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TimestreamQueryEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TimestreamQueryEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace TimestreamQuery
} // namespace Aws
