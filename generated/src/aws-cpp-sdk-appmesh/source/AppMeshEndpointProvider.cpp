/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/AppMeshEndpointProvider.h>
#include <aws/appmesh/internal/AppMeshEndpointRules.h>

namespace Aws {
namespace AppMesh {
namespace Endpoint {
AppMeshEndpointProvider::AppMeshEndpointProvider()
    : AppMeshDefaultEpProviderBase(Aws::AppMesh::AppMeshEndpointRules::GetRulesBlob(), Aws::AppMesh::AppMeshEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppMesh
}  // namespace Aws
