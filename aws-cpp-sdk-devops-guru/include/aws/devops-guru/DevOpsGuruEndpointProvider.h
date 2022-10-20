/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/devops-guru/DevOpsGuruEndpointRules.h>


namespace Aws
{
namespace DevOpsGuru
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DevOpsGuruClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DevOpsGuruBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DevOpsGuruEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DevOpsGuruEndpointProvider,
                                                                        DevOpsGuruBuiltInParameters,
                                                                        DevOpsGuruClientContextParameters>;


class DevOpsGuruEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DevOpsGuruResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DevOpsGuruEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DevOpsGuru::DevOpsGuruEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DevOpsGuruResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DevOpsGuruEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DevOpsGuruEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DevOpsGuru
} // namespace Aws
