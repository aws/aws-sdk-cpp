/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class EvaluationFormScoringStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EvaluationFormScoringStatusMapper
{
AWS_CONNECT_API EvaluationFormScoringStatus GetEvaluationFormScoringStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormScoringStatus(EvaluationFormScoringStatus value);
} // namespace EvaluationFormScoringStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
