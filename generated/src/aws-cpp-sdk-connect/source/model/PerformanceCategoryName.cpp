/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PerformanceCategoryName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace PerformanceCategoryNameMapper {

static const int NEEDS_IMPROVEMENT_HASH = HashingUtils::HashString("NEEDS_IMPROVEMENT");
static const int EXCEEDS_EXPECTATIONS_HASH = HashingUtils::HashString("EXCEEDS_EXPECTATIONS");

PerformanceCategoryName GetPerformanceCategoryNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NEEDS_IMPROVEMENT_HASH) {
    return PerformanceCategoryName::NEEDS_IMPROVEMENT;
  } else if (hashCode == EXCEEDS_EXPECTATIONS_HASH) {
    return PerformanceCategoryName::EXCEEDS_EXPECTATIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PerformanceCategoryName>(hashCode);
  }

  return PerformanceCategoryName::NOT_SET;
}

Aws::String GetNameForPerformanceCategoryName(PerformanceCategoryName enumValue) {
  switch (enumValue) {
    case PerformanceCategoryName::NOT_SET:
      return {};
    case PerformanceCategoryName::NEEDS_IMPROVEMENT:
      return "NEEDS_IMPROVEMENT";
    case PerformanceCategoryName::EXCEEDS_EXPECTATIONS:
      return "EXCEEDS_EXPECTATIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PerformanceCategoryNameMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
