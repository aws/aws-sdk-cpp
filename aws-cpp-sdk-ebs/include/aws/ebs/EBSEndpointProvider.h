/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ebs/EBSEndpointRules.h>


namespace Aws
{
namespace EBS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EBSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EBSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EBSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EBSEndpointProvider,
                                                                        EBSBuiltInParameters,
                                                                        EBSClientContextParameters>;


class EBSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using EBSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EBSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EBS::EBSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    EBSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EBSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EBSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EBS
} // namespace Aws
