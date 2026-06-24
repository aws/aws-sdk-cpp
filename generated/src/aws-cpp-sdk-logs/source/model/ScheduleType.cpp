/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/ScheduleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace ScheduleTypeMapper {

static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");

ScheduleType GetScheduleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_MANAGED_HASH) {
    return ScheduleType::CUSTOMER_MANAGED;
  } else if (hashCode == AWS_MANAGED_HASH) {
    return ScheduleType::AWS_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScheduleType>(hashCode);
  }

  return ScheduleType::NOT_SET;
}

Aws::String GetNameForScheduleType(ScheduleType enumValue) {
  switch (enumValue) {
    case ScheduleType::NOT_SET:
      return {};
    case ScheduleType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    case ScheduleType::AWS_MANAGED:
      return "AWS_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScheduleTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
