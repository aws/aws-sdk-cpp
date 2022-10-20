/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/glue/GlueEndpointRules.h>


namespace Aws
{
namespace Glue
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GlueClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GlueBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GlueEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GlueEndpointProvider,
                                                                        GlueBuiltInParameters,
                                                                        GlueClientContextParameters>;


class GlueEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GlueResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GlueEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Glue::GlueEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GlueResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GlueEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GlueEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Glue
} // namespace Aws
