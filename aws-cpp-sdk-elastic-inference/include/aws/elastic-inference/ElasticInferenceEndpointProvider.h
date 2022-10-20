/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElasticInferenceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElasticInferenceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElasticInferenceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElasticInferenceEndpointProvider,
                                                                        ElasticInferenceBuiltInParameters,
                                                                        ElasticInferenceClientContextParameters>;


class ElasticInferenceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElasticInferenceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElasticInferenceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElasticInference::ElasticInferenceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElasticInferenceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElasticInferenceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElasticInferenceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElasticInference
} // namespace Aws
