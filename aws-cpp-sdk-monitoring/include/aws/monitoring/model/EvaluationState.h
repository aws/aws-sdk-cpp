/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class EvaluationState
  {
    NOT_SET,
    PARTIAL_DATA
  };

namespace EvaluationStateMapper
{
AWS_CLOUDWATCH_API EvaluationState GetEvaluationStateForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForEvaluationState(EvaluationState value);
} // namespace EvaluationStateMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
