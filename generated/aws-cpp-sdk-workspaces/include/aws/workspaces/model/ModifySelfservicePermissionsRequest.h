﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/SelfservicePermissions.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API ModifySelfservicePermissionsRequest : public WorkSpacesRequest
  {
  public:
    ModifySelfservicePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySelfservicePermissions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ModifySelfservicePermissionsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ModifySelfservicePermissionsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ModifySelfservicePermissionsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The permissions to enable or disable self-service capabilities.</p>
     */
    inline const SelfservicePermissions& GetSelfservicePermissions() const{ return m_selfservicePermissions; }

    /**
     * <p>The permissions to enable or disable self-service capabilities.</p>
     */
    inline bool SelfservicePermissionsHasBeenSet() const { return m_selfservicePermissionsHasBeenSet; }

    /**
     * <p>The permissions to enable or disable self-service capabilities.</p>
     */
    inline void SetSelfservicePermissions(const SelfservicePermissions& value) { m_selfservicePermissionsHasBeenSet = true; m_selfservicePermissions = value; }

    /**
     * <p>The permissions to enable or disable self-service capabilities.</p>
     */
    inline void SetSelfservicePermissions(SelfservicePermissions&& value) { m_selfservicePermissionsHasBeenSet = true; m_selfservicePermissions = std::move(value); }

    /**
     * <p>The permissions to enable or disable self-service capabilities.</p>
     */
    inline ModifySelfservicePermissionsRequest& WithSelfservicePermissions(const SelfservicePermissions& value) { SetSelfservicePermissions(value); return *this;}

    /**
     * <p>The permissions to enable or disable self-service capabilities.</p>
     */
    inline ModifySelfservicePermissionsRequest& WithSelfservicePermissions(SelfservicePermissions&& value) { SetSelfservicePermissions(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    SelfservicePermissions m_selfservicePermissions;
    bool m_selfservicePermissionsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
