/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointRules.h>


namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ServerlessApplicationRepositoryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ServerlessApplicationRepositoryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ServerlessApplicationRepositoryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ServerlessApplicationRepository Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServerlessApplicationRepositoryEndpointProviderBase =
    EndpointProviderBase<ServerlessApplicationRepositoryClientConfiguration, ServerlessApplicationRepositoryBuiltInParameters, ServerlessApplicationRepositoryClientContextParameters>;

using ServerlessApplicationRepositoryDefaultEpProviderBase =
    DefaultEndpointProvider<ServerlessApplicationRepositoryClientConfiguration, ServerlessApplicationRepositoryBuiltInParameters, ServerlessApplicationRepositoryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryEndpointProvider : public ServerlessApplicationRepositoryDefaultEpProviderBase
{
public:
    using ServerlessApplicationRepositoryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ServerlessApplicationRepositoryEndpointProvider()
      : ServerlessApplicationRepositoryDefaultEpProviderBase(Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryEndpointRules::Rules)
    {}

    ~ServerlessApplicationRepositoryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ServerlessApplicationRepository
} // namespace Aws
