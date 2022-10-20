/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rds-data/RDSDataServiceEndpointRules.h>


namespace Aws
{
namespace RDSDataService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RDSDataServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RDSDataServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RDSDataServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RDSDataServiceEndpointProvider,
                                                                        RDSDataServiceBuiltInParameters,
                                                                        RDSDataServiceClientContextParameters>;


class RDSDataServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RDSDataServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RDSDataServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RDSDataService::RDSDataServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RDSDataServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RDSDataServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RDSDataServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RDSDataService
} // namespace Aws
