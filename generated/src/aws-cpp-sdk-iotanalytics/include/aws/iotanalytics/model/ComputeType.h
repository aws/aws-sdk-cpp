/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{
  enum class ComputeType
  {
    NOT_SET,
    ACU_1,
    ACU_2
  };

namespace ComputeTypeMapper
{
AWS_IOTANALYTICS_API ComputeType GetComputeTypeForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForComputeType(ComputeType value);
} // namespace ComputeTypeMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
