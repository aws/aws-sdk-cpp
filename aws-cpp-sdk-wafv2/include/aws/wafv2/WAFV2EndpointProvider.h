/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/wafv2/WAFV2EndpointRules.h>


namespace Aws
{
namespace WAFV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WAFV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WAFV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WAFV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WAFV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WAFV2EndpointProviderBase =
    EndpointProviderBase<WAFV2ClientConfiguration, WAFV2BuiltInParameters, WAFV2ClientContextParameters>;

using WAFV2DefaultEpProviderBase =
    DefaultEndpointProvider<WAFV2ClientConfiguration, WAFV2BuiltInParameters, WAFV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WAFV2_API WAFV2EndpointProvider : public WAFV2DefaultEpProviderBase
{
public:
    using WAFV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WAFV2EndpointProvider()
      : WAFV2DefaultEpProviderBase(Aws::WAFV2::WAFV2EndpointRules::Rules)
    {}

    ~WAFV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WAFV2
} // namespace Aws
