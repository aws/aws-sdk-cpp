/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DetectionRuleDataSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DetectionRuleDataSourceMapper {

static const int CloudTrailManagementEvent_HASH = HashingUtils::HashString("CloudTrailManagementEvent");

DetectionRuleDataSource GetDetectionRuleDataSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CloudTrailManagementEvent_HASH) {
    return DetectionRuleDataSource::CloudTrailManagementEvent;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetectionRuleDataSource>(hashCode);
  }

  return DetectionRuleDataSource::NOT_SET;
}

Aws::String GetNameForDetectionRuleDataSource(DetectionRuleDataSource enumValue) {
  switch (enumValue) {
    case DetectionRuleDataSource::NOT_SET:
      return {};
    case DetectionRuleDataSource::CloudTrailManagementEvent:
      return "CloudTrailManagementEvent";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetectionRuleDataSourceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
