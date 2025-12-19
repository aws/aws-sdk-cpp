/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/CommandParameterValueComparisonOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace CommandParameterValueComparisonOperatorMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int LESS_THAN_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_EQUALS");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int GREATER_THAN_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_EQUALS");
static const int IN_SET_HASH = HashingUtils::HashString("IN_SET");
static const int NOT_IN_SET_HASH = HashingUtils::HashString("NOT_IN_SET");
static const int IN_RANGE_HASH = HashingUtils::HashString("IN_RANGE");
static const int NOT_IN_RANGE_HASH = HashingUtils::HashString("NOT_IN_RANGE");

CommandParameterValueComparisonOperator GetCommandParameterValueComparisonOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return CommandParameterValueComparisonOperator::EQUALS;
  } else if (hashCode == NOT_EQUALS_HASH) {
    return CommandParameterValueComparisonOperator::NOT_EQUALS;
  } else if (hashCode == LESS_THAN_HASH) {
    return CommandParameterValueComparisonOperator::LESS_THAN;
  } else if (hashCode == LESS_THAN_EQUALS_HASH) {
    return CommandParameterValueComparisonOperator::LESS_THAN_EQUALS;
  } else if (hashCode == GREATER_THAN_HASH) {
    return CommandParameterValueComparisonOperator::GREATER_THAN;
  } else if (hashCode == GREATER_THAN_EQUALS_HASH) {
    return CommandParameterValueComparisonOperator::GREATER_THAN_EQUALS;
  } else if (hashCode == IN_SET_HASH) {
    return CommandParameterValueComparisonOperator::IN_SET;
  } else if (hashCode == NOT_IN_SET_HASH) {
    return CommandParameterValueComparisonOperator::NOT_IN_SET;
  } else if (hashCode == IN_RANGE_HASH) {
    return CommandParameterValueComparisonOperator::IN_RANGE;
  } else if (hashCode == NOT_IN_RANGE_HASH) {
    return CommandParameterValueComparisonOperator::NOT_IN_RANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CommandParameterValueComparisonOperator>(hashCode);
  }

  return CommandParameterValueComparisonOperator::NOT_SET;
}

Aws::String GetNameForCommandParameterValueComparisonOperator(CommandParameterValueComparisonOperator enumValue) {
  switch (enumValue) {
    case CommandParameterValueComparisonOperator::NOT_SET:
      return {};
    case CommandParameterValueComparisonOperator::EQUALS:
      return "EQUALS";
    case CommandParameterValueComparisonOperator::NOT_EQUALS:
      return "NOT_EQUALS";
    case CommandParameterValueComparisonOperator::LESS_THAN:
      return "LESS_THAN";
    case CommandParameterValueComparisonOperator::LESS_THAN_EQUALS:
      return "LESS_THAN_EQUALS";
    case CommandParameterValueComparisonOperator::GREATER_THAN:
      return "GREATER_THAN";
    case CommandParameterValueComparisonOperator::GREATER_THAN_EQUALS:
      return "GREATER_THAN_EQUALS";
    case CommandParameterValueComparisonOperator::IN_SET:
      return "IN_SET";
    case CommandParameterValueComparisonOperator::NOT_IN_SET:
      return "NOT_IN_SET";
    case CommandParameterValueComparisonOperator::IN_RANGE:
      return "IN_RANGE";
    case CommandParameterValueComparisonOperator::NOT_IN_RANGE:
      return "NOT_IN_RANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CommandParameterValueComparisonOperatorMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
