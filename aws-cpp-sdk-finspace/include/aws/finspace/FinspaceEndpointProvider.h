/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/finspace/FinspaceEndpointRules.h>


namespace Aws
{
namespace finspace
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FinspaceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FinspaceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FinspaceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the finspace Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FinspaceEndpointProviderBase =
    EndpointProviderBase<FinspaceClientConfiguration, FinspaceBuiltInParameters, FinspaceClientContextParameters>;

using FinspaceDefaultEpProviderBase =
    DefaultEndpointProvider<FinspaceClientConfiguration, FinspaceBuiltInParameters, FinspaceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FINSPACE_API FinspaceEndpointProvider : public FinspaceDefaultEpProviderBase
{
public:
    using FinspaceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FinspaceEndpointProvider()
      : FinspaceDefaultEpProviderBase(Aws::finspace::FinspaceEndpointRules::Rules)
    {}

    ~FinspaceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace finspace
} // namespace Aws
