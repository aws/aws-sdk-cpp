/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class GetPermissionGroupRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetPermissionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPermissionGroup"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = value; }

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId.assign(value); }

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline GetPermissionGroupRequest& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline GetPermissionGroupRequest& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the permission group.</p>
     */
    inline GetPermissionGroupRequest& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}

  private:

    Aws::String m_permissionGroupId;
    bool m_permissionGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
