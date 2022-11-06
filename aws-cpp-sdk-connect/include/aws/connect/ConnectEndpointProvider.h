/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connect/ConnectEndpointRules.h>


namespace Aws
{
namespace Connect
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Connect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectEndpointProviderBase =
    EndpointProviderBase<ConnectClientConfiguration, ConnectBuiltInParameters, ConnectClientContextParameters>;

using ConnectDefaultEpProviderBase =
    DefaultEndpointProvider<ConnectClientConfiguration, ConnectBuiltInParameters, ConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECT_API ConnectEndpointProvider : public ConnectDefaultEpProviderBase
{
public:
    using ConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConnectEndpointProvider()
      : ConnectDefaultEpProviderBase(Aws::Connect::ConnectEndpointRules::Rules)
    {}

    ~ConnectEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Connect
} // namespace Aws
