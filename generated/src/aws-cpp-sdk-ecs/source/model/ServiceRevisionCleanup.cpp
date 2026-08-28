/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ServiceRevisionCleanup.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ServiceRevisionCleanupMapper {

static const int BLOCKING_HASH = HashingUtils::HashString("BLOCKING");
static const int DEFERRED_HASH = HashingUtils::HashString("DEFERRED");

ServiceRevisionCleanup GetServiceRevisionCleanupForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BLOCKING_HASH) {
    return ServiceRevisionCleanup::BLOCKING;
  } else if (hashCode == DEFERRED_HASH) {
    return ServiceRevisionCleanup::DEFERRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceRevisionCleanup>(hashCode);
  }

  return ServiceRevisionCleanup::NOT_SET;
}

Aws::String GetNameForServiceRevisionCleanup(ServiceRevisionCleanup enumValue) {
  switch (enumValue) {
    case ServiceRevisionCleanup::NOT_SET:
      return {};
    case ServiceRevisionCleanup::BLOCKING:
      return "BLOCKING";
    case ServiceRevisionCleanup::DEFERRED:
      return "DEFERRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceRevisionCleanupMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
