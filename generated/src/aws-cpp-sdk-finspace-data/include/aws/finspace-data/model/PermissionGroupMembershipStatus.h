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
  enum class PermissionGroupMembershipStatus
  {
    NOT_SET,
    ADDITION_IN_PROGRESS,
    ADDITION_SUCCESS,
    REMOVAL_IN_PROGRESS
  };

namespace PermissionGroupMembershipStatusMapper
{
AWS_FINSPACEDATA_API PermissionGroupMembershipStatus GetPermissionGroupMembershipStatusForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForPermissionGroupMembershipStatus(PermissionGroupMembershipStatus value);
} // namespace PermissionGroupMembershipStatusMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
