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
  enum class IcebergSortDirection
  {
    NOT_SET,
    asc,
    desc
  };

namespace IcebergSortDirectionMapper
{
AWS_GLUE_API IcebergSortDirection GetIcebergSortDirectionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIcebergSortDirection(IcebergSortDirection value);
} // namespace IcebergSortDirectionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
