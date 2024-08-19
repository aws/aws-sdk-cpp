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
    AWS_DEADLINE_API CreateQueueRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateQueueRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateQueueRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateQueueRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the farm to connect to the queue.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline CreateQueueRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline CreateQueueRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline CreateQueueRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateQueueRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateQueueRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateQueueRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default action to take on a queue if a budget isn't configured.</p>
     */
    inline const DefaultQueueBudgetAction& GetDefaultBudgetAction() const{ return m_defaultBudgetAction; }
    inline bool DefaultBudgetActionHasBeenSet() const { return m_defaultBudgetActionHasBeenSet; }
    inline void SetDefaultBudgetAction(const DefaultQueueBudgetAction& value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = value; }
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction&& value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = std::move(value); }
    inline CreateQueueRequest& WithDefaultBudgetAction(const DefaultQueueBudgetAction& value) { SetDefaultBudgetAction(value); return *this;}
    inline CreateQueueRequest& WithDefaultBudgetAction(DefaultQueueBudgetAction&& value) { SetDefaultBudgetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment settings for the queue. These are the Amazon S3 bucket
     * name and the Amazon S3 prefix.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const{ return m_jobAttachmentSettings; }
    inline bool JobAttachmentSettingsHasBeenSet() const { return m_jobAttachmentSettingsHasBeenSet; }
    inline void SetJobAttachmentSettings(const JobAttachmentSettings& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = value; }
    inline void SetJobAttachmentSettings(JobAttachmentSettings&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::move(value); }
    inline CreateQueueRequest& WithJobAttachmentSettings(const JobAttachmentSettings& value) { SetJobAttachmentSettings(value); return *this;}
    inline CreateQueueRequest& WithJobAttachmentSettings(JobAttachmentSettings&& value) { SetJobAttachmentSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN that workers will use while running jobs for this queue.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateQueueRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateQueueRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateQueueRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jobs in the queue run as the specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const{ return m_jobRunAsUser; }
    inline bool JobRunAsUserHasBeenSet() const { return m_jobRunAsUserHasBeenSet; }
    inline void SetJobRunAsUser(const JobRunAsUser& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = value; }
    inline void SetJobRunAsUser(JobRunAsUser&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::move(value); }
    inline CreateQueueRequest& WithJobRunAsUser(const JobRunAsUser& value) { SetJobRunAsUser(value); return *this;}
    inline CreateQueueRequest& WithJobRunAsUser(JobRunAsUser&& value) { SetJobRunAsUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system location name to include in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNames() const{ return m_requiredFileSystemLocationNames; }
    inline bool RequiredFileSystemLocationNamesHasBeenSet() const { return m_requiredFileSystemLocationNamesHasBeenSet; }
    inline void SetRequiredFileSystemLocationNames(const Aws::Vector<Aws::String>& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames = value; }
    inline void SetRequiredFileSystemLocationNames(Aws::Vector<Aws::String>&& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames = std::move(value); }
    inline CreateQueueRequest& WithRequiredFileSystemLocationNames(const Aws::Vector<Aws::String>& value) { SetRequiredFileSystemLocationNames(value); return *this;}
    inline CreateQueueRequest& WithRequiredFileSystemLocationNames(Aws::Vector<Aws::String>&& value) { SetRequiredFileSystemLocationNames(std::move(value)); return *this;}
    inline CreateQueueRequest& AddRequiredFileSystemLocationNames(const Aws::String& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames.push_back(value); return *this; }
    inline CreateQueueRequest& AddRequiredFileSystemLocationNames(Aws::String&& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames.push_back(std::move(value)); return *this; }
    inline CreateQueueRequest& AddRequiredFileSystemLocationNames(const char* value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage profile IDs to include in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIds() const{ return m_allowedStorageProfileIds; }
    inline bool AllowedStorageProfileIdsHasBeenSet() const { return m_allowedStorageProfileIdsHasBeenSet; }
    inline void SetAllowedStorageProfileIds(const Aws::Vector<Aws::String>& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds = value; }
    inline void SetAllowedStorageProfileIds(Aws::Vector<Aws::String>&& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds = std::move(value); }
    inline CreateQueueRequest& WithAllowedStorageProfileIds(const Aws::Vector<Aws::String>& value) { SetAllowedStorageProfileIds(value); return *this;}
    inline CreateQueueRequest& WithAllowedStorageProfileIds(Aws::Vector<Aws::String>&& value) { SetAllowedStorageProfileIds(std::move(value)); return *this;}
    inline CreateQueueRequest& AddAllowedStorageProfileIds(const Aws::String& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds.push_back(value); return *this; }
    inline CreateQueueRequest& AddAllowedStorageProfileIds(Aws::String&& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds.push_back(std::move(value)); return *this; }
    inline CreateQueueRequest& AddAllowedStorageProfileIds(const char* value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DefaultQueueBudgetAction m_defaultBudgetAction;
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
