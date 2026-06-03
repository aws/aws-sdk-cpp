/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/model/Durability.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {
namespace DurabilityMapper {

static const int default__HASH = HashingUtils::HashString("default");
static const int async_HASH = HashingUtils::HashString("async");
static const int sync_HASH = HashingUtils::HashString("sync");
static const int disabled_HASH = HashingUtils::HashString("disabled");

Durability GetDurabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == default__HASH) {
    return Durability::default_;
  } else if (hashCode == async_HASH) {
    return Durability::async;
  } else if (hashCode == sync_HASH) {
    return Durability::sync;
  } else if (hashCode == disabled_HASH) {
    return Durability::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Durability>(hashCode);
  }

  return Durability::NOT_SET;
}

Aws::String GetNameForDurability(Durability enumValue) {
  switch (enumValue) {
    case Durability::NOT_SET:
      return {};
    case Durability::default_:
      return "default";
    case Durability::async:
      return "async";
    case Durability::sync:
      return "sync";
    case Durability::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DurabilityMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
