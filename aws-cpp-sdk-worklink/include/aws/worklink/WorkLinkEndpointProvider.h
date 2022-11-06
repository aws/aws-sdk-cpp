/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/worklink/WorkLinkEndpointRules.h>


namespace Aws
{
namespace WorkLink
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkLinkClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkLinkClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkLinkBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkLink Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkLinkEndpointProviderBase =
    EndpointProviderBase<WorkLinkClientConfiguration, WorkLinkBuiltInParameters, WorkLinkClientContextParameters>;

using WorkLinkDefaultEpProviderBase =
    DefaultEndpointProvider<WorkLinkClientConfiguration, WorkLinkBuiltInParameters, WorkLinkClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKLINK_API WorkLinkEndpointProvider : public WorkLinkDefaultEpProviderBase
{
public:
    using WorkLinkResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkLinkEndpointProvider()
      : WorkLinkDefaultEpProviderBase(Aws::WorkLink::WorkLinkEndpointRules::Rules)
    {}

    ~WorkLinkEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkLink
} // namespace Aws
