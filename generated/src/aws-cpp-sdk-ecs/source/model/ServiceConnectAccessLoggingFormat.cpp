/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ServiceConnectAccessLoggingFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ServiceConnectAccessLoggingFormatMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int JSON_HASH = HashingUtils::HashString("JSON");

ServiceConnectAccessLoggingFormat GetServiceConnectAccessLoggingFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return ServiceConnectAccessLoggingFormat::TEXT;
  } else if (hashCode == JSON_HASH) {
    return ServiceConnectAccessLoggingFormat::JSON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceConnectAccessLoggingFormat>(hashCode);
  }

  return ServiceConnectAccessLoggingFormat::NOT_SET;
}

Aws::String GetNameForServiceConnectAccessLoggingFormat(ServiceConnectAccessLoggingFormat enumValue) {
  switch (enumValue) {
    case ServiceConnectAccessLoggingFormat::NOT_SET:
      return {};
    case ServiceConnectAccessLoggingFormat::TEXT:
      return "TEXT";
    case ServiceConnectAccessLoggingFormat::JSON:
      return "JSON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceConnectAccessLoggingFormatMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
