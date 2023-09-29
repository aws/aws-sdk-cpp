/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace SortOrderMapper
{
AWS_BEDROCK_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
