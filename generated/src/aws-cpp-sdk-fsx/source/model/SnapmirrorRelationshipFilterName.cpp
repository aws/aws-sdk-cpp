/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapmirrorRelationshipFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapmirrorRelationshipFilterNameMapper {

static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
static const int destination_volume_id_HASH = HashingUtils::HashString("destination-volume-id");

SnapmirrorRelationshipFilterName GetSnapmirrorRelationshipFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == file_system_id_HASH) {
    return SnapmirrorRelationshipFilterName::file_system_id;
  } else if (hashCode == destination_volume_id_HASH) {
    return SnapmirrorRelationshipFilterName::destination_volume_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapmirrorRelationshipFilterName>(hashCode);
  }

  return SnapmirrorRelationshipFilterName::NOT_SET;
}

Aws::String GetNameForSnapmirrorRelationshipFilterName(SnapmirrorRelationshipFilterName enumValue) {
  switch (enumValue) {
    case SnapmirrorRelationshipFilterName::NOT_SET:
      return {};
    case SnapmirrorRelationshipFilterName::file_system_id:
      return "file-system-id";
    case SnapmirrorRelationshipFilterName::destination_volume_id:
      return "destination-volume-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapmirrorRelationshipFilterNameMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
