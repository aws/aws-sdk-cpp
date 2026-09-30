/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/model/ConnectionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {
namespace ConnectionTypeMapper {

static const int vpc_HASH = HashingUtils::HashString("vpc");
static const int public__HASH = HashingUtils::HashString("public");

ConnectionType GetConnectionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == vpc_HASH) {
    return ConnectionType::vpc;
  } else if (hashCode == public__HASH) {
    return ConnectionType::public_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionType>(hashCode);
  }

  return ConnectionType::NOT_SET;
}

Aws::String GetNameForConnectionType(ConnectionType enumValue) {
  switch (enumValue) {
    case ConnectionType::NOT_SET:
      return {};
    case ConnectionType::vpc:
      return "vpc";
    case ConnectionType::public_:
      return "public";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionTypeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
