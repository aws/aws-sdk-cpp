/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpointRules.h>


namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AmplifyUIBuilderClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AmplifyUIBuilderClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AmplifyUIBuilderBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AmplifyUIBuilder Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AmplifyUIBuilderEndpointProviderBase =
    EndpointProviderBase<AmplifyUIBuilderClientConfiguration, AmplifyUIBuilderBuiltInParameters, AmplifyUIBuilderClientContextParameters>;

using AmplifyUIBuilderDefaultEpProviderBase =
    DefaultEndpointProvider<AmplifyUIBuilderClientConfiguration, AmplifyUIBuilderBuiltInParameters, AmplifyUIBuilderClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AMPLIFYUIBUILDER_API AmplifyUIBuilderEndpointProvider : public AmplifyUIBuilderDefaultEpProviderBase
{
public:
    using AmplifyUIBuilderResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AmplifyUIBuilderEndpointProvider()
      : AmplifyUIBuilderDefaultEpProviderBase(Aws::AmplifyUIBuilder::AmplifyUIBuilderEndpointRules::Rules)
    {}

    ~AmplifyUIBuilderEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AmplifyUIBuilder
} // namespace Aws
