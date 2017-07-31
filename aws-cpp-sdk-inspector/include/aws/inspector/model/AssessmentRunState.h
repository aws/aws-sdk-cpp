/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
