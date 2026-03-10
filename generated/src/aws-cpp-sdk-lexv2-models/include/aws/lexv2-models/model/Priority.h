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
enum class Priority { NOT_SET, High, Medium, Low };

namespace PriorityMapper {
AWS_LEXMODELSV2_API Priority GetPriorityForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForPriority(Priority value);
}  // namespace PriorityMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
