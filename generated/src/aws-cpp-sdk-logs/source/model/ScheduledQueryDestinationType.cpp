/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/ScheduledQueryDestinationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace ScheduledQueryDestinationTypeMapper {

static const int S3_HASH = HashingUtils::HashString("S3");
static const int LOOKUP_TABLE_HASH = HashingUtils::HashString("LOOKUP_TABLE");

ScheduledQueryDestinationType GetScheduledQueryDestinationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3_HASH) {
    return ScheduledQueryDestinationType::S3;
  } else if (hashCode == LOOKUP_TABLE_HASH) {
    return ScheduledQueryDestinationType::LOOKUP_TABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScheduledQueryDestinationType>(hashCode);
  }

  return ScheduledQueryDestinationType::NOT_SET;
}

Aws::String GetNameForScheduledQueryDestinationType(ScheduledQueryDestinationType enumValue) {
  switch (enumValue) {
    case ScheduledQueryDestinationType::NOT_SET:
      return {};
    case ScheduledQueryDestinationType::S3:
      return "S3";
    case ScheduledQueryDestinationType::LOOKUP_TABLE:
      return "LOOKUP_TABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScheduledQueryDestinationTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
