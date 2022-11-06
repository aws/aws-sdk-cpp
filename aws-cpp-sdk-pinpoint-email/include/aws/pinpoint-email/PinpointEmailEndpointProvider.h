/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pinpoint-email/PinpointEmailEndpointRules.h>


namespace Aws
{
namespace PinpointEmail
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PinpointEmailClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PinpointEmailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PinpointEmailBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PinpointEmail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PinpointEmailEndpointProviderBase =
    EndpointProviderBase<PinpointEmailClientConfiguration, PinpointEmailBuiltInParameters, PinpointEmailClientContextParameters>;

using PinpointEmailDefaultEpProviderBase =
    DefaultEndpointProvider<PinpointEmailClientConfiguration, PinpointEmailBuiltInParameters, PinpointEmailClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PINPOINTEMAIL_API PinpointEmailEndpointProvider : public PinpointEmailDefaultEpProviderBase
{
public:
    using PinpointEmailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PinpointEmailEndpointProvider()
      : PinpointEmailDefaultEpProviderBase(Aws::PinpointEmail::PinpointEmailEndpointRules::Rules)
    {}

    ~PinpointEmailEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PinpointEmail
} // namespace Aws
