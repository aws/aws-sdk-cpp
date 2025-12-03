/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelDeploymentUpdateStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace CustomModelDeploymentUpdateStatusMapper {

static const int Updating_HASH = HashingUtils::HashString("Updating");
static const int UpdateCompleted_HASH = HashingUtils::HashString("UpdateCompleted");
static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");

CustomModelDeploymentUpdateStatus GetCustomModelDeploymentUpdateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Updating_HASH) {
    return CustomModelDeploymentUpdateStatus::Updating;
  } else if (hashCode == UpdateCompleted_HASH) {
    return CustomModelDeploymentUpdateStatus::UpdateCompleted;
  } else if (hashCode == UpdateFailed_HASH) {
    return CustomModelDeploymentUpdateStatus::UpdateFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomModelDeploymentUpdateStatus>(hashCode);
  }

  return CustomModelDeploymentUpdateStatus::NOT_SET;
}

Aws::String GetNameForCustomModelDeploymentUpdateStatus(CustomModelDeploymentUpdateStatus enumValue) {
  switch (enumValue) {
    case CustomModelDeploymentUpdateStatus::NOT_SET:
      return {};
    case CustomModelDeploymentUpdateStatus::Updating:
      return "Updating";
    case CustomModelDeploymentUpdateStatus::UpdateCompleted:
      return "UpdateCompleted";
    case CustomModelDeploymentUpdateStatus::UpdateFailed:
      return "UpdateFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomModelDeploymentUpdateStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
