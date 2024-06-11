﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/PermissionGroupMembershipStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The structure of a permission group associated with a user.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/PermissionGroupByUser">AWS
   * API Reference</a></p>
   */
  class PermissionGroupByUser
  {
  public:
    AWS_FINSPACEDATA_API PermissionGroupByUser();
    AWS_FINSPACEDATA_API PermissionGroupByUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API PermissionGroupByUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = value; }
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::move(value); }
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId.assign(value); }
    inline PermissionGroupByUser& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}
    inline PermissionGroupByUser& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}
    inline PermissionGroupByUser& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the permission group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PermissionGroupByUser& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PermissionGroupByUser& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PermissionGroupByUser& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the user within a permission group.</p> <ul> <li> <p>
     * <code>ADDITION_IN_PROGRESS</code> – The user is currently being added to the
     * permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code> – The user is
     * successfully added to the permission group.</p> </li> <li> <p>
     * <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from the
     * permission group.</p> </li> </ul>
     */
    inline const PermissionGroupMembershipStatus& GetMembershipStatus() const{ return m_membershipStatus; }
    inline bool MembershipStatusHasBeenSet() const { return m_membershipStatusHasBeenSet; }
    inline void SetMembershipStatus(const PermissionGroupMembershipStatus& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }
    inline void SetMembershipStatus(PermissionGroupMembershipStatus&& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = std::move(value); }
    inline PermissionGroupByUser& WithMembershipStatus(const PermissionGroupMembershipStatus& value) { SetMembershipStatus(value); return *this;}
    inline PermissionGroupByUser& WithMembershipStatus(PermissionGroupMembershipStatus&& value) { SetMembershipStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_permissionGroupId;
    bool m_permissionGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PermissionGroupMembershipStatus m_membershipStatus;
    bool m_membershipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
