/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/FIS_EXPORTS.h>

namespace Aws {
namespace FIS {
namespace Model {
enum class SafetyLeverStatusInput { NOT_SET, disengaged, engaged };

namespace SafetyLeverStatusInputMapper {
AWS_FIS_API SafetyLeverStatusInput GetSafetyLeverStatusInputForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForSafetyLeverStatusInput(SafetyLeverStatusInput value);
}  // namespace SafetyLeverStatusInputMapper
}  // namespace Model
}  // namespace FIS
}  // namespace Aws
