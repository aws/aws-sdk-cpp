/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elastic-inference/ElasticInferenceEndpointRules.h>


namespace Aws
{
namespace ElasticInference
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ElasticInferenceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ElasticInferenceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ElasticInferenceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ElasticInference Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticInferenceEndpointProviderBase =
    EndpointProviderBase<ElasticInferenceClientConfiguration, ElasticInferenceBuiltInParameters, ElasticInferenceClientContextParameters>;

using ElasticInferenceDefaultEpProviderBase =
    DefaultEndpointProvider<ElasticInferenceClientConfiguration, ElasticInferenceBuiltInParameters, ElasticInferenceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICINFERENCE_API ElasticInferenceEndpointProvider : public ElasticInferenceDefaultEpProviderBase
{
public:
    using ElasticInferenceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ElasticInferenceEndpointProvider()
      : ElasticInferenceDefaultEpProviderBase(Aws::ElasticInference::ElasticInferenceEndpointRules::Rules)
    {}

    ~ElasticInferenceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ElasticInference
} // namespace Aws
