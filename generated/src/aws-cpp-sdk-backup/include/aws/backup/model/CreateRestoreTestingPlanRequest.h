/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreTestingPlanForCreate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateRestoreTestingPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateRestoreTestingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestoreTestingPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is a unique string that identifies the request and allows failed
     * requests to be retriedwithout the risk of running the operation twice. This
     * parameter is optional. If used, this parameter must contain 1 to 50 alphanumeric
     * or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateRestoreTestingPlanRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateRestoreTestingPlanRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateRestoreTestingPlanRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A restore testing plan must contain a unique
     * <code>RestoreTestingPlanName</code> string you create and must contain a
     * <code>ScheduleExpression</code> cron. You may optionally include a
     * <code>StartWindowHours</code> integer and a <code>CreatorRequestId</code>
     * string.</p> <p>The <code>RestoreTestingPlanName</code> is a unique string that
     * is the name of the restore testing plan. This cannot be changed after creation,
     * and it must consist of only alphanumeric characters and underscores.</p>
     */
    inline const RestoreTestingPlanForCreate& GetRestoreTestingPlan() const{ return m_restoreTestingPlan; }
    inline bool RestoreTestingPlanHasBeenSet() const { return m_restoreTestingPlanHasBeenSet; }
    inline void SetRestoreTestingPlan(const RestoreTestingPlanForCreate& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = value; }
    inline void SetRestoreTestingPlan(RestoreTestingPlanForCreate&& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = std::move(value); }
    inline CreateRestoreTestingPlanRequest& WithRestoreTestingPlan(const RestoreTestingPlanForCreate& value) { SetRestoreTestingPlan(value); return *this;}
    inline CreateRestoreTestingPlanRequest& WithRestoreTestingPlan(RestoreTestingPlanForCreate&& value) { SetRestoreTestingPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the restore testing plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRestoreTestingPlanRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateRestoreTestingPlanRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRestoreTestingPlanRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateRestoreTestingPlanRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRestoreTestingPlanRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRestoreTestingPlanRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateRestoreTestingPlanRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRestoreTestingPlanRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRestoreTestingPlanRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    RestoreTestingPlanForCreate m_restoreTestingPlan;
    bool m_restoreTestingPlanHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
