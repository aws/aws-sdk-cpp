/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapshotType.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapshotTypeMapper {

static const int ONTAP_HASH = HashingUtils::HashString("ONTAP");
static const int OPENZFS_HASH = HashingUtils::HashString("OPENZFS");

SnapshotType GetSnapshotTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ONTAP_HASH) {
    return SnapshotType::ONTAP;
  } else if (hashCode == OPENZFS_HASH) {
    return SnapshotType::OPENZFS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotType>(hashCode);
  }

  return SnapshotType::NOT_SET;
}

Aws::String GetNameForSnapshotType(SnapshotType enumValue) {
  switch (enumValue) {
    case SnapshotType::NOT_SET:
      return {};
    case SnapshotType::ONTAP:
      return "ONTAP";
    case SnapshotType::OPENZFS:
      return "OPENZFS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
