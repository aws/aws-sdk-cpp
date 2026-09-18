/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/RecommendationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace RecommendationModeMapper {

static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");

RecommendationMode GetRecommendationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASIC_HASH) {
    return RecommendationMode::BASIC;
  } else if (hashCode == ADVANCED_HASH) {
    return RecommendationMode::ADVANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationMode>(hashCode);
  }

  return RecommendationMode::NOT_SET;
}

Aws::String GetNameForRecommendationMode(RecommendationMode enumValue) {
  switch (enumValue) {
    case RecommendationMode::NOT_SET:
      return {};
    case RecommendationMode::BASIC:
      return "BASIC";
    case RecommendationMode::ADVANCED:
      return "ADVANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
