﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class AWS_FINSPACEDATA_API DeletePermissionGroupRequest : public FinSpaceDataRequest
  {
  public:
    DeletePermissionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePermissionGroup"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = value; }

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId.assign(value); }

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline DeletePermissionGroupRequest& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline DeletePermissionGroupRequest& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the permission group that you want to delete.</p>
     */
    inline DeletePermissionGroupRequest& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeletePermissionGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeletePermissionGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeletePermissionGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_permissionGroupId;
    bool m_permissionGroupIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
