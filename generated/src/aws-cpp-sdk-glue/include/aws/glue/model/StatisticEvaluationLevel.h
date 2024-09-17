/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class StatisticEvaluationLevel
  {
    NOT_SET,
    Dataset,
    Column,
    Multicolumn
  };

namespace StatisticEvaluationLevelMapper
{
AWS_GLUE_API StatisticEvaluationLevel GetStatisticEvaluationLevelForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForStatisticEvaluationLevel(StatisticEvaluationLevel value);
} // namespace StatisticEvaluationLevelMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
