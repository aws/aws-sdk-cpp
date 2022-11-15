/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointRules.h>


namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChimeSDKMediaPipelinesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChimeSDKMediaPipelinesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChimeSDKMediaPipelinesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ChimeSDKMediaPipelines Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKMediaPipelinesEndpointProviderBase =
    EndpointProviderBase<ChimeSDKMediaPipelinesClientConfiguration, ChimeSDKMediaPipelinesBuiltInParameters, ChimeSDKMediaPipelinesClientContextParameters>;

using ChimeSDKMediaPipelinesDefaultEpProviderBase =
    DefaultEndpointProvider<ChimeSDKMediaPipelinesClientConfiguration, ChimeSDKMediaPipelinesBuiltInParameters, ChimeSDKMediaPipelinesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKMEDIAPIPELINES_API ChimeSDKMediaPipelinesEndpointProvider : public ChimeSDKMediaPipelinesDefaultEpProviderBase
{
public:
    using ChimeSDKMediaPipelinesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChimeSDKMediaPipelinesEndpointProvider()
      : ChimeSDKMediaPipelinesDefaultEpProviderBase(Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesEndpointRules::Rules)
    {}

    ~ChimeSDKMediaPipelinesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
