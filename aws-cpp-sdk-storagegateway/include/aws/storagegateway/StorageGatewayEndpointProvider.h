/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/storagegateway/StorageGatewayEndpointRules.h>


namespace Aws
{
namespace StorageGateway
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using StorageGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;

using StorageGatewayClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using StorageGatewayBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the StorageGateway Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using StorageGatewayEndpointProviderBase =
    EndpointProviderBase<StorageGatewayClientConfiguration, StorageGatewayBuiltInParameters, StorageGatewayClientContextParameters>;

using StorageGatewayDefaultEpProviderBase =
    DefaultEndpointProvider<StorageGatewayClientConfiguration, StorageGatewayBuiltInParameters, StorageGatewayClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_STORAGEGATEWAY_API StorageGatewayEndpointProvider : public StorageGatewayDefaultEpProviderBase
{
public:
    using StorageGatewayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    StorageGatewayEndpointProvider()
      : StorageGatewayDefaultEpProviderBase(Aws::StorageGateway::StorageGatewayEndpointRules::Rules)
    {}

    ~StorageGatewayEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace StorageGateway
} // namespace Aws
