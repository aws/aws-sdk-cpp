/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class SlotValueSelectionStrategy
  {
    NOT_SET,
    ORIGINAL_VALUE,
    TOP_RESOLUTION
  };

namespace SlotValueSelectionStrategyMapper
{
AWS_LEXMODELBUILDINGSERVICE_API SlotValueSelectionStrategy GetSlotValueSelectionStrategyForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForSlotValueSelectionStrategy(SlotValueSelectionStrategy value);
} // namespace SlotValueSelectionStrategyMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
