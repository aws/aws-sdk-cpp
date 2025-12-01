/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableAttributeValueType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace DataTableAttributeValueTypeMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
static const int TEXT_LIST_HASH = HashingUtils::HashString("TEXT_LIST");
static const int NUMBER_LIST_HASH = HashingUtils::HashString("NUMBER_LIST");

DataTableAttributeValueType GetDataTableAttributeValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return DataTableAttributeValueType::TEXT;
  } else if (hashCode == NUMBER_HASH) {
    return DataTableAttributeValueType::NUMBER;
  } else if (hashCode == BOOLEAN_HASH) {
    return DataTableAttributeValueType::BOOLEAN;
  } else if (hashCode == TEXT_LIST_HASH) {
    return DataTableAttributeValueType::TEXT_LIST;
  } else if (hashCode == NUMBER_LIST_HASH) {
    return DataTableAttributeValueType::NUMBER_LIST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataTableAttributeValueType>(hashCode);
  }

  return DataTableAttributeValueType::NOT_SET;
}

Aws::String GetNameForDataTableAttributeValueType(DataTableAttributeValueType enumValue) {
  switch (enumValue) {
    case DataTableAttributeValueType::NOT_SET:
      return {};
    case DataTableAttributeValueType::TEXT:
      return "TEXT";
    case DataTableAttributeValueType::NUMBER:
      return "NUMBER";
    case DataTableAttributeValueType::BOOLEAN:
      return "BOOLEAN";
    case DataTableAttributeValueType::TEXT_LIST:
      return "TEXT_LIST";
    case DataTableAttributeValueType::NUMBER_LIST:
      return "NUMBER_LIST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataTableAttributeValueTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
