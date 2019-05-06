/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/backup/model/BackupPlanInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class AWS_BACKUP_API CreateBackupPlanRequest : public BackupRequest
  {
  public:
    CreateBackupPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupPlan"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline const BackupPlanInput& GetBackupPlan() const{ return m_backupPlan; }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline bool BackupPlanHasBeenSet() const { return m_backupPlanHasBeenSet; }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline void SetBackupPlan(const BackupPlanInput& value) { m_backupPlanHasBeenSet = true; m_backupPlan = value; }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline void SetBackupPlan(BackupPlanInput&& value) { m_backupPlanHasBeenSet = true; m_backupPlan = std::move(value); }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline CreateBackupPlanRequest& WithBackupPlan(const BackupPlanInput& value) { SetBackupPlan(value); return *this;}

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline CreateBackupPlanRequest& WithBackupPlan(BackupPlanInput&& value) { SetBackupPlan(std::move(value)); return *this;}


    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupPlanTags() const{ return m_backupPlanTags; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline bool BackupPlanTagsHasBeenSet() const { return m_backupPlanTagsHasBeenSet; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline void SetBackupPlanTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags = value; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline void SetBackupPlanTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags = std::move(value); }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& WithBackupPlanTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupPlanTags(value); return *this;}

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& WithBackupPlanTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupPlanTags(std::move(value)); return *this;}

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(const Aws::String& key, const Aws::String& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(Aws::String&& key, const Aws::String& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(const Aws::String& key, Aws::String&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(Aws::String&& key, Aws::String&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(const char* key, Aws::String&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(Aws::String&& key, const char* value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair. The specified tags are
     * assigned to all backups created with this plan.</p>
     */
    inline CreateBackupPlanRequest& AddBackupPlanTags(const char* key, const char* value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, value); return *this; }


    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline CreateBackupPlanRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline CreateBackupPlanRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of executing the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p>
     */
    inline CreateBackupPlanRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}

  private:

    BackupPlanInput m_backupPlan;
    bool m_backupPlanHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_backupPlanTags;
    bool m_backupPlanTagsHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
