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
  enum class MLModelType
  {
    NOT_SET,
    REGRESSION,
    BINARY,
    MULTICLASS
  };

namespace MLModelTypeMapper
{
AWS_MACHINELEARNING_API MLModelType GetMLModelTypeForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForMLModelType(MLModelType value);
} // namespace MLModelTypeMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
