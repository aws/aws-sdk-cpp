/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/SoftwareDeploymentStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace SoftwareDeploymentStatusMapper {

static const int STAGED_FOR_INSTALLATION_HASH = HashingUtils::HashString("STAGED_FOR_INSTALLATION");
static const int PENDING_INSTALLATION_HASH = HashingUtils::HashString("PENDING_INSTALLATION");
static const int INSTALLED_HASH = HashingUtils::HashString("INSTALLED");
static const int STAGED_FOR_UNINSTALLATION_HASH = HashingUtils::HashString("STAGED_FOR_UNINSTALLATION");
static const int PENDING_UNINSTALLATION_HASH = HashingUtils::HashString("PENDING_UNINSTALLATION");
static const int FAILED_TO_INSTALL_HASH = HashingUtils::HashString("FAILED_TO_INSTALL");
static const int FAILED_TO_UNINSTALL_HASH = HashingUtils::HashString("FAILED_TO_UNINSTALL");

SoftwareDeploymentStatus GetSoftwareDeploymentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STAGED_FOR_INSTALLATION_HASH) {
    return SoftwareDeploymentStatus::STAGED_FOR_INSTALLATION;
  } else if (hashCode == PENDING_INSTALLATION_HASH) {
    return SoftwareDeploymentStatus::PENDING_INSTALLATION;
  } else if (hashCode == INSTALLED_HASH) {
    return SoftwareDeploymentStatus::INSTALLED;
  } else if (hashCode == STAGED_FOR_UNINSTALLATION_HASH) {
    return SoftwareDeploymentStatus::STAGED_FOR_UNINSTALLATION;
  } else if (hashCode == PENDING_UNINSTALLATION_HASH) {
    return SoftwareDeploymentStatus::PENDING_UNINSTALLATION;
  } else if (hashCode == FAILED_TO_INSTALL_HASH) {
    return SoftwareDeploymentStatus::FAILED_TO_INSTALL;
  } else if (hashCode == FAILED_TO_UNINSTALL_HASH) {
    return SoftwareDeploymentStatus::FAILED_TO_UNINSTALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SoftwareDeploymentStatus>(hashCode);
  }

  return SoftwareDeploymentStatus::NOT_SET;
}

Aws::String GetNameForSoftwareDeploymentStatus(SoftwareDeploymentStatus enumValue) {
  switch (enumValue) {
    case SoftwareDeploymentStatus::NOT_SET:
      return {};
    case SoftwareDeploymentStatus::STAGED_FOR_INSTALLATION:
      return "STAGED_FOR_INSTALLATION";
    case SoftwareDeploymentStatus::PENDING_INSTALLATION:
      return "PENDING_INSTALLATION";
    case SoftwareDeploymentStatus::INSTALLED:
      return "INSTALLED";
    case SoftwareDeploymentStatus::STAGED_FOR_UNINSTALLATION:
      return "STAGED_FOR_UNINSTALLATION";
    case SoftwareDeploymentStatus::PENDING_UNINSTALLATION:
      return "PENDING_UNINSTALLATION";
    case SoftwareDeploymentStatus::FAILED_TO_INSTALL:
      return "FAILED_TO_INSTALL";
    case SoftwareDeploymentStatus::FAILED_TO_UNINSTALL:
      return "FAILED_TO_UNINSTALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SoftwareDeploymentStatusMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
