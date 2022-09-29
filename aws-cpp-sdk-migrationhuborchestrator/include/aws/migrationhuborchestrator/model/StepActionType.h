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
  enum class StepActionType
  {
    NOT_SET,
    MANUAL,
    AUTOMATED
  };

namespace StepActionTypeMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API StepActionType GetStepActionTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForStepActionType(StepActionType value);
} // namespace StepActionTypeMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
