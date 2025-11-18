/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/AssistedNluMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace AssistedNluModeMapper {

static const int Primary_HASH = HashingUtils::HashString("Primary");
static const int Fallback_HASH = HashingUtils::HashString("Fallback");

AssistedNluMode GetAssistedNluModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Primary_HASH) {
    return AssistedNluMode::Primary;
  } else if (hashCode == Fallback_HASH) {
    return AssistedNluMode::Fallback;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssistedNluMode>(hashCode);
  }

  return AssistedNluMode::NOT_SET;
}

Aws::String GetNameForAssistedNluMode(AssistedNluMode enumValue) {
  switch (enumValue) {
    case AssistedNluMode::NOT_SET:
      return {};
    case AssistedNluMode::Primary:
      return "Primary";
    case AssistedNluMode::Fallback:
      return "Fallback";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssistedNluModeMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
