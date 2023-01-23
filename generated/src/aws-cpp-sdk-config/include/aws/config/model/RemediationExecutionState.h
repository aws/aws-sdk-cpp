/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RemediationExecutionState
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace RemediationExecutionStateMapper
{
AWS_CONFIGSERVICE_API RemediationExecutionState GetRemediationExecutionStateForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRemediationExecutionState(RemediationExecutionState value);
} // namespace RemediationExecutionStateMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
