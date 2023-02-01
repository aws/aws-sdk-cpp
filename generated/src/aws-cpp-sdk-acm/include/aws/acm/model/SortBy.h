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
  enum class SortBy
  {
    NOT_SET,
    CREATED_AT
  };

namespace SortByMapper
{
AWS_ACM_API SortBy GetSortByForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForSortBy(SortBy value);
} // namespace SortByMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
