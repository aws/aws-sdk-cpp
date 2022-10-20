/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/eks/EKSEndpointRules.h>


namespace Aws
{
namespace EKS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EKSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EKSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EKSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EKSEndpointProvider,
                                                                        EKSBuiltInParameters,
                                                                        EKSClientContextParameters>;


class EKSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using EKSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EKSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EKS::EKSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    EKSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EKSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EKSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EKS
} // namespace Aws
