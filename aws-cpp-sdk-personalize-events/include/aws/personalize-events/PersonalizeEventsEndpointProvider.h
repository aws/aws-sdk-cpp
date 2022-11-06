/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/personalize-events/PersonalizeEventsEndpointRules.h>


namespace Aws
{
namespace PersonalizeEvents
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PersonalizeEventsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PersonalizeEventsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PersonalizeEventsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PersonalizeEvents Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PersonalizeEventsEndpointProviderBase =
    EndpointProviderBase<PersonalizeEventsClientConfiguration, PersonalizeEventsBuiltInParameters, PersonalizeEventsClientContextParameters>;

using PersonalizeEventsDefaultEpProviderBase =
    DefaultEndpointProvider<PersonalizeEventsClientConfiguration, PersonalizeEventsBuiltInParameters, PersonalizeEventsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PERSONALIZEEVENTS_API PersonalizeEventsEndpointProvider : public PersonalizeEventsDefaultEpProviderBase
{
public:
    using PersonalizeEventsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PersonalizeEventsEndpointProvider()
      : PersonalizeEventsDefaultEpProviderBase(Aws::PersonalizeEvents::PersonalizeEventsEndpointRules::Rules)
    {}

    ~PersonalizeEventsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PersonalizeEvents
} // namespace Aws
