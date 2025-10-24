/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/DLM_EXPORTS.h>

namespace Aws {
namespace DLM {
namespace Model {
enum class StageValues { NOT_SET, PRE, POST };

namespace StageValuesMapper {
AWS_DLM_API StageValues GetStageValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForStageValues(StageValues value);
}  // namespace StageValuesMapper
}  // namespace Model
}  // namespace DLM
}  // namespace Aws
