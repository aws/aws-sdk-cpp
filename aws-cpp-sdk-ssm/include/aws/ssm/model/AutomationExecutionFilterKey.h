/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AutomationExecutionFilterKey
  {
    NOT_SET,
    DocumentNamePrefix,
    ExecutionStatus,
    ExecutionId,
    ParentExecutionId,
    CurrentAction,
    StartTimeBefore,
    StartTimeAfter,
    AutomationType,
    TagKey,
    TargetResourceGroup,
    AutomationSubtype,
    OpsItemId
  };

namespace AutomationExecutionFilterKeyMapper
{
AWS_SSM_API AutomationExecutionFilterKey GetAutomationExecutionFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAutomationExecutionFilterKey(AutomationExecutionFilterKey value);
} // namespace AutomationExecutionFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
