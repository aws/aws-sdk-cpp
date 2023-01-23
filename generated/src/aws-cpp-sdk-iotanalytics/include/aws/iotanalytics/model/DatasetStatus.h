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
  enum class DatasetStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING
  };

namespace DatasetStatusMapper
{
AWS_IOTANALYTICS_API DatasetStatus GetDatasetStatusForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForDatasetStatus(DatasetStatus value);
} // namespace DatasetStatusMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
