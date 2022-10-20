/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/schemas/SchemasEndpointRules.h>


namespace Aws
{
namespace Schemas
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SchemasClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SchemasBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SchemasEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SchemasEndpointProvider,
                                                                        SchemasBuiltInParameters,
                                                                        SchemasClientContextParameters>;


class SchemasEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SchemasResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SchemasEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Schemas::SchemasEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SchemasResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SchemasEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SchemasEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Schemas
} // namespace Aws
