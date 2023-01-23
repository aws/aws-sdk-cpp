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
  enum class SortDirectionType
  {
    NOT_SET,
    DESCENDING,
    ASCENDING
  };

namespace SortDirectionTypeMapper
{
AWS_GLUE_API SortDirectionType GetSortDirectionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSortDirectionType(SortDirectionType value);
} // namespace SortDirectionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
