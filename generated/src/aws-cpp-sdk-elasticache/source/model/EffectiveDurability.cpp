/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/model/EffectiveDurability.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {
namespace EffectiveDurabilityMapper {

static const int async_HASH = HashingUtils::HashString("async");
static const int sync_HASH = HashingUtils::HashString("sync");
static const int disabled_HASH = HashingUtils::HashString("disabled");

EffectiveDurability GetEffectiveDurabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == async_HASH) {
    return EffectiveDurability::async;
  } else if (hashCode == sync_HASH) {
    return EffectiveDurability::sync;
  } else if (hashCode == disabled_HASH) {
    return EffectiveDurability::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EffectiveDurability>(hashCode);
  }

  return EffectiveDurability::NOT_SET;
}

Aws::String GetNameForEffectiveDurability(EffectiveDurability enumValue) {
  switch (enumValue) {
    case EffectiveDurability::NOT_SET:
      return {};
    case EffectiveDurability::async:
      return "async";
    case EffectiveDurability::sync:
      return "sync";
    case EffectiveDurability::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EffectiveDurabilityMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
