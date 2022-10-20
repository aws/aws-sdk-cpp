/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudsearchdomain/CloudSearchDomainEndpointRules.h>


namespace Aws
{
namespace CloudSearchDomain
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudSearchDomainClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudSearchDomainBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudSearchDomainEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudSearchDomainEndpointProvider,
                                                                        CloudSearchDomainBuiltInParameters,
                                                                        CloudSearchDomainClientContextParameters>;


class CloudSearchDomainEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudSearchDomainResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudSearchDomainEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudSearchDomain::CloudSearchDomainEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudSearchDomainResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudSearchDomainEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudSearchDomainEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudSearchDomain
} // namespace Aws
