/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam-toolbox/model/CheckEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {
namespace CheckEffectMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int NO_IMPACT_HASH = HashingUtils::HashString("NO_IMPACT");
static const int IMPLICIT_DENY_HASH = HashingUtils::HashString("IMPLICIT_DENY");
static const int EXPLICIT_DENY_HASH = HashingUtils::HashString("EXPLICIT_DENY");

CheckEffect GetCheckEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return CheckEffect::ALLOW;
  } else if (hashCode == NO_IMPACT_HASH) {
    return CheckEffect::NO_IMPACT;
  } else if (hashCode == IMPLICIT_DENY_HASH) {
    return CheckEffect::IMPLICIT_DENY;
  } else if (hashCode == EXPLICIT_DENY_HASH) {
    return CheckEffect::EXPLICIT_DENY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CheckEffect>(hashCode);
  }

  return CheckEffect::NOT_SET;
}

Aws::String GetNameForCheckEffect(CheckEffect enumValue) {
  switch (enumValue) {
    case CheckEffect::NOT_SET:
      return {};
    case CheckEffect::ALLOW:
      return "ALLOW";
    case CheckEffect::NO_IMPACT:
      return "NO_IMPACT";
    case CheckEffect::IMPLICIT_DENY:
      return "IMPLICIT_DENY";
    case CheckEffect::EXPLICIT_DENY:
      return "EXPLICIT_DENY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CheckEffectMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
