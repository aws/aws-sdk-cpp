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
  enum class EgressFilterType
  {
    NOT_SET,
    ALLOW_ALL,
    DROP_ALL
  };

namespace EgressFilterTypeMapper
{
AWS_APPMESH_API EgressFilterType GetEgressFilterTypeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForEgressFilterType(EgressFilterType value);
} // namespace EgressFilterTypeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
