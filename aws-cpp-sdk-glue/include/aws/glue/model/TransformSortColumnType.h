/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class TransformSortColumnType
  {
    NOT_SET,
    NAME,
    TRANSFORM_TYPE,
    STATUS,
    CREATED,
    LAST_MODIFIED
  };

namespace TransformSortColumnTypeMapper
{
AWS_GLUE_API TransformSortColumnType GetTransformSortColumnTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTransformSortColumnType(TransformSortColumnType value);
} // namespace TransformSortColumnTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
