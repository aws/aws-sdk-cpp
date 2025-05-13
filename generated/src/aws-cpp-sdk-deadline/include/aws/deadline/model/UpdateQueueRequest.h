/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/DefaultQueueBudgetAction.h>
#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/deadline/model/JobRunAsUser.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_DEADLINE_API UpdateQueueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueue"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The idempotency token to update in the queue.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateQueueRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID to update in the queue.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    UpdateQueueRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID to update.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    UpdateQueueRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the queue to update.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateQueueRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the queue to update.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateQueueRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default action to take for a queue update if a budget isn't
     * configured.</p>
     */
    inline DefaultQueueBudgetAction GetDefaultBudgetAction() const { return m_defaultBudgetAction; }
    inline bool DefaultBudgetActionHasBeenSet() const { return m_defaultBudgetActionHasBeenSet; }
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = value; }
    inline UpdateQueueRequest& WithDefaultBudgetAction(DefaultQueueBudgetAction value) { SetDefaultBudgetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment settings to update for the queue.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const { return m_jobAttachmentSettings; }
    inline bool JobAttachmentSettingsHasBeenSet() const { return m_jobAttachmentSettingsHasBeenSet; }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    void SetJobAttachmentSettings(JobAttachmentSettingsT&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::forward<JobAttachmentSettingsT>(value); }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    UpdateQueueRequest& WithJobAttachmentSettings(JobAttachmentSettingsT&& value) { SetJobAttachmentSettings(std::forward<JobAttachmentSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN that's used to run jobs from this queue.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateQueueRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the jobs in the queue to run as a specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const { return m_jobRunAsUser; }
    inline bool JobRunAsUserHasBeenSet() const { return m_jobRunAsUserHasBeenSet; }
    template<typename JobRunAsUserT = JobRunAsUser>
    void SetJobRunAsUser(JobRunAsUserT&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::forward<JobRunAsUserT>(value); }
    template<typename JobRunAsUserT = JobRunAsUser>
    UpdateQueueRequest& WithJobRunAsUser(JobRunAsUserT&& value) { SetJobRunAsUser(std::forward<JobRunAsUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required file system location names to add to the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNamesToAdd() const { return m_requiredFileSystemLocationNamesToAdd; }
    inline bool RequiredFileSystemLocationNamesToAddHasBeenSet() const { return m_requiredFileSystemLocationNamesToAddHasBeenSet; }
    template<typename RequiredFileSystemLocationNamesToAddT = Aws::Vector<Aws::String>>
    void SetRequiredFileSystemLocationNamesToAdd(RequiredFileSystemLocationNamesToAddT&& value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd = std::forward<RequiredFileSystemLocationNamesToAddT>(value); }
    template<typename RequiredFileSystemLocationNamesToAddT = Aws::Vector<Aws::String>>
    UpdateQueueRequest& WithRequiredFileSystemLocationNamesToAdd(RequiredFileSystemLocationNamesToAddT&& value) { SetRequiredFileSystemLocationNamesToAdd(std::forward<RequiredFileSystemLocationNamesToAddT>(value)); return *this;}
    template<typename RequiredFileSystemLocationNamesToAddT = Aws::String>
    UpdateQueueRequest& AddRequiredFileSystemLocationNamesToAdd(RequiredFileSystemLocationNamesToAddT&& value) { m_requiredFileSystemLocationNamesToAddHasBeenSet = true; m_requiredFileSystemLocationNamesToAdd.emplace_back(std::forward<RequiredFileSystemLocationNamesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The required file system location names to remove from the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNamesToRemove() const { return m_requiredFileSystemLocationNamesToRemove; }
    inline bool RequiredFileSystemLocationNamesToRemoveHasBeenSet() const { return m_requiredFileSystemLocationNamesToRemoveHasBeenSet; }
    template<typename RequiredFileSystemLocationNamesToRemoveT = Aws::Vector<Aws::String>>
    void SetRequiredFileSystemLocationNamesToRemove(RequiredFileSystemLocationNamesToRemoveT&& value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove = std::forward<RequiredFileSystemLocationNamesToRemoveT>(value); }
    template<typename RequiredFileSystemLocationNamesToRemoveT = Aws::Vector<Aws::String>>
    UpdateQueueRequest& WithRequiredFileSystemLocationNamesToRemove(RequiredFileSystemLocationNamesToRemoveT&& value) { SetRequiredFileSystemLocationNamesToRemove(std::forward<RequiredFileSystemLocationNamesToRemoveT>(value)); return *this;}
    template<typename RequiredFileSystemLocationNamesToRemoveT = Aws::String>
    UpdateQueueRequest& AddRequiredFileSystemLocationNamesToRemove(RequiredFileSystemLocationNamesToRemoveT&& value) { m_requiredFileSystemLocationNamesToRemoveHasBeenSet = true; m_requiredFileSystemLocationNamesToRemove.emplace_back(std::forward<RequiredFileSystemLocationNamesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage profile IDs to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIdsToAdd() const { return m_allowedStorageProfileIdsToAdd; }
    inline bool AllowedStorageProfileIdsToAddHasBeenSet() const { return m_allowedStorageProfileIdsToAddHasBeenSet; }
    template<typename AllowedStorageProfileIdsToAddT = Aws::Vector<Aws::String>>
    void SetAllowedStorageProfileIdsToAdd(AllowedStorageProfileIdsToAddT&& value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd = std::forward<AllowedStorageProfileIdsToAddT>(value); }
    template<typename AllowedStorageProfileIdsToAddT = Aws::Vector<Aws::String>>
    UpdateQueueRequest& WithAllowedStorageProfileIdsToAdd(AllowedStorageProfileIdsToAddT&& value) { SetAllowedStorageProfileIdsToAdd(std::forward<AllowedStorageProfileIdsToAddT>(value)); return *this;}
    template<typename AllowedStorageProfileIdsToAddT = Aws::String>
    UpdateQueueRequest& AddAllowedStorageProfileIdsToAdd(AllowedStorageProfileIdsToAddT&& value) { m_allowedStorageProfileIdsToAddHasBeenSet = true; m_allowedStorageProfileIdsToAdd.emplace_back(std::forward<AllowedStorageProfileIdsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage profile ID to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIdsToRemove() const { return m_allowedStorageProfileIdsToRemove; }
    inline bool AllowedStorageProfileIdsToRemoveHasBeenSet() const { return m_allowedStorageProfileIdsToRemoveHasBeenSet; }
    template<typename AllowedStorageProfileIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetAllowedStorageProfileIdsToRemove(AllowedStorageProfileIdsToRemoveT&& value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove = std::forward<AllowedStorageProfileIdsToRemoveT>(value); }
    template<typename AllowedStorageProfileIdsToRemoveT = Aws::Vector<Aws::String>>
    UpdateQueueRequest& WithAllowedStorageProfileIdsToRemove(AllowedStorageProfileIdsToRemoveT&& value) { SetAllowedStorageProfileIdsToRemove(std::forward<AllowedStorageProfileIdsToRemoveT>(value)); return *this;}
    template<typename AllowedStorageProfileIdsToRemoveT = Aws::String>
    UpdateQueueRequest& AddAllowedStorageProfileIdsToRemove(AllowedStorageProfileIdsToRemoveT&& value) { m_allowedStorageProfileIdsToRemoveHasBeenSet = true; m_allowedStorageProfileIdsToRemove.emplace_back(std::forward<AllowedStorageProfileIdsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DefaultQueueBudgetAction m_defaultBudgetAction{DefaultQueueBudgetAction::NOT_SET};
    bool m_defaultBudgetActionHasBeenSet = false;

    JobAttachmentSettings m_jobAttachmentSettings;
    bool m_jobAttachmentSettingsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    JobRunAsUser m_jobRunAsUser;
    bool m_jobRunAsUserHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNamesToAdd;
    bool m_requiredFileSystemLocationNamesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNamesToRemove;
    bool m_requiredFileSystemLocationNamesToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedStorageProfileIdsToAdd;
    bool m_allowedStorageProfileIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedStorageProfileIdsToRemove;
    bool m_allowedStorageProfileIdsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
