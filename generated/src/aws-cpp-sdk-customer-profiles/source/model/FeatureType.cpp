/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/FeatureType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace FeatureTypeMapper {

static const int TEXTUAL_HASH = HashingUtils::HashString("TEXTUAL");
static const int CATEGORICAL_HASH = HashingUtils::HashString("CATEGORICAL");

FeatureType GetFeatureTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXTUAL_HASH) {
    return FeatureType::TEXTUAL;
  } else if (hashCode == CATEGORICAL_HASH) {
    return FeatureType::CATEGORICAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeatureType>(hashCode);
  }

  return FeatureType::NOT_SET;
}

Aws::String GetNameForFeatureType(FeatureType enumValue) {
  switch (enumValue) {
    case FeatureType::NOT_SET:
      return {};
    case FeatureType::TEXTUAL:
      return "TEXTUAL";
    case FeatureType::CATEGORICAL:
      return "CATEGORICAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeatureTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
