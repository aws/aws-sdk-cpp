/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{
  enum class RecordFormatType
  {
    NOT_SET,
    JSON,
    CSV
  };

namespace RecordFormatTypeMapper
{
AWS_KINESISANALYTICS_API RecordFormatType GetRecordFormatTypeForName(const Aws::String& name);

AWS_KINESISANALYTICS_API Aws::String GetNameForRecordFormatType(RecordFormatType value);
} // namespace RecordFormatTypeMapper
} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
