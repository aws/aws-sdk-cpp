/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalTargetValue.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalTargetValueMapper {

static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

SignalTargetValue GetSignalTargetValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_HASH) {
    return SignalTargetValue::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return SignalTargetValue::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return SignalTargetValue::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalTargetValue>(hashCode);
  }

  return SignalTargetValue::NOT_SET;
}

Aws::String GetNameForSignalTargetValue(SignalTargetValue enumValue) {
  switch (enumValue) {
    case SignalTargetValue::NOT_SET:
      return {};
    case SignalTargetValue::HIGH:
      return "HIGH";
    case SignalTargetValue::MEDIUM:
      return "MEDIUM";
    case SignalTargetValue::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalTargetValueMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
