/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class MonitoringType
  {
    NOT_SET,
    DataQuality,
    ModelQuality,
    ModelBias,
    ModelExplainability
  };

namespace MonitoringTypeMapper
{
AWS_SAGEMAKER_API MonitoringType GetMonitoringTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringType(MonitoringType value);
} // namespace MonitoringTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
