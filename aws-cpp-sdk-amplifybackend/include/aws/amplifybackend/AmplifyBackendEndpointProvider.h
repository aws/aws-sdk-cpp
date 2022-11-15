/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amplifybackend/AmplifyBackendEndpointRules.h>


namespace Aws
{
namespace AmplifyBackend
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AmplifyBackendClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AmplifyBackendClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AmplifyBackendBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AmplifyBackend Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AmplifyBackendEndpointProviderBase =
    EndpointProviderBase<AmplifyBackendClientConfiguration, AmplifyBackendBuiltInParameters, AmplifyBackendClientContextParameters>;

using AmplifyBackendDefaultEpProviderBase =
    DefaultEndpointProvider<AmplifyBackendClientConfiguration, AmplifyBackendBuiltInParameters, AmplifyBackendClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AMPLIFYBACKEND_API AmplifyBackendEndpointProvider : public AmplifyBackendDefaultEpProviderBase
{
public:
    using AmplifyBackendResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AmplifyBackendEndpointProvider()
      : AmplifyBackendDefaultEpProviderBase(Aws::AmplifyBackend::AmplifyBackendEndpointRules::Rules)
    {}

    ~AmplifyBackendEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AmplifyBackend
} // namespace Aws
