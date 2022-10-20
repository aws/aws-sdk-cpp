/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/docdb/DocDBEndpointRules.h>


namespace Aws
{
namespace DocDB
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DocDBClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DocDBBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DocDBEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DocDBEndpointProvider,
                                                                        DocDBBuiltInParameters,
                                                                        DocDBClientContextParameters>;


class DocDBEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DocDBResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DocDBEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DocDB::DocDBEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DocDBResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DocDBEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DocDBEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DocDB
} // namespace Aws
