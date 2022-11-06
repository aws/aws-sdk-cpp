/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/nimble/NimbleStudioEndpointRules.h>


namespace Aws
{
namespace NimbleStudio
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NimbleStudioClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NimbleStudioClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using NimbleStudioBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the NimbleStudio Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NimbleStudioEndpointProviderBase =
    EndpointProviderBase<NimbleStudioClientConfiguration, NimbleStudioBuiltInParameters, NimbleStudioClientContextParameters>;

using NimbleStudioDefaultEpProviderBase =
    DefaultEndpointProvider<NimbleStudioClientConfiguration, NimbleStudioBuiltInParameters, NimbleStudioClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NIMBLESTUDIO_API NimbleStudioEndpointProvider : public NimbleStudioDefaultEpProviderBase
{
public:
    using NimbleStudioResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NimbleStudioEndpointProvider()
      : NimbleStudioDefaultEpProviderBase(Aws::NimbleStudio::NimbleStudioEndpointRules::Rules)
    {}

    ~NimbleStudioEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace NimbleStudio
} // namespace Aws
