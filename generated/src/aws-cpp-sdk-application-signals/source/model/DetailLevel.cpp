/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/DetailLevel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace DetailLevelMapper {

static const int BRIEF_HASH = HashingUtils::HashString("BRIEF");
static const int DETAILED_HASH = HashingUtils::HashString("DETAILED");

DetailLevel GetDetailLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BRIEF_HASH) {
    return DetailLevel::BRIEF;
  } else if (hashCode == DETAILED_HASH) {
    return DetailLevel::DETAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetailLevel>(hashCode);
  }

  return DetailLevel::NOT_SET;
}

Aws::String GetNameForDetailLevel(DetailLevel enumValue) {
  switch (enumValue) {
    case DetailLevel::NOT_SET:
      return {};
    case DetailLevel::BRIEF:
      return "BRIEF";
    case DetailLevel::DETAILED:
      return "DETAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetailLevelMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
