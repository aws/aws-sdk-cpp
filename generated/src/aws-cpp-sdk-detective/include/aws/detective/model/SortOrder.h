/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
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
AWS_DETECTIVE_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
