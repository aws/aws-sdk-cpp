/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/honeycode/HoneycodeEndpointRules.h>


namespace Aws
{
namespace Honeycode
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using HoneycodeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using HoneycodeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using HoneycodeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Honeycode Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using HoneycodeEndpointProviderBase =
    EndpointProviderBase<HoneycodeClientConfiguration, HoneycodeBuiltInParameters, HoneycodeClientContextParameters>;

using HoneycodeDefaultEpProviderBase =
    DefaultEndpointProvider<HoneycodeClientConfiguration, HoneycodeBuiltInParameters, HoneycodeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_HONEYCODE_API HoneycodeEndpointProvider : public HoneycodeDefaultEpProviderBase
{
public:
    using HoneycodeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    HoneycodeEndpointProvider()
      : HoneycodeDefaultEpProviderBase(Aws::Honeycode::HoneycodeEndpointRules::Rules)
    {}

    ~HoneycodeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Honeycode
} // namespace Aws
