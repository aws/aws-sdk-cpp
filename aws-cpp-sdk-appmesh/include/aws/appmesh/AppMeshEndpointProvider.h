/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appmesh/AppMeshEndpointRules.h>


namespace Aws
{
namespace AppMesh
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppMeshClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppMeshBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppMeshEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppMeshEndpointProvider,
                                                                        AppMeshBuiltInParameters,
                                                                        AppMeshClientContextParameters>;


class AppMeshEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppMeshResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppMeshEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppMesh::AppMeshEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppMeshResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppMeshEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppMeshEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppMesh
} // namespace Aws
