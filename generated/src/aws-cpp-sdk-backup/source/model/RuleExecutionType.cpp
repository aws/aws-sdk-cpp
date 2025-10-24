/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RuleExecutionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace RuleExecutionTypeMapper {

static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");
static const int SNAPSHOTS_HASH = HashingUtils::HashString("SNAPSHOTS");
static const int CONTINUOUS_AND_SNAPSHOTS_HASH = HashingUtils::HashString("CONTINUOUS_AND_SNAPSHOTS");

RuleExecutionType GetRuleExecutionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTINUOUS_HASH) {
    return RuleExecutionType::CONTINUOUS;
  } else if (hashCode == SNAPSHOTS_HASH) {
    return RuleExecutionType::SNAPSHOTS;
  } else if (hashCode == CONTINUOUS_AND_SNAPSHOTS_HASH) {
    return RuleExecutionType::CONTINUOUS_AND_SNAPSHOTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleExecutionType>(hashCode);
  }

  return RuleExecutionType::NOT_SET;
}

Aws::String GetNameForRuleExecutionType(RuleExecutionType enumValue) {
  switch (enumValue) {
    case RuleExecutionType::NOT_SET:
      return {};
    case RuleExecutionType::CONTINUOUS:
      return "CONTINUOUS";
    case RuleExecutionType::SNAPSHOTS:
      return "SNAPSHOTS";
    case RuleExecutionType::CONTINUOUS_AND_SNAPSHOTS:
      return "CONTINUOUS_AND_SNAPSHOTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleExecutionTypeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
