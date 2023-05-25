/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class EffectiveDeploymentExecutionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    QUEUED,
    FAILED,
    COMPLETED,
    TIMED_OUT,
    CANCELED,
    REJECTED,
    SUCCEEDED
  };

namespace EffectiveDeploymentExecutionStatusMapper
{
AWS_GREENGRASSV2_API EffectiveDeploymentExecutionStatus GetEffectiveDeploymentExecutionStatusForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForEffectiveDeploymentExecutionStatus(EffectiveDeploymentExecutionStatus value);
} // namespace EffectiveDeploymentExecutionStatusMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
