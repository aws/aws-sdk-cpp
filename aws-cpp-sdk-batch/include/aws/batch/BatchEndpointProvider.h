/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/batch/BatchEndpointRules.h>


namespace Aws
{
namespace Batch
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BatchClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BatchBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BatchEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BatchEndpointProvider,
                                                                        BatchBuiltInParameters,
                                                                        BatchClientContextParameters>;


class BatchEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BatchResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BatchEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Batch::BatchEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BatchResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BatchEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BatchEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Batch
} // namespace Aws
