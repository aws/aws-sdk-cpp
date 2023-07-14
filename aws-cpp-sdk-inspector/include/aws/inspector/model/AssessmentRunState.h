/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class AssessmentRunState
  {
    NOT_SET,
    CREATED,
    START_DATA_COLLECTION_PENDING,
    START_DATA_COLLECTION_IN_PROGRESS,
    COLLECTING_DATA,
    STOP_DATA_COLLECTION_PENDING,
    DATA_COLLECTED,
    START_EVALUATING_RULES_PENDING,
    EVALUATING_RULES,
    FAILED,
    ERROR_,
    COMPLETED,
    COMPLETED_WITH_ERRORS,
    CANCELED
  };

namespace AssessmentRunStateMapper
{
AWS_INSPECTOR_API AssessmentRunState GetAssessmentRunStateForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAssessmentRunState(AssessmentRunState value);
} // namespace AssessmentRunStateMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
