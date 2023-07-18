/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortOrderMapper
{
AWS_INSPECTOR2_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
