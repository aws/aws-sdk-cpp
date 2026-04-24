/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/LifecycleDeleteAfterEvent.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace LifecycleDeleteAfterEventMapper {

static const int DELETE_AFTER_COPY_HASH = HashingUtils::HashString("DELETE_AFTER_COPY");

LifecycleDeleteAfterEvent GetLifecycleDeleteAfterEventForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DELETE_AFTER_COPY_HASH) {
    return LifecycleDeleteAfterEvent::DELETE_AFTER_COPY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LifecycleDeleteAfterEvent>(hashCode);
  }

  return LifecycleDeleteAfterEvent::NOT_SET;
}

Aws::String GetNameForLifecycleDeleteAfterEvent(LifecycleDeleteAfterEvent enumValue) {
  switch (enumValue) {
    case LifecycleDeleteAfterEvent::NOT_SET:
      return {};
    case LifecycleDeleteAfterEvent::DELETE_AFTER_COPY:
      return "DELETE_AFTER_COPY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LifecycleDeleteAfterEventMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
