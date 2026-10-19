/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ServiceConnectContainerLogLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ServiceConnectContainerLogLevelMapper {

static const int debug_HASH = HashingUtils::HashString("debug");
static const int info_HASH = HashingUtils::HashString("info");

ServiceConnectContainerLogLevel GetServiceConnectContainerLogLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == debug_HASH) {
    return ServiceConnectContainerLogLevel::debug;
  } else if (hashCode == info_HASH) {
    return ServiceConnectContainerLogLevel::info;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceConnectContainerLogLevel>(hashCode);
  }

  return ServiceConnectContainerLogLevel::NOT_SET;
}

Aws::String GetNameForServiceConnectContainerLogLevel(ServiceConnectContainerLogLevel enumValue) {
  switch (enumValue) {
    case ServiceConnectContainerLogLevel::NOT_SET:
      return {};
    case ServiceConnectContainerLogLevel::debug:
      return "debug";
    case ServiceConnectContainerLogLevel::info:
      return "info";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceConnectContainerLogLevelMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
