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
  enum class StackSetDriftDetectionStatus
  {
    NOT_SET,
    COMPLETED,
    FAILED,
    PARTIAL_SUCCESS,
    IN_PROGRESS,
    STOPPED
  };

namespace StackSetDriftDetectionStatusMapper
{
AWS_CLOUDFORMATION_API StackSetDriftDetectionStatus GetStackSetDriftDetectionStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackSetDriftDetectionStatus(StackSetDriftDetectionStatus value);
} // namespace StackSetDriftDetectionStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
