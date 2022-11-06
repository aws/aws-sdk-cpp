/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/events/CloudWatchEventsEndpointRules.h>


namespace Aws
{
namespace CloudWatchEvents
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudWatchEventsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudWatchEventsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudWatchEventsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudWatchEvents Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchEventsEndpointProviderBase =
    EndpointProviderBase<CloudWatchEventsClientConfiguration, CloudWatchEventsBuiltInParameters, CloudWatchEventsClientContextParameters>;

using CloudWatchEventsDefaultEpProviderBase =
    DefaultEndpointProvider<CloudWatchEventsClientConfiguration, CloudWatchEventsBuiltInParameters, CloudWatchEventsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHEVENTS_API CloudWatchEventsEndpointProvider : public CloudWatchEventsDefaultEpProviderBase
{
public:
    using CloudWatchEventsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudWatchEventsEndpointProvider()
      : CloudWatchEventsDefaultEpProviderBase(Aws::CloudWatchEvents::CloudWatchEventsEndpointRules::Rules)
    {}

    ~CloudWatchEventsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudWatchEvents
} // namespace Aws
