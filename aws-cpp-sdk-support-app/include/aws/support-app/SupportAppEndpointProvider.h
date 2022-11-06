/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/support-app/SupportAppEndpointRules.h>


namespace Aws
{
namespace SupportApp
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SupportAppClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SupportAppClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SupportAppBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SupportApp Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupportAppEndpointProviderBase =
    EndpointProviderBase<SupportAppClientConfiguration, SupportAppBuiltInParameters, SupportAppClientContextParameters>;

using SupportAppDefaultEpProviderBase =
    DefaultEndpointProvider<SupportAppClientConfiguration, SupportAppBuiltInParameters, SupportAppClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPORTAPP_API SupportAppEndpointProvider : public SupportAppDefaultEpProviderBase
{
public:
    using SupportAppResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SupportAppEndpointProvider()
      : SupportAppDefaultEpProviderBase(Aws::SupportApp::SupportAppEndpointRules::Rules)
    {}

    ~SupportAppEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SupportApp
} // namespace Aws
