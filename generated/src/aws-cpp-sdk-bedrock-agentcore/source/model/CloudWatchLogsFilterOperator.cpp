/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchLogsFilterOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace CloudWatchLogsFilterOperatorMapper {

static const int Equals_HASH = HashingUtils::HashString("Equals");
static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
static const int LessThan_HASH = HashingUtils::HashString("LessThan");
static const int GreaterThanOrEqual_HASH = HashingUtils::HashString("GreaterThanOrEqual");
static const int LessThanOrEqual_HASH = HashingUtils::HashString("LessThanOrEqual");
static const int Contains_HASH = HashingUtils::HashString("Contains");
static const int NotContains_HASH = HashingUtils::HashString("NotContains");

CloudWatchLogsFilterOperator GetCloudWatchLogsFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Equals_HASH) {
    return CloudWatchLogsFilterOperator::Equals;
  } else if (hashCode == NotEquals_HASH) {
    return CloudWatchLogsFilterOperator::NotEquals;
  } else if (hashCode == GreaterThan_HASH) {
    return CloudWatchLogsFilterOperator::GreaterThan;
  } else if (hashCode == LessThan_HASH) {
    return CloudWatchLogsFilterOperator::LessThan;
  } else if (hashCode == GreaterThanOrEqual_HASH) {
    return CloudWatchLogsFilterOperator::GreaterThanOrEqual;
  } else if (hashCode == LessThanOrEqual_HASH) {
    return CloudWatchLogsFilterOperator::LessThanOrEqual;
  } else if (hashCode == Contains_HASH) {
    return CloudWatchLogsFilterOperator::Contains;
  } else if (hashCode == NotContains_HASH) {
    return CloudWatchLogsFilterOperator::NotContains;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloudWatchLogsFilterOperator>(hashCode);
  }

  return CloudWatchLogsFilterOperator::NOT_SET;
}

Aws::String GetNameForCloudWatchLogsFilterOperator(CloudWatchLogsFilterOperator enumValue) {
  switch (enumValue) {
    case CloudWatchLogsFilterOperator::NOT_SET:
      return {};
    case CloudWatchLogsFilterOperator::Equals:
      return "Equals";
    case CloudWatchLogsFilterOperator::NotEquals:
      return "NotEquals";
    case CloudWatchLogsFilterOperator::GreaterThan:
      return "GreaterThan";
    case CloudWatchLogsFilterOperator::LessThan:
      return "LessThan";
    case CloudWatchLogsFilterOperator::GreaterThanOrEqual:
      return "GreaterThanOrEqual";
    case CloudWatchLogsFilterOperator::LessThanOrEqual:
      return "LessThanOrEqual";
    case CloudWatchLogsFilterOperator::Contains:
      return "Contains";
    case CloudWatchLogsFilterOperator::NotContains:
      return "NotContains";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloudWatchLogsFilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
