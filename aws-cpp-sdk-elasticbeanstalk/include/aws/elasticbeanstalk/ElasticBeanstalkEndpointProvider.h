/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointRules.h>


namespace Aws
{
namespace ElasticBeanstalk
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElasticBeanstalkClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElasticBeanstalkBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElasticBeanstalkEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElasticBeanstalkEndpointProvider,
                                                                        ElasticBeanstalkBuiltInParameters,
                                                                        ElasticBeanstalkClientContextParameters>;


class ElasticBeanstalkEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElasticBeanstalkResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElasticBeanstalkEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElasticBeanstalk::ElasticBeanstalkEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElasticBeanstalkResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElasticBeanstalkEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElasticBeanstalkEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElasticBeanstalk
} // namespace Aws
