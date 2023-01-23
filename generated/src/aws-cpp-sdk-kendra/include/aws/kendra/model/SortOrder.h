/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    DESC,
    ASC
  };

namespace SortOrderMapper
{
AWS_KENDRA_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
