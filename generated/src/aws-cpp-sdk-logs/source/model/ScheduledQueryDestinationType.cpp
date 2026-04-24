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

ScheduledQueryDestinationType GetScheduledQueryDestinationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3_HASH) {
    return ScheduledQueryDestinationType::S3;
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
