/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/neptune/NeptuneEndpointRules.h>


namespace Aws
{
namespace Neptune
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NeptuneClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NeptuneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using NeptuneBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Neptune Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NeptuneEndpointProviderBase =
    EndpointProviderBase<NeptuneClientConfiguration, NeptuneBuiltInParameters, NeptuneClientContextParameters>;

using NeptuneDefaultEpProviderBase =
    DefaultEndpointProvider<NeptuneClientConfiguration, NeptuneBuiltInParameters, NeptuneClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NEPTUNE_API NeptuneEndpointProvider : public NeptuneDefaultEpProviderBase
{
public:
    using NeptuneResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NeptuneEndpointProvider()
      : NeptuneDefaultEpProviderBase(Aws::Neptune::NeptuneEndpointRules::Rules)
    {}

    ~NeptuneEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Neptune
} // namespace Aws
