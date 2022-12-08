/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class CreateSyncJobRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API CreateSyncJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSyncJob"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The workspace Id.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The workspace Id.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The workspace Id.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The workspace Id.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The workspace Id.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The workspace Id.</p>
     */
    inline CreateSyncJobRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The workspace Id.</p>
     */
    inline CreateSyncJobRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The workspace Id.</p>
     */
    inline CreateSyncJobRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(const Aws::String& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(Aws::String&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(const char* value) { m_syncSourceHasBeenSet = true; m_syncSource.assign(value); }

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline CreateSyncJobRequest& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline CreateSyncJobRequest& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}

    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline CreateSyncJobRequest& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}


    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline const Aws::String& GetSyncRole() const{ return m_syncRole; }

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline bool SyncRoleHasBeenSet() const { return m_syncRoleHasBeenSet; }

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline void SetSyncRole(const Aws::String& value) { m_syncRoleHasBeenSet = true; m_syncRole = value; }

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline void SetSyncRole(Aws::String&& value) { m_syncRoleHasBeenSet = true; m_syncRole = std::move(value); }

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline void SetSyncRole(const char* value) { m_syncRoleHasBeenSet = true; m_syncRole.assign(value); }

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline CreateSyncJobRequest& WithSyncRole(const Aws::String& value) { SetSyncRole(value); return *this;}

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline CreateSyncJobRequest& WithSyncRole(Aws::String&& value) { SetSyncRole(std::move(value)); return *this;}

    /**
     * <p>The SyncJob IAM role. This IAM role is used by the sync job to read from the
     * syncSource, and create, update or delete the corresponding resources.</p>
     */
    inline CreateSyncJobRequest& WithSyncRole(const char* value) { SetSyncRole(value); return *this;}


    /**
     * <p>The SyncJob tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The SyncJob tags.</p>
     */
    inline CreateSyncJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    Aws::String m_syncRole;
    bool m_syncRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
