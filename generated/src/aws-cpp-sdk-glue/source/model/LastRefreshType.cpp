/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/LastRefreshType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace LastRefreshTypeMapper {

static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");

LastRefreshType GetLastRefreshTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_HASH) {
    return LastRefreshType::FULL;
  } else if (hashCode == INCREMENTAL_HASH) {
    return LastRefreshType::INCREMENTAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LastRefreshType>(hashCode);
  }

  return LastRefreshType::NOT_SET;
}

Aws::String GetNameForLastRefreshType(LastRefreshType enumValue) {
  switch (enumValue) {
    case LastRefreshType::NOT_SET:
      return {};
    case LastRefreshType::FULL:
      return "FULL";
    case LastRefreshType::INCREMENTAL:
      return "INCREMENTAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LastRefreshTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
