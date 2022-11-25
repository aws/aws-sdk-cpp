/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ec2/EC2EndpointRules.h>


namespace Aws
{
namespace EC2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EC2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EC2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EC2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EC2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EC2EndpointProviderBase =
    EndpointProviderBase<EC2ClientConfiguration, EC2BuiltInParameters, EC2ClientContextParameters>;

using EC2DefaultEpProviderBase =
    DefaultEndpointProvider<EC2ClientConfiguration, EC2BuiltInParameters, EC2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EC2_API EC2EndpointProvider : public EC2DefaultEpProviderBase
{
public:
    using EC2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EC2EndpointProvider()
      : EC2DefaultEpProviderBase(Aws::EC2::EC2EndpointRules::Rules)
    {}

    ~EC2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EC2
} // namespace Aws
