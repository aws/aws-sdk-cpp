/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ApplicationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ApplicationStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

ApplicationStatus GetApplicationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ApplicationStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ApplicationStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return ApplicationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicationStatus>(hashCode);
  }

  return ApplicationStatus::NOT_SET;
}

Aws::String GetNameForApplicationStatus(ApplicationStatus enumValue) {
  switch (enumValue) {
    case ApplicationStatus::NOT_SET:
      return {};
    case ApplicationStatus::CREATING:
      return "CREATING";
    case ApplicationStatus::ACTIVE:
      return "ACTIVE";
    case ApplicationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicationStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
