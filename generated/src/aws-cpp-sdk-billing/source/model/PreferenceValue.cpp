/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/PreferenceValue.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace PreferenceValueMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

PreferenceValue GetPreferenceValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return PreferenceValue::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return PreferenceValue::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreferenceValue>(hashCode);
  }

  return PreferenceValue::NOT_SET;
}

Aws::String GetNameForPreferenceValue(PreferenceValue enumValue) {
  switch (enumValue) {
    case PreferenceValue::NOT_SET:
      return {};
    case PreferenceValue::ENABLED:
      return "ENABLED";
    case PreferenceValue::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreferenceValueMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
