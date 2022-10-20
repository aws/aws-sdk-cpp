/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lakeformation/LakeFormationEndpointRules.h>


namespace Aws
{
namespace LakeFormation
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LakeFormationClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LakeFormationBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LakeFormationEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LakeFormationEndpointProvider,
                                                                        LakeFormationBuiltInParameters,
                                                                        LakeFormationClientContextParameters>;


class LakeFormationEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LakeFormationResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LakeFormationEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LakeFormation::LakeFormationEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LakeFormationResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LakeFormationEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LakeFormationEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LakeFormation
} // namespace Aws
