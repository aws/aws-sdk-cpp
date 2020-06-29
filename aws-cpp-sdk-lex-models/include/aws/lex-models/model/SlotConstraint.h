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
  enum class SlotConstraint
  {
    NOT_SET,
    Required,
    Optional
  };

namespace SlotConstraintMapper
{
AWS_LEXMODELBUILDINGSERVICE_API SlotConstraint GetSlotConstraintForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForSlotConstraint(SlotConstraint value);
} // namespace SlotConstraintMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
