/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
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
AWS_KINESISANALYTICSV2_API RecordFormatType GetRecordFormatTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForRecordFormatType(RecordFormatType value);
} // namespace RecordFormatTypeMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
