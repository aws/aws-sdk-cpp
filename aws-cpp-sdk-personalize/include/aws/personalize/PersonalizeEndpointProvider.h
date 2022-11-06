/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/personalize/PersonalizeEndpointRules.h>


namespace Aws
{
namespace Personalize
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PersonalizeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PersonalizeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PersonalizeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Personalize Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PersonalizeEndpointProviderBase =
    EndpointProviderBase<PersonalizeClientConfiguration, PersonalizeBuiltInParameters, PersonalizeClientContextParameters>;

using PersonalizeDefaultEpProviderBase =
    DefaultEndpointProvider<PersonalizeClientConfiguration, PersonalizeBuiltInParameters, PersonalizeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PERSONALIZE_API PersonalizeEndpointProvider : public PersonalizeDefaultEpProviderBase
{
public:
    using PersonalizeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PersonalizeEndpointProvider()
      : PersonalizeDefaultEpProviderBase(Aws::Personalize::PersonalizeEndpointRules::Rules)
    {}

    ~PersonalizeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Personalize
} // namespace Aws
