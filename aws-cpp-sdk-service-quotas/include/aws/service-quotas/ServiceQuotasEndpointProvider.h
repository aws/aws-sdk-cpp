/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/service-quotas/ServiceQuotasEndpointRules.h>


namespace Aws
{
namespace ServiceQuotas
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ServiceQuotasClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ServiceQuotasBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ServiceQuotasEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ServiceQuotasEndpointProvider,
                                                                        ServiceQuotasBuiltInParameters,
                                                                        ServiceQuotasClientContextParameters>;


class ServiceQuotasEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ServiceQuotasResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ServiceQuotasEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ServiceQuotas::ServiceQuotasEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ServiceQuotasResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ServiceQuotasEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ServiceQuotasEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ServiceQuotas
} // namespace Aws
