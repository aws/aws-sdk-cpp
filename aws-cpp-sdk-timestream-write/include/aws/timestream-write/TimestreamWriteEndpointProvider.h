/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/timestream-write/TimestreamWriteEndpointRules.h>


namespace Aws
{
namespace TimestreamWrite
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TimestreamWriteClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TimestreamWriteBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TimestreamWriteEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TimestreamWriteEndpointProvider,
                                                                        TimestreamWriteBuiltInParameters,
                                                                        TimestreamWriteClientContextParameters>;


class TimestreamWriteEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TimestreamWriteResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TimestreamWriteEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::TimestreamWrite::TimestreamWriteEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TimestreamWriteResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TimestreamWriteEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TimestreamWriteEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace TimestreamWrite
} // namespace Aws
