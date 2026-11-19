/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/AppMeshEndpointProvider.h>
#include <aws/appmesh/internal/AppMeshEndpointRules.h>

namespace Aws {
#ifndef AWS_APPMESH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppMesh::Endpoint::AppMeshClientConfiguration,
                                                   AppMesh::Endpoint::AppMeshBuiltInParameters,
                                                   AppMesh::Endpoint::AppMeshClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppMesh::Endpoint::AppMeshClientConfiguration,
                                                  AppMesh::Endpoint::AppMeshBuiltInParameters,
                                                  AppMesh::Endpoint::AppMeshClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppMesh {
namespace Endpoint {
AppMeshEndpointProvider::AppMeshEndpointProvider()
    : AppMeshDefaultEpProviderBase(Aws::AppMesh::AppMeshEndpointRules::GetRulesBlob(), Aws::AppMesh::AppMeshEndpointRules::RulesBlobSize) {}

void AppMeshBuiltInParameters::SetFromClientConfiguration(const AppMeshClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppMeshClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppMeshBuiltInParameters::SetFromClientConfiguration(const AppMeshClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppMeshClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppMeshBuiltInParameters::SetServiceSpecificParameters(const AppMeshClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppMesh
}  // namespace Aws
