/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/InsightsType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace InsightsTypeMapper {

static const int PRE_VISIT_HASH = HashingUtils::HashString("PRE_VISIT");

InsightsType GetInsightsTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRE_VISIT_HASH) {
    return InsightsType::PRE_VISIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightsType>(hashCode);
  }

  return InsightsType::NOT_SET;
}

Aws::String GetNameForInsightsType(InsightsType enumValue) {
  switch (enumValue) {
    case InsightsType::NOT_SET:
      return {};
    case InsightsType::PRE_VISIT:
      return "PRE_VISIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightsTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
