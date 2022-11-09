/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/support/SupportEndpointRules.h>


namespace Aws
{
namespace Support
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SupportClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SupportClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SupportBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Support Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupportEndpointProviderBase =
    EndpointProviderBase<SupportClientConfiguration, SupportBuiltInParameters, SupportClientContextParameters>;

using SupportDefaultEpProviderBase =
    DefaultEndpointProvider<SupportClientConfiguration, SupportBuiltInParameters, SupportClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPORT_API SupportEndpointProvider : public SupportDefaultEpProviderBase
{
public:
    using SupportResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SupportEndpointProvider()
      : SupportDefaultEpProviderBase(Aws::Support::SupportEndpointRules::Rules)
    {}

    ~SupportEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Support
} // namespace Aws
