/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/directconnect/DirectConnectEndpointRules.h>


namespace Aws
{
namespace DirectConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DirectConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DirectConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DirectConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DirectConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DirectConnectEndpointProviderBase =
    EndpointProviderBase<DirectConnectClientConfiguration, DirectConnectBuiltInParameters, DirectConnectClientContextParameters>;

using DirectConnectDefaultEpProviderBase =
    DefaultEndpointProvider<DirectConnectClientConfiguration, DirectConnectBuiltInParameters, DirectConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DIRECTCONNECT_API DirectConnectEndpointProvider : public DirectConnectDefaultEpProviderBase
{
public:
    using DirectConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DirectConnectEndpointProvider()
      : DirectConnectDefaultEpProviderBase(Aws::DirectConnect::DirectConnectEndpointRules::Rules)
    {}

    ~DirectConnectEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DirectConnect
} // namespace Aws
