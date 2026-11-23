/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/ClusterPeerFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace ClusterPeerFilterNameMapper {

static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");

ClusterPeerFilterName GetClusterPeerFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == file_system_id_HASH) {
    return ClusterPeerFilterName::file_system_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterPeerFilterName>(hashCode);
  }

  return ClusterPeerFilterName::NOT_SET;
}

Aws::String GetNameForClusterPeerFilterName(ClusterPeerFilterName enumValue) {
  switch (enumValue) {
    case ClusterPeerFilterName::NOT_SET:
      return {};
    case ClusterPeerFilterName::file_system_id:
      return "file-system-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterPeerFilterNameMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
