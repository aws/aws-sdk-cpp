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
  enum class MLModelFilterVariable
  {
    NOT_SET,
    CreatedAt,
    LastUpdatedAt,
    Status,
    Name,
    IAMUser,
    TrainingDataSourceId,
    RealtimeEndpointStatus,
    MLModelType,
    Algorithm,
    TrainingDataURI
  };

namespace MLModelFilterVariableMapper
{
AWS_MACHINELEARNING_API MLModelFilterVariable GetMLModelFilterVariableForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForMLModelFilterVariable(MLModelFilterVariable value);
} // namespace MLModelFilterVariableMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
