/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Model {
enum class SlotConstraint { NOT_SET, Required, Optional };

namespace SlotConstraintMapper {
AWS_LEXMODELSV2_API SlotConstraint GetSlotConstraintForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForSlotConstraint(SlotConstraint value);
}  // namespace SlotConstraintMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
