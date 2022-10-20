/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/machinelearning/MachineLearningEndpointRules.h>


namespace Aws
{
namespace MachineLearning
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MachineLearningClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MachineLearningBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MachineLearningEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MachineLearningEndpointProvider,
                                                                        MachineLearningBuiltInParameters,
                                                                        MachineLearningClientContextParameters>;


class MachineLearningEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MachineLearningResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MachineLearningEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MachineLearning::MachineLearningEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MachineLearningResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MachineLearningEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MachineLearningEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MachineLearning
} // namespace Aws
