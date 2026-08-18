/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataFilterOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace AgenticRetrieveMemoryMetadataFilterOperatorMapper {

static const int EQUALS_TO_HASH = HashingUtils::HashString("EQUALS_TO");
static const int EXISTS_HASH = HashingUtils::HashString("EXISTS");
static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");
static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
static const int AFTER_HASH = HashingUtils::HashString("AFTER");
static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");

AgenticRetrieveMemoryMetadataFilterOperator GetAgenticRetrieveMemoryMetadataFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_TO_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::EQUALS_TO;
  } else if (hashCode == EXISTS_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::EXISTS;
  } else if (hashCode == NOT_EXISTS_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::NOT_EXISTS;
  } else if (hashCode == BEFORE_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::BEFORE;
  } else if (hashCode == AFTER_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::AFTER;
  } else if (hashCode == CONTAINS_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::CONTAINS;
  } else if (hashCode == GREATER_THAN_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::GREATER_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUALS_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::GREATER_THAN_OR_EQUALS;
  } else if (hashCode == LESS_THAN_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::LESS_THAN;
  } else if (hashCode == LESS_THAN_OR_EQUALS_HASH) {
    return AgenticRetrieveMemoryMetadataFilterOperator::LESS_THAN_OR_EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgenticRetrieveMemoryMetadataFilterOperator>(hashCode);
  }

  return AgenticRetrieveMemoryMetadataFilterOperator::NOT_SET;
}

Aws::String GetNameForAgenticRetrieveMemoryMetadataFilterOperator(AgenticRetrieveMemoryMetadataFilterOperator enumValue) {
  switch (enumValue) {
    case AgenticRetrieveMemoryMetadataFilterOperator::NOT_SET:
      return {};
    case AgenticRetrieveMemoryMetadataFilterOperator::EQUALS_TO:
      return "EQUALS_TO";
    case AgenticRetrieveMemoryMetadataFilterOperator::EXISTS:
      return "EXISTS";
    case AgenticRetrieveMemoryMetadataFilterOperator::NOT_EXISTS:
      return "NOT_EXISTS";
    case AgenticRetrieveMemoryMetadataFilterOperator::BEFORE:
      return "BEFORE";
    case AgenticRetrieveMemoryMetadataFilterOperator::AFTER:
      return "AFTER";
    case AgenticRetrieveMemoryMetadataFilterOperator::CONTAINS:
      return "CONTAINS";
    case AgenticRetrieveMemoryMetadataFilterOperator::GREATER_THAN:
      return "GREATER_THAN";
    case AgenticRetrieveMemoryMetadataFilterOperator::GREATER_THAN_OR_EQUALS:
      return "GREATER_THAN_OR_EQUALS";
    case AgenticRetrieveMemoryMetadataFilterOperator::LESS_THAN:
      return "LESS_THAN";
    case AgenticRetrieveMemoryMetadataFilterOperator::LESS_THAN_OR_EQUALS:
      return "LESS_THAN_OR_EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgenticRetrieveMemoryMetadataFilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
