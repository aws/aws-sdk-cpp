/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/Priority.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace PriorityMapper {

static const int High_HASH = HashingUtils::HashString("High");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int Low_HASH = HashingUtils::HashString("Low");

Priority GetPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == High_HASH) {
    return Priority::High;
  } else if (hashCode == Medium_HASH) {
    return Priority::Medium;
  } else if (hashCode == Low_HASH) {
    return Priority::Low;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Priority>(hashCode);
  }

  return Priority::NOT_SET;
}

Aws::String GetNameForPriority(Priority enumValue) {
  switch (enumValue) {
    case Priority::NOT_SET:
      return {};
    case Priority::High:
      return "High";
    case Priority::Medium:
      return "Medium";
    case Priority::Low:
      return "Low";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PriorityMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
