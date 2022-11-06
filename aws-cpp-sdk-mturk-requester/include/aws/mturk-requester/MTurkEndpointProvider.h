/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mturk-requester/MTurkEndpointRules.h>


namespace Aws
{
namespace MTurk
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MTurkClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MTurkClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MTurkBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MTurk Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MTurkEndpointProviderBase =
    EndpointProviderBase<MTurkClientConfiguration, MTurkBuiltInParameters, MTurkClientContextParameters>;

using MTurkDefaultEpProviderBase =
    DefaultEndpointProvider<MTurkClientConfiguration, MTurkBuiltInParameters, MTurkClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MTURK_API MTurkEndpointProvider : public MTurkDefaultEpProviderBase
{
public:
    using MTurkResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MTurkEndpointProvider()
      : MTurkDefaultEpProviderBase(Aws::MTurk::MTurkEndpointRules::Rules)
    {}

    ~MTurkEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MTurk
} // namespace Aws
