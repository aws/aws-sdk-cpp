/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rds/RDSEndpointRules.h>


namespace Aws
{
namespace RDS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RDSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RDSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RDSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RDSEndpointProvider,
                                                                        RDSBuiltInParameters,
                                                                        RDSClientContextParameters>;


class RDSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RDSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RDSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RDS::RDSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RDSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RDSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RDSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RDS
} // namespace Aws
