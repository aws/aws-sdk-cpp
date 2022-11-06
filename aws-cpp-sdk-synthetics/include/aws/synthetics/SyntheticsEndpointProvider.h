/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/synthetics/SyntheticsEndpointRules.h>


namespace Aws
{
namespace Synthetics
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SyntheticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SyntheticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SyntheticsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Synthetics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SyntheticsEndpointProviderBase =
    EndpointProviderBase<SyntheticsClientConfiguration, SyntheticsBuiltInParameters, SyntheticsClientContextParameters>;

using SyntheticsDefaultEpProviderBase =
    DefaultEndpointProvider<SyntheticsClientConfiguration, SyntheticsBuiltInParameters, SyntheticsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SYNTHETICS_API SyntheticsEndpointProvider : public SyntheticsDefaultEpProviderBase
{
public:
    using SyntheticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SyntheticsEndpointProvider()
      : SyntheticsDefaultEpProviderBase(Aws::Synthetics::SyntheticsEndpointRules::Rules)
    {}

    ~SyntheticsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Synthetics
} // namespace Aws
