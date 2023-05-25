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
  enum class SlotTypeFilterOperator
  {
    NOT_SET,
    CO,
    EQ
  };

namespace SlotTypeFilterOperatorMapper
{
AWS_LEXMODELSV2_API SlotTypeFilterOperator GetSlotTypeFilterOperatorForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForSlotTypeFilterOperator(SlotTypeFilterOperator value);
} // namespace SlotTypeFilterOperatorMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
