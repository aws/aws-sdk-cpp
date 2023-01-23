/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{
  enum class ReceivedStatus
  {
    NOT_SET,
    PENDING_WORKFLOW,
    PENDING_ACCEPT,
    REJECTED,
    ACTIVE,
    FAILED_WORKFLOW,
    DELETED,
    DISABLED,
    WORKFLOW_COMPLETED
  };

namespace ReceivedStatusMapper
{
AWS_LICENSEMANAGER_API ReceivedStatus GetReceivedStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForReceivedStatus(ReceivedStatus value);
} // namespace ReceivedStatusMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws
