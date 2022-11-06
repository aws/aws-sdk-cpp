/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointRules.h>


namespace Aws
{
namespace EC2InstanceConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EC2InstanceConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EC2InstanceConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EC2InstanceConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EC2InstanceConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EC2InstanceConnectEndpointProviderBase =
    EndpointProviderBase<EC2InstanceConnectClientConfiguration, EC2InstanceConnectBuiltInParameters, EC2InstanceConnectClientContextParameters>;

using EC2InstanceConnectDefaultEpProviderBase =
    DefaultEndpointProvider<EC2InstanceConnectClientConfiguration, EC2InstanceConnectBuiltInParameters, EC2InstanceConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EC2INSTANCECONNECT_API EC2InstanceConnectEndpointProvider : public EC2InstanceConnectDefaultEpProviderBase
{
public:
    using EC2InstanceConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EC2InstanceConnectEndpointProvider()
      : EC2InstanceConnectDefaultEpProviderBase(Aws::EC2InstanceConnect::EC2InstanceConnectEndpointRules::Rules)
    {}

    ~EC2InstanceConnectEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EC2InstanceConnect
} // namespace Aws
