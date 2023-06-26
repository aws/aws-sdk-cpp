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
  enum class VirtualServiceStatusCode
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DELETED
  };

namespace VirtualServiceStatusCodeMapper
{
AWS_APPMESH_API VirtualServiceStatusCode GetVirtualServiceStatusCodeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForVirtualServiceStatusCode(VirtualServiceStatusCode value);
} // namespace VirtualServiceStatusCodeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
