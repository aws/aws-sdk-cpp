/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/comprehend/ComprehendEndpointRules.h>


namespace Aws
{
namespace Comprehend
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ComprehendClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ComprehendBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ComprehendEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ComprehendEndpointProvider,
                                                                        ComprehendBuiltInParameters,
                                                                        ComprehendClientContextParameters>;


class ComprehendEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ComprehendResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ComprehendEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Comprehend::ComprehendEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ComprehendResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ComprehendEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ComprehendEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Comprehend
} // namespace Aws
