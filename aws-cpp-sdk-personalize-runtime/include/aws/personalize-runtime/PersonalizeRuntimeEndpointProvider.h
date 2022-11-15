/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/personalize-runtime/PersonalizeRuntimeEndpointRules.h>


namespace Aws
{
namespace PersonalizeRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PersonalizeRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PersonalizeRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PersonalizeRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PersonalizeRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PersonalizeRuntimeEndpointProviderBase =
    EndpointProviderBase<PersonalizeRuntimeClientConfiguration, PersonalizeRuntimeBuiltInParameters, PersonalizeRuntimeClientContextParameters>;

using PersonalizeRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<PersonalizeRuntimeClientConfiguration, PersonalizeRuntimeBuiltInParameters, PersonalizeRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PERSONALIZERUNTIME_API PersonalizeRuntimeEndpointProvider : public PersonalizeRuntimeDefaultEpProviderBase
{
public:
    using PersonalizeRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PersonalizeRuntimeEndpointProvider()
      : PersonalizeRuntimeDefaultEpProviderBase(Aws::PersonalizeRuntime::PersonalizeRuntimeEndpointRules::Rules)
    {}

    ~PersonalizeRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PersonalizeRuntime
} // namespace Aws
