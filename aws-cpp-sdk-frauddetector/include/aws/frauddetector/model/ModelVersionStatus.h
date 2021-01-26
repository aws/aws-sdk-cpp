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
  enum class ModelVersionStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace ModelVersionStatusMapper
{
AWS_FRAUDDETECTOR_API ModelVersionStatus GetModelVersionStatusForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForModelVersionStatus(ModelVersionStatus value);
} // namespace ModelVersionStatusMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
