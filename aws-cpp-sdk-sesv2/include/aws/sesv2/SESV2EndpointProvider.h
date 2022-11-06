/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sesv2/SESV2EndpointRules.h>


namespace Aws
{
namespace SESV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SESV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SESV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SESV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SESV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SESV2EndpointProviderBase =
    EndpointProviderBase<SESV2ClientConfiguration, SESV2BuiltInParameters, SESV2ClientContextParameters>;

using SESV2DefaultEpProviderBase =
    DefaultEndpointProvider<SESV2ClientConfiguration, SESV2BuiltInParameters, SESV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SESV2_API SESV2EndpointProvider : public SESV2DefaultEpProviderBase
{
public:
    using SESV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SESV2EndpointProvider()
      : SESV2DefaultEpProviderBase(Aws::SESV2::SESV2EndpointRules::Rules)
    {}

    ~SESV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SESV2
} // namespace Aws
