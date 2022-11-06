/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/fis/FISEndpointRules.h>


namespace Aws
{
namespace FIS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FISClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FISClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FISBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the FIS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FISEndpointProviderBase =
    EndpointProviderBase<FISClientConfiguration, FISBuiltInParameters, FISClientContextParameters>;

using FISDefaultEpProviderBase =
    DefaultEndpointProvider<FISClientConfiguration, FISBuiltInParameters, FISClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FIS_API FISEndpointProvider : public FISDefaultEpProviderBase
{
public:
    using FISResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FISEndpointProvider()
      : FISDefaultEpProviderBase(Aws::FIS::FISEndpointRules::Rules)
    {}

    ~FISEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace FIS
} // namespace Aws
