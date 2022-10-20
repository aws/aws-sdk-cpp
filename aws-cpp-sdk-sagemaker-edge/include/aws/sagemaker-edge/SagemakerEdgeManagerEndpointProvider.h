/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointRules.h>


namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SagemakerEdgeManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SagemakerEdgeManagerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SagemakerEdgeManagerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SagemakerEdgeManagerEndpointProvider,
                                                                        SagemakerEdgeManagerBuiltInParameters,
                                                                        SagemakerEdgeManagerClientContextParameters>;


class SagemakerEdgeManagerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SagemakerEdgeManagerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SagemakerEdgeManagerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SagemakerEdgeManager::SagemakerEdgeManagerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SagemakerEdgeManagerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SagemakerEdgeManagerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SagemakerEdgeManagerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SagemakerEdgeManager
} // namespace Aws
