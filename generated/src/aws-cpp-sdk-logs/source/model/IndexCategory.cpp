/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/IndexCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace IndexCategoryMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

IndexCategory GetIndexCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return IndexCategory::DEFAULT;
  } else if (hashCode == CUSTOM_HASH) {
    return IndexCategory::CUSTOM;
  } else if (hashCode == AUTO_HASH) {
    return IndexCategory::AUTO;
  } else if (hashCode == INACTIVE_HASH) {
    return IndexCategory::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IndexCategory>(hashCode);
  }

  return IndexCategory::NOT_SET;
}

Aws::String GetNameForIndexCategory(IndexCategory enumValue) {
  switch (enumValue) {
    case IndexCategory::NOT_SET:
      return {};
    case IndexCategory::DEFAULT:
      return "DEFAULT";
    case IndexCategory::CUSTOM:
      return "CUSTOM";
    case IndexCategory::AUTO:
      return "AUTO";
    case IndexCategory::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IndexCategoryMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
