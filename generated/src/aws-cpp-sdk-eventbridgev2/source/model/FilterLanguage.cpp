/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/FilterLanguage.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace FilterLanguageMapper {

static const int EVENT_BRIDGE_PATTERN_HASH = HashingUtils::HashString("EVENT_BRIDGE_PATTERN");

FilterLanguage GetFilterLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_BRIDGE_PATTERN_HASH) {
    return FilterLanguage::EVENT_BRIDGE_PATTERN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterLanguage>(hashCode);
  }

  return FilterLanguage::NOT_SET;
}

Aws::String GetNameForFilterLanguage(FilterLanguage enumValue) {
  switch (enumValue) {
    case FilterLanguage::NOT_SET:
      return {};
    case FilterLanguage::EVENT_BRIDGE_PATTERN:
      return "EVENT_BRIDGE_PATTERN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterLanguageMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
