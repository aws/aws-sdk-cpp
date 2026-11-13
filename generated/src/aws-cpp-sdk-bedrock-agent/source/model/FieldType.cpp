/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FieldType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace FieldTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int STRING_LIST_HASH = HashingUtils::HashString("STRING_LIST");

FieldType GetFieldTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return FieldType::STRING;
  } else if (hashCode == STRING_LIST_HASH) {
    return FieldType::STRING_LIST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FieldType>(hashCode);
  }

  return FieldType::NOT_SET;
}

Aws::String GetNameForFieldType(FieldType enumValue) {
  switch (enumValue) {
    case FieldType::NOT_SET:
      return {};
    case FieldType::STRING:
      return "STRING";
    case FieldType::STRING_LIST:
      return "STRING_LIST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FieldTypeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
