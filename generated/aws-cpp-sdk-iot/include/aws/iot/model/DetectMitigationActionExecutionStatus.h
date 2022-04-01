/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class DetectMitigationActionExecutionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESSFUL,
    FAILED,
    SKIPPED
  };

namespace DetectMitigationActionExecutionStatusMapper
{
AWS_IOT_API DetectMitigationActionExecutionStatus GetDetectMitigationActionExecutionStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDetectMitigationActionExecutionStatus(DetectMitigationActionExecutionStatus value);
} // namespace DetectMitigationActionExecutionStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
