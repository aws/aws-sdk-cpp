/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/datapipeline/DataPipelineEndpointRules.h>


namespace Aws
{
namespace DataPipeline
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DataPipelineClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DataPipelineBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DataPipelineEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DataPipelineEndpointProvider,
                                                                        DataPipelineBuiltInParameters,
                                                                        DataPipelineClientContextParameters>;


class DataPipelineEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DataPipelineResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DataPipelineEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DataPipeline::DataPipelineEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DataPipelineResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DataPipelineEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DataPipelineEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DataPipeline
} // namespace Aws
