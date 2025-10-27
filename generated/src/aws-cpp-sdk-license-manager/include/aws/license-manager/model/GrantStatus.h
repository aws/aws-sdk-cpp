/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

namespace Aws {
namespace LicenseManager {
namespace Model {
enum class GrantStatus {
  NOT_SET,
  PENDING_WORKFLOW,
  PENDING_ACCEPT,
  REJECTED,
  ACTIVE,
  FAILED_WORKFLOW,
  DELETED,
  PENDING_DELETE,
  DISABLED,
  WORKFLOW_COMPLETED
};

namespace GrantStatusMapper {
AWS_LICENSEMANAGER_API GrantStatus GetGrantStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForGrantStatus(GrantStatus value);
}  // namespace GrantStatusMapper
}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
