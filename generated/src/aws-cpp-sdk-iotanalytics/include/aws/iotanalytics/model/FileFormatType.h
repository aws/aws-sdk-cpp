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
  enum class FileFormatType
  {
    NOT_SET,
    JSON,
    PARQUET
  };

namespace FileFormatTypeMapper
{
AWS_IOTANALYTICS_API FileFormatType GetFileFormatTypeForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForFileFormatType(FileFormatType value);
} // namespace FileFormatTypeMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
