/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lambda/LambdaEndpointRules.h>


namespace Aws
{
namespace Lambda
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LambdaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LambdaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LambdaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LambdaEndpointProvider,
                                                                        LambdaBuiltInParameters,
                                                                        LambdaClientContextParameters>;


class LambdaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LambdaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LambdaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Lambda::LambdaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LambdaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LambdaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LambdaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Lambda
} // namespace Aws
