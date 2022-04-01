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
  enum class DetectMitigationActionsTaskStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESSFUL,
    FAILED,
    CANCELED
  };

namespace DetectMitigationActionsTaskStatusMapper
{
AWS_IOT_API DetectMitigationActionsTaskStatus GetDetectMitigationActionsTaskStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDetectMitigationActionsTaskStatus(DetectMitigationActionsTaskStatus value);
} // namespace DetectMitigationActionsTaskStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
