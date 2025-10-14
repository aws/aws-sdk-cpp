/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class SoftwareDeploymentStatus
  {
    NOT_SET,
    STAGED_FOR_INSTALLATION,
    PENDING_INSTALLATION,
    INSTALLED,
    STAGED_FOR_UNINSTALLATION,
    PENDING_UNINSTALLATION,
    FAILED_TO_INSTALL,
    FAILED_TO_UNINSTALL
  };

namespace SoftwareDeploymentStatusMapper
{
AWS_APPSTREAM_API SoftwareDeploymentStatus GetSoftwareDeploymentStatusForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForSoftwareDeploymentStatus(SoftwareDeploymentStatus value);
} // namespace SoftwareDeploymentStatusMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
