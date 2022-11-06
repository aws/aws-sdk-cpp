/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codestar-notifications/CodeStarNotificationsEndpointRules.h>


namespace Aws
{
namespace CodeStarNotifications
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeStarNotificationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeStarNotificationsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeStarNotificationsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeStarNotifications Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeStarNotificationsEndpointProviderBase =
    EndpointProviderBase<CodeStarNotificationsClientConfiguration, CodeStarNotificationsBuiltInParameters, CodeStarNotificationsClientContextParameters>;

using CodeStarNotificationsDefaultEpProviderBase =
    DefaultEndpointProvider<CodeStarNotificationsClientConfiguration, CodeStarNotificationsBuiltInParameters, CodeStarNotificationsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODESTARNOTIFICATIONS_API CodeStarNotificationsEndpointProvider : public CodeStarNotificationsDefaultEpProviderBase
{
public:
    using CodeStarNotificationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeStarNotificationsEndpointProvider()
      : CodeStarNotificationsDefaultEpProviderBase(Aws::CodeStarNotifications::CodeStarNotificationsEndpointRules::Rules)
    {}

    ~CodeStarNotificationsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeStarNotifications
} // namespace Aws
