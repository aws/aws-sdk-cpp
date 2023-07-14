/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class StackDriftDetectionStatus
  {
    NOT_SET,
    DETECTION_IN_PROGRESS,
    DETECTION_FAILED,
    DETECTION_COMPLETE
  };

namespace StackDriftDetectionStatusMapper
{
AWS_CLOUDFORMATION_API StackDriftDetectionStatus GetStackDriftDetectionStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackDriftDetectionStatus(StackDriftDetectionStatus value);
} // namespace StackDriftDetectionStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
