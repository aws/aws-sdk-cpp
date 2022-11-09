/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rekognition/RekognitionEndpointRules.h>


namespace Aws
{
namespace Rekognition
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RekognitionClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RekognitionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RekognitionBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Rekognition Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RekognitionEndpointProviderBase =
    EndpointProviderBase<RekognitionClientConfiguration, RekognitionBuiltInParameters, RekognitionClientContextParameters>;

using RekognitionDefaultEpProviderBase =
    DefaultEndpointProvider<RekognitionClientConfiguration, RekognitionBuiltInParameters, RekognitionClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_REKOGNITION_API RekognitionEndpointProvider : public RekognitionDefaultEpProviderBase
{
public:
    using RekognitionResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RekognitionEndpointProvider()
      : RekognitionDefaultEpProviderBase(Aws::Rekognition::RekognitionEndpointRules::Rules)
    {}

    ~RekognitionEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Rekognition
} // namespace Aws
