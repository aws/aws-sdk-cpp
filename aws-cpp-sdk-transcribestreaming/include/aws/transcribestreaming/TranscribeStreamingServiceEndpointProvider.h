/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointRules.h>


namespace Aws
{
namespace TranscribeStreamingService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TranscribeStreamingServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TranscribeStreamingServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using TranscribeStreamingServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TranscribeStreamingService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TranscribeStreamingServiceEndpointProviderBase =
    EndpointProviderBase<TranscribeStreamingServiceClientConfiguration, TranscribeStreamingServiceBuiltInParameters, TranscribeStreamingServiceClientContextParameters>;

using TranscribeStreamingServiceDefaultEpProviderBase =
    DefaultEndpointProvider<TranscribeStreamingServiceClientConfiguration, TranscribeStreamingServiceBuiltInParameters, TranscribeStreamingServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscribeStreamingServiceEndpointProvider : public TranscribeStreamingServiceDefaultEpProviderBase
{
public:
    using TranscribeStreamingServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TranscribeStreamingServiceEndpointProvider()
      : TranscribeStreamingServiceDefaultEpProviderBase(Aws::TranscribeStreamingService::TranscribeStreamingServiceEndpointRules::Rules)
    {}

    ~TranscribeStreamingServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TranscribeStreamingService
} // namespace Aws
