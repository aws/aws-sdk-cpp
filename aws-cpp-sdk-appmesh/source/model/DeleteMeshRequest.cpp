/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DeleteMeshRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMeshRequest::DeleteMeshRequest() : 
    m_meshNameHasBeenSet(false)
{
}

Aws::String DeleteMeshRequest::SerializePayload() const
{
  return {};
}




