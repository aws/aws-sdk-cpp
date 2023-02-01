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
  enum class DetailsAttributes
  {
    NOT_SET,
    PredictiveModelType,
    Algorithm
  };

namespace DetailsAttributesMapper
{
AWS_MACHINELEARNING_API DetailsAttributes GetDetailsAttributesForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForDetailsAttributes(DetailsAttributes value);
} // namespace DetailsAttributesMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
