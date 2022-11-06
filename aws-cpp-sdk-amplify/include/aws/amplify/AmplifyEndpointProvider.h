/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amplify/AmplifyEndpointRules.h>


namespace Aws
{
namespace Amplify
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AmplifyClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AmplifyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AmplifyBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Amplify Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AmplifyEndpointProviderBase =
    EndpointProviderBase<AmplifyClientConfiguration, AmplifyBuiltInParameters, AmplifyClientContextParameters>;

using AmplifyDefaultEpProviderBase =
    DefaultEndpointProvider<AmplifyClientConfiguration, AmplifyBuiltInParameters, AmplifyClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AMPLIFY_API AmplifyEndpointProvider : public AmplifyDefaultEpProviderBase
{
public:
    using AmplifyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AmplifyEndpointProvider()
      : AmplifyDefaultEpProviderBase(Aws::Amplify::AmplifyEndpointRules::Rules)
    {}

    ~AmplifyEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Amplify
} // namespace Aws
