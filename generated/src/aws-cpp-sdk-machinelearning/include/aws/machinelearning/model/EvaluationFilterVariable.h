/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
  enum class EvaluationFilterVariable
  {
    NOT_SET,
    CreatedAt,
    LastUpdatedAt,
    Status,
    Name,
    IAMUser,
    MLModelId,
    DataSourceId,
    DataURI
  };

namespace EvaluationFilterVariableMapper
{
AWS_MACHINELEARNING_API EvaluationFilterVariable GetEvaluationFilterVariableForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForEvaluationFilterVariable(EvaluationFilterVariable value);
} // namespace EvaluationFilterVariableMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
