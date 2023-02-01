/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KendraRanking
{
namespace Model
{
  enum class RescoreExecutionPlanStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace RescoreExecutionPlanStatusMapper
{
AWS_KENDRARANKING_API RescoreExecutionPlanStatus GetRescoreExecutionPlanStatusForName(const Aws::String& name);

AWS_KENDRARANKING_API Aws::String GetNameForRescoreExecutionPlanStatus(RescoreExecutionPlanStatus value);
} // namespace RescoreExecutionPlanStatusMapper
} // namespace Model
} // namespace KendraRanking
} // namespace Aws
