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
  enum class TaggableResourceType
  {
    NOT_SET,
    BatchPrediction,
    DataSource,
    Evaluation,
    MLModel
  };

namespace TaggableResourceTypeMapper
{
AWS_MACHINELEARNING_API TaggableResourceType GetTaggableResourceTypeForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForTaggableResourceType(TaggableResourceType value);
} // namespace TaggableResourceTypeMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
