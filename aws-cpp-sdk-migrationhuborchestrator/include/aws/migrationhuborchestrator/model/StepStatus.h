/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{
  enum class StepStatus
  {
    NOT_SET,
    AWAITING_DEPENDENCIES,
    READY,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    PAUSED,
    USER_ATTENTION_REQUIRED
  };

namespace StepStatusMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API StepStatus GetStepStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForStepStatus(StepStatus value);
} // namespace StepStatusMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
