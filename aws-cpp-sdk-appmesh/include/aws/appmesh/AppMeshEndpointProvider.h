/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppMeshClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppMeshClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppMeshBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppMesh Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppMeshEndpointProviderBase =
    EndpointProviderBase<AppMeshClientConfiguration, AppMeshBuiltInParameters, AppMeshClientContextParameters>;

using AppMeshDefaultEpProviderBase =
    DefaultEndpointProvider<AppMeshClientConfiguration, AppMeshBuiltInParameters, AppMeshClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPMESH_API AppMeshEndpointProvider : public AppMeshDefaultEpProviderBase
{
public:
    using AppMeshResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppMeshEndpointProvider()
      : AppMeshDefaultEpProviderBase(Aws::AppMesh::AppMeshEndpointRules::Rules)
    {}

    ~AppMeshEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppMesh
} // namespace Aws
