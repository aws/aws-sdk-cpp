/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workmail/WorkMailEndpointRules.h>


namespace Aws
{
namespace WorkMail
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkMailClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkMailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkMailBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkMail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkMailEndpointProviderBase =
    EndpointProviderBase<WorkMailClientConfiguration, WorkMailBuiltInParameters, WorkMailClientContextParameters>;

using WorkMailDefaultEpProviderBase =
    DefaultEndpointProvider<WorkMailClientConfiguration, WorkMailBuiltInParameters, WorkMailClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKMAIL_API WorkMailEndpointProvider : public WorkMailDefaultEpProviderBase
{
public:
    using WorkMailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkMailEndpointProvider()
      : WorkMailDefaultEpProviderBase(Aws::WorkMail::WorkMailEndpointRules::Rules)
    {}

    ~WorkMailEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkMail
} // namespace Aws
