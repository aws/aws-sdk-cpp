/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/emr-containers/EMRContainersEndpointRules.h>


namespace Aws
{
namespace EMRContainers
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EMRContainersClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EMRContainersBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EMRContainersEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EMRContainersEndpointProvider,
                                                                        EMRContainersBuiltInParameters,
                                                                        EMRContainersClientContextParameters>;


class EMRContainersEndpointProvider : public DefaultEndpointProviderT
{
public:
    using EMRContainersResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EMRContainersEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EMRContainers::EMRContainersEndpointRules::Rules),
        clientConfiguration(config)
    {}

    EMRContainersResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EMRContainersEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EMRContainersEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EMRContainers
} // namespace Aws
