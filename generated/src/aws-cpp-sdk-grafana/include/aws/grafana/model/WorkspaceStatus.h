/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class WorkspaceStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    DELETING,
    FAILED,
    UPDATING,
    UPGRADING,
    DELETION_FAILED,
    CREATION_FAILED,
    UPDATE_FAILED,
    UPGRADE_FAILED,
    LICENSE_REMOVAL_FAILED,
    VERSION_UPDATING,
    VERSION_UPDATE_FAILED
  };

namespace WorkspaceStatusMapper
{
AWS_MANAGEDGRAFANA_API WorkspaceStatus GetWorkspaceStatusForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForWorkspaceStatus(WorkspaceStatus value);
} // namespace WorkspaceStatusMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
