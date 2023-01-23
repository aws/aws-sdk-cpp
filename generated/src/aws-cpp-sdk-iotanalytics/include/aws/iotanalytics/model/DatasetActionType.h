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
  enum class DatasetActionType
  {
    NOT_SET,
    QUERY,
    CONTAINER
  };

namespace DatasetActionTypeMapper
{
AWS_IOTANALYTICS_API DatasetActionType GetDatasetActionTypeForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForDatasetActionType(DatasetActionType value);
} // namespace DatasetActionTypeMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
