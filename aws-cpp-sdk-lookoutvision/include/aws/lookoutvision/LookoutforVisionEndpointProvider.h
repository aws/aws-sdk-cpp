/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lookoutvision/LookoutforVisionEndpointRules.h>


namespace Aws
{
namespace LookoutforVision
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LookoutforVisionClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LookoutforVisionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LookoutforVisionBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LookoutforVision Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LookoutforVisionEndpointProviderBase =
    EndpointProviderBase<LookoutforVisionClientConfiguration, LookoutforVisionBuiltInParameters, LookoutforVisionClientContextParameters>;

using LookoutforVisionDefaultEpProviderBase =
    DefaultEndpointProvider<LookoutforVisionClientConfiguration, LookoutforVisionBuiltInParameters, LookoutforVisionClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LOOKOUTFORVISION_API LookoutforVisionEndpointProvider : public LookoutforVisionDefaultEpProviderBase
{
public:
    using LookoutforVisionResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LookoutforVisionEndpointProvider()
      : LookoutforVisionDefaultEpProviderBase(Aws::LookoutforVision::LookoutforVisionEndpointRules::Rules)
    {}

    ~LookoutforVisionEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LookoutforVision
} // namespace Aws
