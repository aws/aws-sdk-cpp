/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devicefarm/model/InsightsType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {
namespace InsightsTypeMapper {

static const int TEST_REPORT_HASH = HashingUtils::HashString("TEST_REPORT");

InsightsType GetInsightsTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEST_REPORT_HASH) {
    return InsightsType::TEST_REPORT;
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
    case InsightsType::TEST_REPORT:
      return "TEST_REPORT";
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
}  // namespace DeviceFarm
}  // namespace Aws
