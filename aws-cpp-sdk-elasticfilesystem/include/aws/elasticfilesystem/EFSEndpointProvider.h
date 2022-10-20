/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticfilesystem/EFSEndpointRules.h>


namespace Aws
{
namespace EFS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EFSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EFSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EFSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EFSEndpointProvider,
                                                                        EFSBuiltInParameters,
                                                                        EFSClientContextParameters>;


class EFSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using EFSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EFSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EFS::EFSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    EFSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EFSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EFSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EFS
} // namespace Aws
