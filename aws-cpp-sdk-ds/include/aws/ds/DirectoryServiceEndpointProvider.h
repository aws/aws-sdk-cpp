/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ds/DirectoryServiceEndpointRules.h>


namespace Aws
{
namespace DirectoryService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DirectoryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DirectoryServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DirectoryServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DirectoryServiceEndpointProvider,
                                                                        DirectoryServiceBuiltInParameters,
                                                                        DirectoryServiceClientContextParameters>;


class DirectoryServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DirectoryServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DirectoryServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DirectoryService::DirectoryServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DirectoryServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DirectoryServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DirectoryServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DirectoryService
} // namespace Aws
