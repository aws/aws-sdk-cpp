/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/scheduler/SchedulerEndpointRules.h>


namespace Aws
{
namespace Scheduler
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SchedulerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SchedulerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SchedulerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Scheduler Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SchedulerEndpointProviderBase =
    EndpointProviderBase<SchedulerClientConfiguration, SchedulerBuiltInParameters, SchedulerClientContextParameters>;

using SchedulerDefaultEpProviderBase =
    DefaultEndpointProvider<SchedulerClientConfiguration, SchedulerBuiltInParameters, SchedulerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SCHEDULER_API SchedulerEndpointProvider : public SchedulerDefaultEpProviderBase
{
public:
    using SchedulerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SchedulerEndpointProvider()
      : SchedulerDefaultEpProviderBase(Aws::Scheduler::SchedulerEndpointRules::Rules)
    {}

    ~SchedulerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Scheduler
} // namespace Aws
