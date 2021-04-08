/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class InferenceExecutionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESS,
    FAILED
  };

namespace InferenceExecutionStatusMapper
{
AWS_LOOKOUTEQUIPMENT_API InferenceExecutionStatus GetInferenceExecutionStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForInferenceExecutionStatus(InferenceExecutionStatus value);
} // namespace InferenceExecutionStatusMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
