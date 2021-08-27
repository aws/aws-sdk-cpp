/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class ModelSource
  {
    NOT_SET,
    SAGEMAKER
  };

namespace ModelSourceMapper
{
AWS_FRAUDDETECTOR_API ModelSource GetModelSourceForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForModelSource(ModelSource value);
} // namespace ModelSourceMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
