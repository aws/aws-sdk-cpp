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
  enum class DatasetContentState
  {
    NOT_SET,
    CREATING,
    SUCCEEDED,
    FAILED
  };

namespace DatasetContentStateMapper
{
AWS_IOTANALYTICS_API DatasetContentState GetDatasetContentStateForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForDatasetContentState(DatasetContentState value);
} // namespace DatasetContentStateMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
