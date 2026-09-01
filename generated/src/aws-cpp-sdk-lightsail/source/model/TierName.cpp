/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/TierName.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace TierNameMapper {

static const int Essential_HASH = HashingUtils::HashString("Essential");
static const int Growth_HASH = HashingUtils::HashString("Growth");
static const int Accelerate_HASH = HashingUtils::HashString("Accelerate");
static const int Premier_HASH = HashingUtils::HashString("Premier");

TierName GetTierNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Essential_HASH) {
    return TierName::Essential;
  } else if (hashCode == Growth_HASH) {
    return TierName::Growth;
  } else if (hashCode == Accelerate_HASH) {
    return TierName::Accelerate;
  } else if (hashCode == Premier_HASH) {
    return TierName::Premier;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TierName>(hashCode);
  }

  return TierName::NOT_SET;
}

Aws::String GetNameForTierName(TierName enumValue) {
  switch (enumValue) {
    case TierName::NOT_SET:
      return {};
    case TierName::Essential:
      return "Essential";
    case TierName::Growth:
      return "Growth";
    case TierName::Accelerate:
      return "Accelerate";
    case TierName::Premier:
      return "Premier";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TierNameMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
