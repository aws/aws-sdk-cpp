/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/redshift-data/RedshiftDataAPIServiceEndpointRules.h>


namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RedshiftDataAPIServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RedshiftDataAPIServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RedshiftDataAPIServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RedshiftDataAPIServiceEndpointProvider,
                                                                        RedshiftDataAPIServiceBuiltInParameters,
                                                                        RedshiftDataAPIServiceClientContextParameters>;


class RedshiftDataAPIServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RedshiftDataAPIServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RedshiftDataAPIServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RedshiftDataAPIService::RedshiftDataAPIServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RedshiftDataAPIServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RedshiftDataAPIServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RedshiftDataAPIServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RedshiftDataAPIService
} // namespace Aws
