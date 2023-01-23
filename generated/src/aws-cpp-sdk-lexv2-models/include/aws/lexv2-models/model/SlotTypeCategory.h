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
  enum class SlotTypeCategory
  {
    NOT_SET,
    Custom,
    Extended,
    ExternalGrammar,
    Composite
  };

namespace SlotTypeCategoryMapper
{
AWS_LEXMODELSV2_API SlotTypeCategory GetSlotTypeCategoryForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForSlotTypeCategory(SlotTypeCategory value);
} // namespace SlotTypeCategoryMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
