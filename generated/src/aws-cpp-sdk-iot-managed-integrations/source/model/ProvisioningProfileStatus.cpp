/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-managed-integrations/model/ProvisioningProfileStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
namespace ProvisioningProfileStatusMapper {

static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

ProvisioningProfileStatus GetProvisioningProfileStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_IN_PROGRESS_HASH) {
    return ProvisioningProfileStatus::CREATE_IN_PROGRESS;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return ProvisioningProfileStatus::CREATE_FAILED;
  } else if (hashCode == CREATED_HASH) {
    return ProvisioningProfileStatus::CREATED;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return ProvisioningProfileStatus::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return ProvisioningProfileStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProvisioningProfileStatus>(hashCode);
  }

  return ProvisioningProfileStatus::NOT_SET;
}

Aws::String GetNameForProvisioningProfileStatus(ProvisioningProfileStatus enumValue) {
  switch (enumValue) {
    case ProvisioningProfileStatus::NOT_SET:
      return {};
    case ProvisioningProfileStatus::CREATE_IN_PROGRESS:
      return "CREATE_IN_PROGRESS";
    case ProvisioningProfileStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case ProvisioningProfileStatus::CREATED:
      return "CREATED";
    case ProvisioningProfileStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case ProvisioningProfileStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProvisioningProfileStatusMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
