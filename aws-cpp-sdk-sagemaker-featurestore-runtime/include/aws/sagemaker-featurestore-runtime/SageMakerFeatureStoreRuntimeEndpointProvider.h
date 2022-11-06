/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointRules.h>


namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SageMakerFeatureStoreRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerFeatureStoreRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SageMakerFeatureStoreRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerFeatureStoreRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerFeatureStoreRuntimeEndpointProviderBase =
    EndpointProviderBase<SageMakerFeatureStoreRuntimeClientConfiguration, SageMakerFeatureStoreRuntimeBuiltInParameters, SageMakerFeatureStoreRuntimeClientContextParameters>;

using SageMakerFeatureStoreRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<SageMakerFeatureStoreRuntimeClientConfiguration, SageMakerFeatureStoreRuntimeBuiltInParameters, SageMakerFeatureStoreRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERFEATURESTORERUNTIME_API SageMakerFeatureStoreRuntimeEndpointProvider : public SageMakerFeatureStoreRuntimeDefaultEpProviderBase
{
public:
    using SageMakerFeatureStoreRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SageMakerFeatureStoreRuntimeEndpointProvider()
      : SageMakerFeatureStoreRuntimeDefaultEpProviderBase(Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeEndpointRules::Rules)
    {}

    ~SageMakerFeatureStoreRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
