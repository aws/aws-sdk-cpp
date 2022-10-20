/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/redshift/RedshiftEndpointRules.h>


namespace Aws
{
namespace Redshift
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RedshiftClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RedshiftBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RedshiftEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RedshiftEndpointProvider,
                                                                        RedshiftBuiltInParameters,
                                                                        RedshiftClientContextParameters>;


class RedshiftEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RedshiftResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RedshiftEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Redshift::RedshiftEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RedshiftResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RedshiftEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RedshiftEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Redshift
} // namespace Aws
