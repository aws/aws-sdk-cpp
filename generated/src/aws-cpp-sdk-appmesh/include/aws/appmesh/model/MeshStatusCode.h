/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{
  enum class MeshStatusCode
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DELETED
  };

namespace MeshStatusCodeMapper
{
AWS_APPMESH_API MeshStatusCode GetMeshStatusCodeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForMeshStatusCode(MeshStatusCode value);
} // namespace MeshStatusCodeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
