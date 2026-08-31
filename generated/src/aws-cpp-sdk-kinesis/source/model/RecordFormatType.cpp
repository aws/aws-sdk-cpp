/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/RecordFormatType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace RecordFormatTypeMapper {

static const int GSR_JSON_HASH = HashingUtils::HashString("GSR_JSON");
static const int JSON_HASH = HashingUtils::HashString("JSON");
static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int BYTE_ARRAY_HASH = HashingUtils::HashString("BYTE_ARRAY");

RecordFormatType GetRecordFormatTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GSR_JSON_HASH) {
    return RecordFormatType::GSR_JSON;
  } else if (hashCode == JSON_HASH) {
    return RecordFormatType::JSON;
  } else if (hashCode == STRING_HASH) {
    return RecordFormatType::STRING;
  } else if (hashCode == BYTE_ARRAY_HASH) {
    return RecordFormatType::BYTE_ARRAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecordFormatType>(hashCode);
  }

  return RecordFormatType::NOT_SET;
}

Aws::String GetNameForRecordFormatType(RecordFormatType enumValue) {
  switch (enumValue) {
    case RecordFormatType::NOT_SET:
      return {};
    case RecordFormatType::GSR_JSON:
      return "GSR_JSON";
    case RecordFormatType::JSON:
      return "JSON";
    case RecordFormatType::STRING:
      return "STRING";
    case RecordFormatType::BYTE_ARRAY:
      return "BYTE_ARRAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecordFormatTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
