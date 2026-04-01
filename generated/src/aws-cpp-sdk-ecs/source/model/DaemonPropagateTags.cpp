/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonPropagateTags.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonPropagateTagsMapper {

static const int DAEMON_HASH = HashingUtils::HashString("DAEMON");
static const int NONE_HASH = HashingUtils::HashString("NONE");

DaemonPropagateTags GetDaemonPropagateTagsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DAEMON_HASH) {
    return DaemonPropagateTags::DAEMON;
  } else if (hashCode == NONE_HASH) {
    return DaemonPropagateTags::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonPropagateTags>(hashCode);
  }

  return DaemonPropagateTags::NOT_SET;
}

Aws::String GetNameForDaemonPropagateTags(DaemonPropagateTags enumValue) {
  switch (enumValue) {
    case DaemonPropagateTags::NOT_SET:
      return {};
    case DaemonPropagateTags::DAEMON:
      return "DAEMON";
    case DaemonPropagateTags::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonPropagateTagsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
