﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class GetResourceSyncStatusRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetResourceSyncStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceSyncStatus"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Amazon Web Services resource for the sync status with the Git
     * repository.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline GetResourceSyncStatusRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline GetResourceSyncStatusRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline GetResourceSyncStatusRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type for the sync status with the Git repository.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }
    inline GetResourceSyncStatusRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}
    inline GetResourceSyncStatusRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
