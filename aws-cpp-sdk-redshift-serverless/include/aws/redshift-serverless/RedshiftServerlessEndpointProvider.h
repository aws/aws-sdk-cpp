/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/redshift-serverless/RedshiftServerlessEndpointRules.h>


namespace Aws
{
namespace RedshiftServerless
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RedshiftServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RedshiftServerlessBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RedshiftServerlessEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RedshiftServerlessEndpointProvider,
                                                                        RedshiftServerlessBuiltInParameters,
                                                                        RedshiftServerlessClientContextParameters>;


class RedshiftServerlessEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RedshiftServerlessResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RedshiftServerlessEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RedshiftServerless::RedshiftServerlessEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RedshiftServerlessResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RedshiftServerlessEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RedshiftServerlessEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RedshiftServerless
} // namespace Aws
