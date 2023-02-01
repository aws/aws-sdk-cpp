/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace SortOrderMapper
{
AWS_ACM_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
