/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/QueueBlockedReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/DefaultQueueBudgetAction.h>
#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/deadline/model/JobRunAsUser.h>
#include <aws/deadline/model/QueueStatus.h>
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


    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedStorageProfileIds() const{ return m_allowedStorageProfileIds; }

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline void SetAllowedStorageProfileIds(const Aws::Vector<Aws::String>& value) { m_allowedStorageProfileIds = value; }

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline void SetAllowedStorageProfileIds(Aws::Vector<Aws::String>&& value) { m_allowedStorageProfileIds = std::move(value); }

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline GetQueueResult& WithAllowedStorageProfileIds(const Aws::Vector<Aws::String>& value) { SetAllowedStorageProfileIds(value); return *this;}

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline GetQueueResult& WithAllowedStorageProfileIds(Aws::Vector<Aws::String>&& value) { SetAllowedStorageProfileIds(std::move(value)); return *this;}

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline GetQueueResult& AddAllowedStorageProfileIds(const Aws::String& value) { m_allowedStorageProfileIds.push_back(value); return *this; }

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline GetQueueResult& AddAllowedStorageProfileIds(Aws::String&& value) { m_allowedStorageProfileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The storage profile IDs for the queue.</p>
     */
    inline GetQueueResult& AddAllowedStorageProfileIds(const char* value) { m_allowedStorageProfileIds.push_back(value); return *this; }


    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline const QueueBlockedReason& GetBlockedReason() const{ return m_blockedReason; }

    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline void SetBlockedReason(const QueueBlockedReason& value) { m_blockedReason = value; }

    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline void SetBlockedReason(QueueBlockedReason&& value) { m_blockedReason = std::move(value); }

    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline GetQueueResult& WithBlockedReason(const QueueBlockedReason& value) { SetBlockedReason(value); return *this;}

    /**
     * <p>The reason the queue was blocked.</p>
     */
    inline GetQueueResult& WithBlockedReason(QueueBlockedReason&& value) { SetBlockedReason(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetQueueResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetQueueResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetQueueResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetQueueResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetQueueResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline const DefaultQueueBudgetAction& GetDefaultBudgetAction() const{ return m_defaultBudgetAction; }

    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline void SetDefaultBudgetAction(const DefaultQueueBudgetAction& value) { m_defaultBudgetAction = value; }

    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction&& value) { m_defaultBudgetAction = std::move(value); }

    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline GetQueueResult& WithDefaultBudgetAction(const DefaultQueueBudgetAction& value) { SetDefaultBudgetAction(value); return *this;}

    /**
     * <p>The default action taken on a queue if a budget wasn't configured.</p>
     */
    inline GetQueueResult& WithDefaultBudgetAction(DefaultQueueBudgetAction&& value) { SetDefaultBudgetAction(std::move(value)); return *this;}


    /**
     * <p>The description of the queue.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the queue.</p>
     */
    inline GetQueueResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the queue.</p>
     */
    inline GetQueueResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the queue.</p>
     */
    inline GetQueueResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the queue.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the queue.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The display name of the queue.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The display name of the queue.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The display name of the queue.</p>
     */
    inline GetQueueResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the queue.</p>
     */
    inline GetQueueResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the queue.</p>
     */
    inline GetQueueResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID for the queue.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID for the queue.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }

    /**
     * <p>The farm ID for the queue.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }

    /**
     * <p>The farm ID for the queue.</p>
     */
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }

    /**
     * <p>The farm ID for the queue.</p>
     */
    inline GetQueueResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID for the queue.</p>
     */
    inline GetQueueResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID for the queue.</p>
     */
    inline GetQueueResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const{ return m_jobAttachmentSettings; }

    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline void SetJobAttachmentSettings(const JobAttachmentSettings& value) { m_jobAttachmentSettings = value; }

    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline void SetJobAttachmentSettings(JobAttachmentSettings&& value) { m_jobAttachmentSettings = std::move(value); }

    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline GetQueueResult& WithJobAttachmentSettings(const JobAttachmentSettings& value) { SetJobAttachmentSettings(value); return *this;}

    /**
     * <p>The job attachment settings for the queue.</p>
     */
    inline GetQueueResult& WithJobAttachmentSettings(JobAttachmentSettings&& value) { SetJobAttachmentSettings(std::move(value)); return *this;}


    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const{ return m_jobRunAsUser; }

    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline void SetJobRunAsUser(const JobRunAsUser& value) { m_jobRunAsUser = value; }

    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline void SetJobRunAsUser(JobRunAsUser&& value) { m_jobRunAsUser = std::move(value); }

    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline GetQueueResult& WithJobRunAsUser(const JobRunAsUser& value) { SetJobRunAsUser(value); return *this;}

    /**
     * <p>The jobs in the queue ran as this specified POSIX user.</p>
     */
    inline GetQueueResult& WithJobRunAsUser(JobRunAsUser&& value) { SetJobRunAsUser(std::move(value)); return *this;}


    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueId = value; }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueId = std::move(value); }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(const char* value) { m_queueId.assign(value); }

    /**
     * <p>The queue ID.</p>
     */
    inline GetQueueResult& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline GetQueueResult& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline GetQueueResult& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequiredFileSystemLocationNames() const{ return m_requiredFileSystemLocationNames; }

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline void SetRequiredFileSystemLocationNames(const Aws::Vector<Aws::String>& value) { m_requiredFileSystemLocationNames = value; }

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline void SetRequiredFileSystemLocationNames(Aws::Vector<Aws::String>&& value) { m_requiredFileSystemLocationNames = std::move(value); }

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline GetQueueResult& WithRequiredFileSystemLocationNames(const Aws::Vector<Aws::String>& value) { SetRequiredFileSystemLocationNames(value); return *this;}

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline GetQueueResult& WithRequiredFileSystemLocationNames(Aws::Vector<Aws::String>&& value) { SetRequiredFileSystemLocationNames(std::move(value)); return *this;}

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline GetQueueResult& AddRequiredFileSystemLocationNames(const Aws::String& value) { m_requiredFileSystemLocationNames.push_back(value); return *this; }

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline GetQueueResult& AddRequiredFileSystemLocationNames(Aws::String&& value) { m_requiredFileSystemLocationNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the required file system location names in the queue.</p>
     */
    inline GetQueueResult& AddRequiredFileSystemLocationNames(const char* value) { m_requiredFileSystemLocationNames.push_back(value); return *this; }


    /**
     * <p>The IAM role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN.</p>
     */
    inline GetQueueResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN.</p>
     */
    inline GetQueueResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN.</p>
     */
    inline GetQueueResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline void SetStatus(const QueueStatus& value) { m_status = value; }

    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline void SetStatus(QueueStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline GetQueueResult& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the queue.</p> <ul> <li> <p> <code>ACTIVE</code>–The queue is
     * active.</p> </li> <li> <p> <code>SCHEDULING</code>–The queue is scheduling.</p>
     * </li> <li> <p> <code>SCHEDULING_BLOCKED</code>–The queue scheduling is blocked.
     * See the provided reason.</p> </li> </ul>
     */
    inline GetQueueResult& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetQueueResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetQueueResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetQueueResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetQueueResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetQueueResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_allowedStorageProfileIds;

    QueueBlockedReason m_blockedReason;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    DefaultQueueBudgetAction m_defaultBudgetAction;

    Aws::String m_description;

    Aws::String m_displayName;

    Aws::String m_farmId;

    JobAttachmentSettings m_jobAttachmentSettings;

    JobRunAsUser m_jobRunAsUser;

    Aws::String m_queueId;

    Aws::Vector<Aws::String> m_requiredFileSystemLocationNames;

    Aws::String m_roleArn;

    QueueStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
