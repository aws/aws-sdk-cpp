/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/DefaultQueueBudgetAction.h>
#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/deadline/model/JobRunAsUser.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateQueueRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueue"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIdsToAdd() const{ return m_allowedStorageProfileIdsToAdd; }

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline bool AllowedStorageProfileIdsToAddHasBeenSet() const { return m_allowedStorageProfileIdsToAddHasBeenSet; }

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline void SetAllowedStorageProfileIdsToAdd(const Aws::Vector<Aws::String>& value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd = value; }

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline void SetAllowedStorageProfileIdsToAdd(Aws::Vector<Aws::String>&& value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd = std::move(value); }

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline UpdateQueueRequest& WithAllowedStorageProfileIdsToAdd(const Aws::Vector<Aws::String>& value) { SetAllowedStorageProfileIdsToAdd(value); return *this;}

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline UpdateQueueRequest& WithAllowedStorageProfileIdsToAdd(Aws::Vector<Aws::String>&& value) { SetAllowedStorageProfileIdsToAdd(std::move(value)); return *this;}

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline UpdateQueueRequest& AddAllowedStorageProfileIdsToAdd(const Aws::String& value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd.push_back(value); return *this; }

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline UpdateQueueRequest& AddAllowedStorageProfileIdsToAdd(Aws::String&& value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline UpdateQueueRequest& AddAllowedStorageProfileIdsToAdd(const char* value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd.push_back(value); return *this; }


    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIdsToRemove() const{ return m_allowedStorageProfileIdsToRemove; }

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline bool AllowedStorageProfileIdsToRemoveHasBeenSet() const { return m_allowedStorageProfileIdsToRemoveHasBeenSet; }

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline void SetAllowedStorageProfileIdsToRemove(const Aws::Vector<Aws::String>& value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove = value; }

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline void SetAllowedStorageProfileIdsToRemove(Aws::Vector<Aws::String>&& value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove = std::move(value); }

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline UpdateQueueRequest& WithAllowedStorageProfileIdsToRemove(const Aws::Vector<Aws::String>& value) { SetAllowedStorageProfileIdsToRemove(value); return *this;}

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline UpdateQueueRequest& WithAllowedStorageProfileIdsToRemove(Aws::Vector<Aws::String>&& value) { SetAllowedStorageProfileIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline UpdateQueueRequest& AddAllowedStorageProfileIdsToRemove(const Aws::String& value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove.push_back(value); return *this; }

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline UpdateQueueRequest& AddAllowedStorageProfileIdsToRemove(Aws::String&& value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline UpdateQueueRequest& AddAllowedStorageProfileIdsToRemove(const char* value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove.push_back(value); return *this; }


    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline UpdateQueueRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline UpdateQueueRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline UpdateQueueRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline const DefaultQueueBudgetAction& GetDefaultBudgetAction() const{ return m_defaultBudgetAction; }

    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline bool DefaultBudgetActionHasBeenSet() const { return m_defaultBudgetActionHasBeenSet; }

    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline void SetDefaultBudgetAction(const DefaultQueueBudgetAction& value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = value; }

    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction&& value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = std::move(value); }

    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline UpdateQueueRequest& WithDefaultBudgetAction(const DefaultQueueBudgetAction& value) { SetDefaultBudgetAction(value); return *this;}

    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline UpdateQueueRequest& WithDefaultBudgetAction(DefaultQueueBudgetAction&& value) { SetDefaultBudgetAction(std::move(value)); return *this;}


    /**
     * <p>The description of the queue to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the queue to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the queue to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the queue to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the queue to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the queue to update.</p>
     */
    inline UpdateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the queue to update.</p>
     */
    inline UpdateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the queue to update.</p>
     */
    inline UpdateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the queue to update.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline UpdateQueueRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline UpdateQueueRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the queue to update.</p>
     */
    inline UpdateQueueRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline UpdateQueueRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline UpdateQueueRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline UpdateQueueRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const{ return m_jobAttachmentSettings; }

    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline bool JobAttachmentSettingsHasBeenSet() const { return m_jobAttachmentSettingsHasBeenSet; }

    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline void SetJobAttachmentSettings(const JobAttachmentSettings& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = value; }

    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline void SetJobAttachmentSettings(JobAttachmentSettings&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::move(value); }

    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline UpdateQueueRequest& WithJobAttachmentSettings(const JobAttachmentSettings& value) { SetJobAttachmentSettings(value); return *this;}

    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline UpdateQueueRequest& WithJobAttachmentSettings(JobAttachmentSettings&& value) { SetJobAttachmentSettings(std::move(value)); return *this;}


    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const{ return m_jobRunAsUser; }

    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline bool JobRunAsUserHasBeenSet() const { return m_jobRunAsUserHasBeenSet; }

    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline void SetJobRunAsUser(const JobRunAsUser& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = value; }

    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline void SetJobRunAsUser(JobRunAsUser&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::move(value); }

    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline UpdateQueueRequest& WithJobRunAsUser(const JobRunAsUser& value) { SetJobRunAsUser(value); return *this;}

    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline UpdateQueueRequest& WithJobRunAsUser(JobRunAsUser&& value) { SetJobRunAsUser(std::move(value)); return *this;}


    /**
     * <p>The queue ID to update.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID to update.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue ID to update.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue ID to update.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue ID to update.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue ID to update.</p>
     */
    inline UpdateQueueRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID to update.</p>
     */
    inline UpdateQueueRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID to update.</p>
     */
    inline UpdateQueueRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNamesToAdd() const{ return m_requiredFileSystemLocationNamesToAdd; }

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline bool RequiredFileSystemLocationNamesToAddHasBeenSet() const { return m_requiredFileSystemLocationNamesToAddHasBeenSet; }

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline void SetRequiredFileSystemLocationNamesToAdd(const Aws::Vector<Aws::String>& value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd = value; }

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline void SetRequiredFileSystemLocationNamesToAdd(Aws::Vector<Aws::String>&& value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd = std::move(value); }

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline UpdateQueueRequest& WithRequiredFileSystemLocationNamesToAdd(const Aws::Vector<Aws::String>& value) { SetRequiredFileSystemLocationNamesToAdd(value); return *this;}

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline UpdateQueueRequest& WithRequiredFileSystemLocationNamesToAdd(Aws::Vector<Aws::String>&& value) { SetRequiredFileSystemLocationNamesToAdd(std::move(value)); return *this;}

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline UpdateQueueRequest& AddRequiredFileSystemLocationNamesToAdd(const Aws::String& value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd.push_back(value); return *this; }

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline UpdateQueueRequest& AddRequiredFileSystemLocationNamesToAdd(Aws::String&& value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline UpdateQueueRequest& AddRequiredFileSystemLocationNamesToAdd(const char* value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd.push_back(value); return *this; }


    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNamesToRemove() const{ return m_requiredFileSystemLocationNamesToRemove; }

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline bool RequiredFileSystemLocationNamesToRemoveHasBeenSet() const { return m_requiredFileSystemLocationNamesToRemoveHasBeenSet; }

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline void SetRequiredFileSystemLocationNamesToRemove(const Aws::Vector<Aws::String>& value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove = value; }

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline void SetRequiredFileSystemLocationNamesToRemove(Aws::Vector<Aws::String>&& value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove = std::move(value); }

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline UpdateQueueRequest& WithRequiredFileSystemLocationNamesToRemove(const Aws::Vector<Aws::String>& value) { SetRequiredFileSystemLocationNamesToRemove(value); return *this;}

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline UpdateQueueRequest& WithRequiredFileSystemLocationNamesToRemove(Aws::Vector<Aws::String>&& value) { SetRequiredFileSystemLocationNamesToRemove(std::move(value)); return *this;}

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline UpdateQueueRequest& AddRequiredFileSystemLocationNamesToRemove(const Aws::String& value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove.push_back(value); return *this; }

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline UpdateQueueRequest& AddRequiredFileSystemLocationNamesToRemove(Aws::String&& value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline UpdateQueueRequest& AddRequiredFileSystemLocationNamesToRemove(const char* value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove.push_back(value); return *this; }


    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline UpdateQueueRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline UpdateQueueRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline UpdateQueueRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedStorageProfileIdsToAdd;
    bool m_allowedStorageProfileIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedStorageProfileIdsToRemove;
    bool m_allowedStorageProfileIdsToRemoveHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DefaultQueueBudgetAction m_defaultBudgetAction;
    bool m_defaultBudgetActionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    JobAttachmentSettings m_jobAttachmentSettings;
    bool m_jobAttachmentSettingsHasBeenSet = false;

    JobRunAsUser m_jobRunAsUser;
    bool m_jobRunAsUserHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNamesToAdd;
    bool m_requiredFileSystemLocationNamesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNamesToRemove;
    bool m_requiredFileSystemLocationNamesToRemoveHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
