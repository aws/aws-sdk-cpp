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
  enum class IcebergStructTypeEnum
  {
    NOT_SET,
    struct_
  };

namespace IcebergStructTypeEnumMapper
{
AWS_GLUE_API IcebergStructTypeEnum GetIcebergStructTypeEnumForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIcebergStructTypeEnum(IcebergStructTypeEnum value);
} // namespace IcebergStructTypeEnumMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
