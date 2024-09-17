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
    AWS_DEADLINE_API GetQueueResult();
    AWS_DEADLINE_API GetQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline void SetQueueId(const Aws::String& value) { m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueId.assign(value); }
    inline GetQueueResult& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline GetQueueResult& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline GetQueueResult& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetQueueResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetQueueResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetQueueResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the queue.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetQueueResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetQueueResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetQueueResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID for the queue.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }
    inline GetQueueResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetQueueResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetQueueResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const QueueStatus& value) { m_status = value; }
    inline void SetStatus(QueueStatus&& value) { m_status = std::move(value); }
    inline GetQueueResult& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}
    inline GetQueueResult& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline const DefaultQueueBudgetAction& GetDefaultBudgetAction() const{ return m_defaultBudgetAction; }
    inline void SetDefaultBudgetAction(const DefaultQueueBudgetAction& value) { m_defaultBudgetAction = value; }
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction&& value) { m_defaultBudgetAction = std::move(value); }
    inline GetQueueResult& WithDefaultBudgetAction(const DefaultQueueBudgetAction& value) { SetDefaultBudgetAction(value); return *this;}
    inline GetQueueResult& WithDefaultBudgetAction(DefaultQueueBudgetAction&& value) { SetDefaultBudgetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline const QueueBlockedReason& GetBlockedReason() const{ return m_blockedReason; }
    inline void SetBlockedReason(const QueueBlockedReason& value) { m_blockedReason = value; }
    inline void SetBlockedReason(QueueBlockedReason&& value) { m_blockedReason = std::move(value); }
    inline GetQueueResult& WithBlockedReason(const QueueBlockedReason& value) { SetBlockedReason(value); return *this;}
    inline GetQueueResult& WithBlockedReason(QueueBlockedReason&& value) { SetBlockedReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const{ return m_jobAttachmentSettings; }
    inline void SetJobAttachmentSettings(const JobAttachmentSettings& value) { m_jobAttachmentSettings = value; }
    inline void SetJobAttachmentSettings(JobAttachmentSettings&& value) { m_jobAttachmentSettings = std::move(value); }
    inline GetQueueResult& WithJobAttachmentSettings(const JobAttachmentSettings& value) { SetJobAttachmentSettings(value); return *this;}
    inline GetQueueResult& WithJobAttachmentSettings(JobAttachmentSettings&& value) { SetJobAttachmentSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetQueueResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetQueueResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetQueueResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNames() const{ return m_requiredFileSystemLocationNames; }
    inline void SetRequiredFileSystemLocationNames(const Aws::Vector<Aws::String>& value) { m_requiredFileSystemLocationNames = value; }
    inline void SetRequiredFileSystemLocationNames(Aws::Vector<Aws::String>&& value) { m_requiredFileSystemLocationNames = std::move(value); }
    inline GetQueueResult& WithRequiredFileSystemLocationNames(const Aws::Vector<Aws::String>& value) { SetRequiredFileSystemLocationNames(value); return *this;}
    inline GetQueueResult& WithRequiredFileSystemLocationNames(Aws::Vector<Aws::String>&& value) { SetRequiredFileSystemLocationNames(std::move(value)); return *this;}
    inline GetQueueResult& AddRequiredFileSystemLocationNames(const Aws::String& value) { m_requiredFileSystemLocationNames.push_back(value); return *this; }
    inline GetQueueResult& AddRequiredFileSystemLocationNames(Aws::String&& value) { m_requiredFileSystemLocationNames.push_back(std::move(value)); return *this; }
    inline GetQueueResult& AddRequiredFileSystemLocationNames(const char* value) { m_requiredFileSystemLocationNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIds() const{ return m_allowedStorageProfileIds; }
    inline void SetAllowedStorageProfileIds(const Aws::Vector<Aws::String>& value) { m_allowedStorageProfileIds = value; }
    inline void SetAllowedStorageProfileIds(Aws::Vector<Aws::String>&& value) { m_allowedStorageProfileIds = std::move(value); }
    inline GetQueueResult& WithAllowedStorageProfileIds(const Aws::Vector<Aws::String>& value) { SetAllowedStorageProfileIds(value); return *this;}
    inline GetQueueResult& WithAllowedStorageProfileIds(Aws::Vector<Aws::String>&& value) { SetAllowedStorageProfileIds(std::move(value)); return *this;}
    inline GetQueueResult& AddAllowedStorageProfileIds(const Aws::String& value) { m_allowedStorageProfileIds.push_back(value); return *this; }
    inline GetQueueResult& AddAllowedStorageProfileIds(Aws::String&& value) { m_allowedStorageProfileIds.push_back(std::move(value)); return *this; }
    inline GetQueueResult& AddAllowedStorageProfileIds(const char* value) { m_allowedStorageProfileIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const{ return m_jobRunAsUser; }
    inline void SetJobRunAsUser(const JobRunAsUser& value) { m_jobRunAsUser = value; }
    inline void SetJobRunAsUser(JobRunAsUser&& value) { m_jobRunAsUser = std::move(value); }
    inline GetQueueResult& WithJobRunAsUser(const JobRunAsUser& value) { SetJobRunAsUser(value); return *this;}
    inline GetQueueResult& WithJobRunAsUser(JobRunAsUser&& value) { SetJobRunAsUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetQueueResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetQueueResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetQueueResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetQueueResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetQueueResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetQueueResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetQueueResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetQueueResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetQueueResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetQueueResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queueId;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::String m_farmId;

    QueueStatus m_status;

    DefaultQueueBudgetAction m_defaultBudgetAction;

    QueueBlockedReason m_blockedReason;

    JobAttachmentSettings m_jobAttachmentSettings;

    Aws::String m_roleArn;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNames;

    Aws::Vector<Aws::String> m_allowedStorageProfileIds;

    JobRunAsUser m_jobRunAsUser;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
