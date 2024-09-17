/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateBackupPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateBackupPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The body of a backup plan. Includes a <code>BackupPlanName</code> and one or
     * more sets of <code>Rules</code>.</p>
     */
    inline const BackupPlanInput& GetBackupPlan() const{ return m_backupPlan; }
    inline bool BackupPlanHasBeenSet() const { return m_backupPlanHasBeenSet; }
    inline void SetBackupPlan(const BackupPlanInput& value) { m_backupPlanHasBeenSet = true; m_backupPlan = value; }
    inline void SetBackupPlan(BackupPlanInput&& value) { m_backupPlanHasBeenSet = true; m_backupPlan = std::move(value); }
    inline CreateBackupPlanRequest& WithBackupPlan(const BackupPlanInput& value) { SetBackupPlan(value); return *this;}
    inline CreateBackupPlanRequest& WithBackupPlan(BackupPlanInput&& value) { SetBackupPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the backup plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupPlanTags() const{ return m_backupPlanTags; }
    inline bool BackupPlanTagsHasBeenSet() const { return m_backupPlanTagsHasBeenSet; }
    inline void SetBackupPlanTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags = value; }
    inline void SetBackupPlanTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags = std::move(value); }
    inline CreateBackupPlanRequest& WithBackupPlanTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupPlanTags(value); return *this;}
    inline CreateBackupPlanRequest& WithBackupPlanTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupPlanTags(std::move(value)); return *this;}
    inline CreateBackupPlanRequest& AddBackupPlanTags(const Aws::String& key, const Aws::String& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, value); return *this; }
    inline CreateBackupPlanRequest& AddBackupPlanTags(Aws::String&& key, const Aws::String& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::move(key), value); return *this; }
    inline CreateBackupPlanRequest& AddBackupPlanTags(const Aws::String& key, Aws::String&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, std::move(value)); return *this; }
    inline CreateBackupPlanRequest& AddBackupPlanTags(Aws::String&& key, Aws::String&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBackupPlanRequest& AddBackupPlanTags(const char* key, Aws::String&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, std::move(value)); return *this; }
    inline CreateBackupPlanRequest& AddBackupPlanTags(Aws::String&& key, const char* value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::move(key), value); return *this; }
    inline CreateBackupPlanRequest& AddBackupPlanTags(const char* key, const char* value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateBackupPlanRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateBackupPlanRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateBackupPlanRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}
  private:

    BackupPlanInput m_backupPlan;
    bool m_backupPlanHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupPlanTags;
    bool m_backupPlanTagsHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
