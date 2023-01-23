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
  enum class Algorithm
  {
    NOT_SET,
    sgd
  };

namespace AlgorithmMapper
{
AWS_MACHINELEARNING_API Algorithm GetAlgorithmForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForAlgorithm(Algorithm value);
} // namespace AlgorithmMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
