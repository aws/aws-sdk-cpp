/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/JobType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace JobTypeMapper {

static const int EVENT_DETECTION_HASH = HashingUtils::HashString("EVENT_DETECTION");

JobType GetJobTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_DETECTION_HASH) {
    return JobType::EVENT_DETECTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobType>(hashCode);
  }

  return JobType::NOT_SET;
}

Aws::String GetNameForJobType(JobType enumValue) {
  switch (enumValue) {
    case JobType::NOT_SET:
      return {};
    case JobType::EVENT_DETECTION:
      return "EVENT_DETECTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
