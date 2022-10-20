/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/awstransfer/TransferEndpointRules.h>


namespace Aws
{
namespace Transfer
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TransferClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TransferBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TransferEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TransferEndpointProvider,
                                                                        TransferBuiltInParameters,
                                                                        TransferClientContextParameters>;


class TransferEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TransferResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TransferEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Transfer::TransferEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TransferResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TransferEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TransferEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Transfer
} // namespace Aws
