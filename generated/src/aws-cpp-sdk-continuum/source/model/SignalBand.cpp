/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalBand.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalBandMapper {

static const int VERY_LOW_HASH = HashingUtils::HashString("VERY_LOW");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MODERATE_HASH = HashingUtils::HashString("MODERATE");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");

SignalBand GetSignalBandForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VERY_LOW_HASH) {
    return SignalBand::VERY_LOW;
  } else if (hashCode == LOW_HASH) {
    return SignalBand::LOW;
  } else if (hashCode == MODERATE_HASH) {
    return SignalBand::MODERATE;
  } else if (hashCode == HIGH_HASH) {
    return SignalBand::HIGH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalBand>(hashCode);
  }

  return SignalBand::NOT_SET;
}

Aws::String GetNameForSignalBand(SignalBand enumValue) {
  switch (enumValue) {
    case SignalBand::NOT_SET:
      return {};
    case SignalBand::VERY_LOW:
      return "VERY_LOW";
    case SignalBand::LOW:
      return "LOW";
    case SignalBand::MODERATE:
      return "MODERATE";
    case SignalBand::HIGH:
      return "HIGH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalBandMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
