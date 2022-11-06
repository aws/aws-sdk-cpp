/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/wisdom/ConnectWisdomServiceEndpointRules.h>


namespace Aws
{
namespace ConnectWisdomService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConnectWisdomServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectWisdomServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ConnectWisdomServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectWisdomService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectWisdomServiceEndpointProviderBase =
    EndpointProviderBase<ConnectWisdomServiceClientConfiguration, ConnectWisdomServiceBuiltInParameters, ConnectWisdomServiceClientContextParameters>;

using ConnectWisdomServiceDefaultEpProviderBase =
    DefaultEndpointProvider<ConnectWisdomServiceClientConfiguration, ConnectWisdomServiceBuiltInParameters, ConnectWisdomServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTWISDOMSERVICE_API ConnectWisdomServiceEndpointProvider : public ConnectWisdomServiceDefaultEpProviderBase
{
public:
    using ConnectWisdomServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConnectWisdomServiceEndpointProvider()
      : ConnectWisdomServiceDefaultEpProviderBase(Aws::ConnectWisdomService::ConnectWisdomServiceEndpointRules::Rules)
    {}

    ~ConnectWisdomServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ConnectWisdomService
} // namespace Aws
