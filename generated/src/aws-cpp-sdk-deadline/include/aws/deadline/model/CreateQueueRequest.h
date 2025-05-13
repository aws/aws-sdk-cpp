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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateQueueRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateQueueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateQueueRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the farm to connect to the queue.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    CreateQueueRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateQueueRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateQueueRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default action to take on a queue if a budget isn't configured.</p>
     */
    inline DefaultQueueBudgetAction GetDefaultBudgetAction() const { return m_defaultBudgetAction; }
    inline bool DefaultBudgetActionHasBeenSet() const { return m_defaultBudgetActionHasBeenSet; }
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = value; }
    inline CreateQueueRequest& WithDefaultBudgetAction(DefaultQueueBudgetAction value) { SetDefaultBudgetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment settings for the queue. These are the Amazon S3 bucket
     * name and the Amazon S3 prefix.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const { return m_jobAttachmentSettings; }
    inline bool JobAttachmentSettingsHasBeenSet() const { return m_jobAttachmentSettingsHasBeenSet; }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    void SetJobAttachmentSettings(JobAttachmentSettingsT&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::forward<JobAttachmentSettingsT>(value); }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    CreateQueueRequest& WithJobAttachmentSettings(JobAttachmentSettingsT&& value) { SetJobAttachmentSettings(std::forward<JobAttachmentSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN that workers will use while running jobs for this queue.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateQueueRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jobs in the queue run as the specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const { return m_jobRunAsUser; }
    inline bool JobRunAsUserHasBeenSet() const { return m_jobRunAsUserHasBeenSet; }
    template<typename JobRunAsUserT = JobRunAsUser>
    void SetJobRunAsUser(JobRunAsUserT&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::forward<JobRunAsUserT>(value); }
    template<typename JobRunAsUserT = JobRunAsUser>
    CreateQueueRequest& WithJobRunAsUser(JobRunAsUserT&& value) { SetJobRunAsUser(std::forward<JobRunAsUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system location name to include in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNames() const { return m_requiredFileSystemLocationNames; }
    inline bool RequiredFileSystemLocationNamesHasBeenSet() const { return m_requiredFileSystemLocationNamesHasBeenSet; }
    template<typename RequiredFileSystemLocationNamesT = Aws::Vector<Aws::String>>
    void SetRequiredFileSystemLocationNames(RequiredFileSystemLocationNamesT&& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames = std::forward<RequiredFileSystemLocationNamesT>(value); }
    template<typename RequiredFileSystemLocationNamesT = Aws::Vector<Aws::String>>
    CreateQueueRequest& WithRequiredFileSystemLocationNames(RequiredFileSystemLocationNamesT&& value) { SetRequiredFileSystemLocationNames(std::forward<RequiredFileSystemLocationNamesT>(value)); return *this;}
    template<typename RequiredFileSystemLocationNamesT = Aws::String>
    CreateQueueRequest& AddRequiredFileSystemLocationNames(RequiredFileSystemLocationNamesT&& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames.emplace_back(std::forward<RequiredFileSystemLocationNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage profile IDs to include in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIds() const { return m_allowedStorageProfileIds; }
    inline bool AllowedStorageProfileIdsHasBeenSet() const { return m_allowedStorageProfileIdsHasBeenSet; }
    template<typename AllowedStorageProfileIdsT = Aws::Vector<Aws::String>>
    void SetAllowedStorageProfileIds(AllowedStorageProfileIdsT&& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds = std::forward<AllowedStorageProfileIdsT>(value); }
    template<typename AllowedStorageProfileIdsT = Aws::Vector<Aws::String>>
    CreateQueueRequest& WithAllowedStorageProfileIds(AllowedStorageProfileIdsT&& value) { SetAllowedStorageProfileIds(std::forward<AllowedStorageProfileIdsT>(value)); return *this;}
    template<typename AllowedStorageProfileIdsT = Aws::String>
    CreateQueueRequest& AddAllowedStorageProfileIds(AllowedStorageProfileIdsT&& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds.emplace_back(std::forward<AllowedStorageProfileIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateQueueRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateQueueRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

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

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNames;
    bool m_requiredFileSystemLocationNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedStorageProfileIds;
    bool m_allowedStorageProfileIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
