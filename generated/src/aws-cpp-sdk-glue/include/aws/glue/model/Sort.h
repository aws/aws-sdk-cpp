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
  enum class Sort
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortMapper
{
AWS_GLUE_API Sort GetSortForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSort(Sort value);
} // namespace SortMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
