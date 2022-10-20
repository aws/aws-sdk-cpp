/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudformation/CloudFormationEndpointRules.h>


namespace Aws
{
namespace CloudFormation
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudFormationClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudFormationBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudFormationEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudFormationEndpointProvider,
                                                                        CloudFormationBuiltInParameters,
                                                                        CloudFormationClientContextParameters>;


class CloudFormationEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudFormationResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudFormationEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudFormation::CloudFormationEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudFormationResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudFormationEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudFormationEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudFormation
} // namespace Aws
