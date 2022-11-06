/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ds/DirectoryServiceEndpointRules.h>


namespace Aws
{
namespace DirectoryService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DirectoryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DirectoryServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DirectoryServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DirectoryService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DirectoryServiceEndpointProviderBase =
    EndpointProviderBase<DirectoryServiceClientConfiguration, DirectoryServiceBuiltInParameters, DirectoryServiceClientContextParameters>;

using DirectoryServiceDefaultEpProviderBase =
    DefaultEndpointProvider<DirectoryServiceClientConfiguration, DirectoryServiceBuiltInParameters, DirectoryServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DIRECTORYSERVICE_API DirectoryServiceEndpointProvider : public DirectoryServiceDefaultEpProviderBase
{
public:
    using DirectoryServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DirectoryServiceEndpointProvider()
      : DirectoryServiceDefaultEpProviderBase(Aws::DirectoryService::DirectoryServiceEndpointRules::Rules)
    {}

    ~DirectoryServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DirectoryService
} // namespace Aws
