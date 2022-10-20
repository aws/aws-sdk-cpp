/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SageMakerFeatureStoreRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SageMakerFeatureStoreRuntimeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SageMakerFeatureStoreRuntimeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SageMakerFeatureStoreRuntimeEndpointProvider,
                                                                        SageMakerFeatureStoreRuntimeBuiltInParameters,
                                                                        SageMakerFeatureStoreRuntimeClientContextParameters>;


class SageMakerFeatureStoreRuntimeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SageMakerFeatureStoreRuntimeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SageMakerFeatureStoreRuntimeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SageMakerFeatureStoreRuntimeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SageMakerFeatureStoreRuntimeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SageMakerFeatureStoreRuntimeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
