/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
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
AWS_CONNECT_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
