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
  enum class BatchPredictionFilterVariable
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

namespace BatchPredictionFilterVariableMapper
{
AWS_MACHINELEARNING_API BatchPredictionFilterVariable GetBatchPredictionFilterVariableForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForBatchPredictionFilterVariable(BatchPredictionFilterVariable value);
} // namespace BatchPredictionFilterVariableMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
