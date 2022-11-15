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
  enum class MigrationWorkflowStatusEnum
  {
    NOT_SET,
    CREATING,
    NOT_STARTED,
    CREATION_FAILED,
    STARTING,
    IN_PROGRESS,
    WORKFLOW_FAILED,
    PAUSED,
    PAUSING,
    PAUSING_FAILED,
    USER_ATTENTION_REQUIRED,
    DELETING,
    DELETION_FAILED,
    DELETED,
    COMPLETED
  };

namespace MigrationWorkflowStatusEnumMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API MigrationWorkflowStatusEnum GetMigrationWorkflowStatusEnumForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForMigrationWorkflowStatusEnum(MigrationWorkflowStatusEnum value);
} // namespace MigrationWorkflowStatusEnumMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
