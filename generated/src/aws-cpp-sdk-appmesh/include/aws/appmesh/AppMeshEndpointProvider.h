/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMeshClientConfiguration.h>
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppMesh {
namespace Endpoint {
using AppMeshClientConfiguration = Aws::AppMesh::AppMeshClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppMeshClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPMESH_API AppMeshBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppMeshBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppMeshClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppMeshClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppMeshClientConfiguration& config);
};

/**
 * The type for the AppMesh Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppMeshEndpointProviderBase =
    EndpointProviderBase<AppMeshClientConfiguration, AppMeshBuiltInParameters, AppMeshClientContextParameters>;

using AppMeshDefaultEpProviderBase =
    BDDEndpointProvider<AppMeshClientConfiguration, AppMeshBuiltInParameters, AppMeshClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppMesh

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPMESH_EXTERN template class AWS_APPMESH_API
    Aws::Endpoint::EndpointProviderBase<AppMesh::Endpoint::AppMeshClientConfiguration, AppMesh::Endpoint::AppMeshBuiltInParameters,
                                        AppMesh::Endpoint::AppMeshClientContextParameters>;

AWS_APPMESH_EXTERN template class AWS_APPMESH_API
    Aws::Endpoint::BDDEndpointProvider<AppMesh::Endpoint::AppMeshClientConfiguration, AppMesh::Endpoint::AppMeshBuiltInParameters,
                                       AppMesh::Endpoint::AppMeshClientContextParameters>;
}  // namespace Endpoint

namespace AppMesh {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPMESH_API AppMeshEndpointProvider : public AppMeshDefaultEpProviderBase {
 public:
  using AppMeshResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppMeshEndpointProvider();

  ~AppMeshEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppMesh
}  // namespace Aws
