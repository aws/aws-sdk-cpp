/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/InstanceHealthCheckType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace InstanceHealthCheckTypeMapper {

static const int CONTAINER_RUNTIME_HASH = HashingUtils::HashString("CONTAINER_RUNTIME");
static const int ACCELERATED_COMPUTE_HASH = HashingUtils::HashString("ACCELERATED_COMPUTE");
static const int DAEMON_HASH = HashingUtils::HashString("DAEMON");

InstanceHealthCheckType GetInstanceHealthCheckTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTAINER_RUNTIME_HASH) {
    return InstanceHealthCheckType::CONTAINER_RUNTIME;
  } else if (hashCode == ACCELERATED_COMPUTE_HASH) {
    return InstanceHealthCheckType::ACCELERATED_COMPUTE;
  } else if (hashCode == DAEMON_HASH) {
    return InstanceHealthCheckType::DAEMON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceHealthCheckType>(hashCode);
  }

  return InstanceHealthCheckType::NOT_SET;
}

Aws::String GetNameForInstanceHealthCheckType(InstanceHealthCheckType enumValue) {
  switch (enumValue) {
    case InstanceHealthCheckType::NOT_SET:
      return {};
    case InstanceHealthCheckType::CONTAINER_RUNTIME:
      return "CONTAINER_RUNTIME";
    case InstanceHealthCheckType::ACCELERATED_COMPUTE:
      return "ACCELERATED_COMPUTE";
    case InstanceHealthCheckType::DAEMON:
      return "DAEMON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceHealthCheckTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
