/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workdocs/WorkDocsEndpointRules.h>


namespace Aws
{
namespace WorkDocs
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WorkDocsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WorkDocsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WorkDocsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WorkDocsEndpointProvider,
                                                                        WorkDocsBuiltInParameters,
                                                                        WorkDocsClientContextParameters>;


class WorkDocsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WorkDocsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WorkDocsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WorkDocs::WorkDocsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WorkDocsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WorkDocsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WorkDocsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WorkDocs
} // namespace Aws
