/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Model {
enum class RecordFormatType { NOT_SET, GSR_JSON, JSON, STRING, BYTE_ARRAY };

namespace RecordFormatTypeMapper {
AWS_KINESIS_API RecordFormatType GetRecordFormatTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForRecordFormatType(RecordFormatType value);
}  // namespace RecordFormatTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
