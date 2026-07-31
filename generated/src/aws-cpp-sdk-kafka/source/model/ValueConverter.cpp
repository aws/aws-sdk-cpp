/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/ValueConverter.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace ValueConverterMapper {

static const int BYTE_ARRAY_HASH = HashingUtils::HashString("BYTE_ARRAY");
static const int JSON_HASH = HashingUtils::HashString("JSON");
static const int JSON_SCHEMA_GSR_HASH = HashingUtils::HashString("JSON_SCHEMA_GSR");
static const int STRING_HASH = HashingUtils::HashString("STRING");

ValueConverter GetValueConverterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BYTE_ARRAY_HASH) {
    return ValueConverter::BYTE_ARRAY;
  } else if (hashCode == JSON_HASH) {
    return ValueConverter::JSON;
  } else if (hashCode == JSON_SCHEMA_GSR_HASH) {
    return ValueConverter::JSON_SCHEMA_GSR;
  } else if (hashCode == STRING_HASH) {
    return ValueConverter::STRING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValueConverter>(hashCode);
  }

  return ValueConverter::NOT_SET;
}

Aws::String GetNameForValueConverter(ValueConverter enumValue) {
  switch (enumValue) {
    case ValueConverter::NOT_SET:
      return {};
    case ValueConverter::BYTE_ARRAY:
      return "BYTE_ARRAY";
    case ValueConverter::JSON:
      return "JSON";
    case ValueConverter::JSON_SCHEMA_GSR:
      return "JSON_SCHEMA_GSR";
    case ValueConverter::STRING:
      return "STRING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValueConverterMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
