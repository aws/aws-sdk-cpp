/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalStrength.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalStrengthMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int WEAK_HASH = HashingUtils::HashString("WEAK");
static const int MODERATE_HASH = HashingUtils::HashString("MODERATE");
static const int STRONG_HASH = HashingUtils::HashString("STRONG");

SignalStrength GetSignalStrengthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return SignalStrength::NONE;
  } else if (hashCode == WEAK_HASH) {
    return SignalStrength::WEAK;
  } else if (hashCode == MODERATE_HASH) {
    return SignalStrength::MODERATE;
  } else if (hashCode == STRONG_HASH) {
    return SignalStrength::STRONG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalStrength>(hashCode);
  }

  return SignalStrength::NOT_SET;
}

Aws::String GetNameForSignalStrength(SignalStrength enumValue) {
  switch (enumValue) {
    case SignalStrength::NOT_SET:
      return {};
    case SignalStrength::NONE:
      return "NONE";
    case SignalStrength::WEAK:
      return "WEAK";
    case SignalStrength::MODERATE:
      return "MODERATE";
    case SignalStrength::STRONG:
      return "STRONG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalStrengthMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
