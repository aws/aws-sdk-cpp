/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ElasticBeanstalkClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ElasticBeanstalkClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ElasticBeanstalkBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ElasticBeanstalk Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticBeanstalkEndpointProviderBase =
    EndpointProviderBase<ElasticBeanstalkClientConfiguration, ElasticBeanstalkBuiltInParameters, ElasticBeanstalkClientContextParameters>;

using ElasticBeanstalkDefaultEpProviderBase =
    DefaultEndpointProvider<ElasticBeanstalkClientConfiguration, ElasticBeanstalkBuiltInParameters, ElasticBeanstalkClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICBEANSTALK_API ElasticBeanstalkEndpointProvider : public ElasticBeanstalkDefaultEpProviderBase
{
public:
    using ElasticBeanstalkResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ElasticBeanstalkEndpointProvider()
      : ElasticBeanstalkDefaultEpProviderBase(Aws::ElasticBeanstalk::ElasticBeanstalkEndpointRules::Rules)
    {}

    ~ElasticBeanstalkEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ElasticBeanstalk
} // namespace Aws
