/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
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
AWS_LEXMODELSV2_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
