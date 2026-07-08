/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/StorageTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace StorageTierMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");

StorageTier GetStorageTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return StorageTier::STANDARD;
  } else if (hashCode == INTELLIGENT_TIERING_HASH) {
    return StorageTier::INTELLIGENT_TIERING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageTier>(hashCode);
  }

  return StorageTier::NOT_SET;
}

Aws::String GetNameForStorageTier(StorageTier enumValue) {
  switch (enumValue) {
    case StorageTier::NOT_SET:
      return {};
    case StorageTier::STANDARD:
      return "STANDARD";
    case StorageTier::INTELLIGENT_TIERING:
      return "INTELLIGENT_TIERING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageTierMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
