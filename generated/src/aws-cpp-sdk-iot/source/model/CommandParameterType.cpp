/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/CommandParameterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace CommandParameterTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
static const int LONG_HASH = HashingUtils::HashString("LONG");
static const int UNSIGNEDLONG_HASH = HashingUtils::HashString("UNSIGNEDLONG");
static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
static const int BINARY_HASH = HashingUtils::HashString("BINARY");

CommandParameterType GetCommandParameterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return CommandParameterType::STRING;
  } else if (hashCode == INTEGER_HASH) {
    return CommandParameterType::INTEGER;
  } else if (hashCode == DOUBLE_HASH) {
    return CommandParameterType::DOUBLE;
  } else if (hashCode == LONG_HASH) {
    return CommandParameterType::LONG;
  } else if (hashCode == UNSIGNEDLONG_HASH) {
    return CommandParameterType::UNSIGNEDLONG;
  } else if (hashCode == BOOLEAN_HASH) {
    return CommandParameterType::BOOLEAN;
  } else if (hashCode == BINARY_HASH) {
    return CommandParameterType::BINARY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CommandParameterType>(hashCode);
  }

  return CommandParameterType::NOT_SET;
}

Aws::String GetNameForCommandParameterType(CommandParameterType enumValue) {
  switch (enumValue) {
    case CommandParameterType::NOT_SET:
      return {};
    case CommandParameterType::STRING:
      return "STRING";
    case CommandParameterType::INTEGER:
      return "INTEGER";
    case CommandParameterType::DOUBLE:
      return "DOUBLE";
    case CommandParameterType::LONG:
      return "LONG";
    case CommandParameterType::UNSIGNEDLONG:
      return "UNSIGNEDLONG";
    case CommandParameterType::BOOLEAN:
      return "BOOLEAN";
    case CommandParameterType::BINARY:
      return "BINARY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CommandParameterTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
