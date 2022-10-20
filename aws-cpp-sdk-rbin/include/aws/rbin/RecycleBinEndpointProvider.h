/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rbin/RecycleBinEndpointRules.h>


namespace Aws
{
namespace RecycleBin
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RecycleBinClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RecycleBinBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RecycleBinEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RecycleBinEndpointProvider,
                                                                        RecycleBinBuiltInParameters,
                                                                        RecycleBinClientContextParameters>;


class RecycleBinEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RecycleBinResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RecycleBinEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RecycleBin::RecycleBinEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RecycleBinResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RecycleBinEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RecycleBinEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RecycleBin
} // namespace Aws
