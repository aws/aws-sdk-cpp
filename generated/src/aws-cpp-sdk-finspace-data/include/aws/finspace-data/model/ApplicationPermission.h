/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class ApplicationPermission
  {
    NOT_SET,
    CreateDataset,
    ManageClusters,
    ManageUsersAndGroups,
    ManageAttributeSets,
    ViewAuditData,
    AccessNotebooks,
    GetTemporaryCredentials
  };

namespace ApplicationPermissionMapper
{
AWS_FINSPACEDATA_API ApplicationPermission GetApplicationPermissionForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForApplicationPermission(ApplicationPermission value);
} // namespace ApplicationPermissionMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
