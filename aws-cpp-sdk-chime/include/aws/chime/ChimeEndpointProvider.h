/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime/ChimeEndpointRules.h>


namespace Aws
{
namespace Chime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Chime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeEndpointProviderBase =
    EndpointProviderBase<ChimeClientConfiguration, ChimeBuiltInParameters, ChimeClientContextParameters>;

using ChimeDefaultEpProviderBase =
    DefaultEndpointProvider<ChimeClientConfiguration, ChimeBuiltInParameters, ChimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHIME_API ChimeEndpointProvider : public ChimeDefaultEpProviderBase
{
public:
    using ChimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChimeEndpointProvider()
      : ChimeDefaultEpProviderBase(Aws::Chime::ChimeEndpointRules::Rules)
    {}

    ~ChimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Chime
} // namespace Aws
