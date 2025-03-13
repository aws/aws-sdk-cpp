/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/QueueStatus.h>
#include <aws/deadline/model/DefaultQueueBudgetAction.h>
#include <aws/deadline/model/QueueBlockedReason.h>
#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/JobRunAsUser.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetQueueResult
  {
  public:
    AWS_DEADLINE_API GetQueueResult() = default;
    AWS_DEADLINE_API GetQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    GetQueueResult& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetQueueResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetQueueResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID for the queue.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    GetQueueResult& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline QueueStatus GetStatus() const { return m_status; }
    inline void SetStatus(QueueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetQueueResult& WithStatus(QueueStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline DefaultQueueBudgetAction GetDefaultBudgetAction() const { return m_defaultBudgetAction; }
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = value; }
    inline GetQueueResult& WithDefaultBudgetAction(DefaultQueueBudgetAction value) { SetDefaultBudgetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline QueueBlockedReason GetBlockedReason() const { return m_blockedReason; }
    inline void SetBlockedReason(QueueBlockedReason value) { m_blockedReasonHasBeenSet = true; m_blockedReason = value; }
    inline GetQueueResult& WithBlockedReason(QueueBlockedReason value) { SetBlockedReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const { return m_jobAttachmentSettings; }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    void SetJobAttachmentSettings(JobAttachmentSettingsT&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::forward<JobAttachmentSettingsT>(value); }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    GetQueueResult& WithJobAttachmentSettings(JobAttachmentSettingsT&& value) { SetJobAttachmentSettings(std::forward<JobAttachmentSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetQueueResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNames() const { return m_requiredFileSystemLocationNames; }
    template<typename RequiredFileSystemLocationNamesT = Aws::Vector<Aws::String>>
    void SetRequiredFileSystemLocationNames(RequiredFileSystemLocationNamesT&& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames = std::forward<RequiredFileSystemLocationNamesT>(value); }
    template<typename RequiredFileSystemLocationNamesT = Aws::Vector<Aws::String>>
    GetQueueResult& WithRequiredFileSystemLocationNames(RequiredFileSystemLocationNamesT&& value) { SetRequiredFileSystemLocationNames(std::forward<RequiredFileSystemLocationNamesT>(value)); return *this;}
    template<typename RequiredFileSystemLocationNamesT = Aws::String>
    GetQueueResult& AddRequiredFileSystemLocationNames(RequiredFileSystemLocationNamesT&& value) { m_requiredFileSystemLocationNamesHasBeenSet = true; m_requiredFileSystemLocationNames.emplace_back(std::forward<RequiredFileSystemLocationNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIds() const { return m_allowedStorageProfileIds; }
    template<typename AllowedStorageProfileIdsT = Aws::Vector<Aws::String>>
    void SetAllowedStorageProfileIds(AllowedStorageProfileIdsT&& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds = std::forward<AllowedStorageProfileIdsT>(value); }
    template<typename AllowedStorageProfileIdsT = Aws::Vector<Aws::String>>
    GetQueueResult& WithAllowedStorageProfileIds(AllowedStorageProfileIdsT&& value) { SetAllowedStorageProfileIds(std::forward<AllowedStorageProfileIdsT>(value)); return *this;}
    template<typename AllowedStorageProfileIdsT = Aws::String>
    GetQueueResult& AddAllowedStorageProfileIds(AllowedStorageProfileIdsT&& value) { m_allowedStorageProfileIdsHasBeenSet = true; m_allowedStorageProfileIds.emplace_back(std::forward<AllowedStorageProfileIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const { return m_jobRunAsUser; }
    template<typename JobRunAsUserT = JobRunAsUser>
    void SetJobRunAsUser(JobRunAsUserT&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::forward<JobRunAsUserT>(value); }
    template<typename JobRunAsUserT = JobRunAsUser>
    GetQueueResult& WithJobRunAsUser(JobRunAsUserT&& value) { SetJobRunAsUser(std::forward<JobRunAsUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetQueueResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetQueueResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetQueueResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetQueueResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    QueueStatus m_status{QueueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DefaultQueueBudgetAction m_defaultBudgetAction{DefaultQueueBudgetAction::NOT_SET};
    bool m_defaultBudgetActionHasBeenSet = false;

    QueueBlockedReason m_blockedReason{QueueBlockedReason::NOT_SET};
    bool m_blockedReasonHasBeenSet = false;

    JobAttachmentSettings m_jobAttachmentSettings;
    bool m_jobAttachmentSettingsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNames;
    bool m_requiredFileSystemLocationNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedStorageProfileIds;
    bool m_allowedStorageProfileIdsHasBeenSet = false;

    JobRunAsUser m_jobRunAsUser;
    bool m_jobRunAsUserHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
