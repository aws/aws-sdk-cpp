/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Period.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PeriodMapper {

static const int second_HASH = HashingUtils::HashString("second");
static const int minute_HASH = HashingUtils::HashString("minute");

Period GetPeriodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == second_HASH) {
    return Period::second;
  } else if (hashCode == minute_HASH) {
    return Period::minute;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Period>(hashCode);
  }

  return Period::NOT_SET;
}

Aws::String GetNameForPeriod(Period enumValue) {
  switch (enumValue) {
    case Period::NOT_SET:
      return {};
    case Period::second:
      return "second";
    case Period::minute:
      return "minute";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PeriodMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
