/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/AssetOwnershipTransferStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace AssetOwnershipTransferStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AssetOwnershipTransferStatus GetAssetOwnershipTransferStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return AssetOwnershipTransferStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return AssetOwnershipTransferStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return AssetOwnershipTransferStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssetOwnershipTransferStatus>(hashCode);
  }

  return AssetOwnershipTransferStatus::NOT_SET;
}

Aws::String GetNameForAssetOwnershipTransferStatus(AssetOwnershipTransferStatus enumValue) {
  switch (enumValue) {
    case AssetOwnershipTransferStatus::NOT_SET:
      return {};
    case AssetOwnershipTransferStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case AssetOwnershipTransferStatus::SUCCEEDED:
      return "SUCCEEDED";
    case AssetOwnershipTransferStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssetOwnershipTransferStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
