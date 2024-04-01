/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/QueueBlockedReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/DefaultQueueBudgetAction.h>
#include <aws/deadline/model/QueueStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a queue summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/QueueSummary">AWS
   * API Reference</a></p>
   */
  class QueueSummary
  {
  public:
    AWS_DEADLINE_API QueueSummary();
    AWS_DEADLINE_API QueueSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API QueueSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason the queue is blocked, if applicable.</p>
     */
    inline const QueueBlockedReason& GetBlockedReason() const{ return m_blockedReason; }

    /**
     * <p>The reason the queue is blocked, if applicable.</p>
     */
    inline bool BlockedReasonHasBeenSet() const { return m_blockedReasonHasBeenSet; }

    /**
     * <p>The reason the queue is blocked, if applicable.</p>
     */
    inline void SetBlockedReason(const QueueBlockedReason& value) { m_blockedReasonHasBeenSet = true; m_blockedReason = value; }

    /**
     * <p>The reason the queue is blocked, if applicable.</p>
     */
    inline void SetBlockedReason(QueueBlockedReason&& value) { m_blockedReasonHasBeenSet = true; m_blockedReason = std::move(value); }

    /**
     * <p>The reason the queue is blocked, if applicable.</p>
     */
    inline QueueSummary& WithBlockedReason(const QueueBlockedReason& value) { SetBlockedReason(value); return *this;}

    /**
     * <p>The reason the queue is blocked, if applicable.</p>
     */
    inline QueueSummary& WithBlockedReason(QueueBlockedReason&& value) { SetBlockedReason(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline QueueSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline QueueSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline QueueSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline QueueSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline QueueSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The default action taken on a queue summary if a budget wasn't
     * configured.</p>
     */
    inline const DefaultQueueBudgetAction& GetDefaultBudgetAction() const{ return m_defaultBudgetAction; }

    /**
     * <p>The default action taken on a queue summary if a budget wasn't
     * configured.</p>
     */
    inline bool DefaultBudgetActionHasBeenSet() const { return m_defaultBudgetActionHasBeenSet; }

    /**
     * <p>The default action taken on a queue summary if a budget wasn't
     * configured.</p>
     */
    inline void SetDefaultBudgetAction(const DefaultQueueBudgetAction& value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = value; }

    /**
     * <p>The default action taken on a queue summary if a budget wasn't
     * configured.</p>
     */
    inline void SetDefaultBudgetAction(DefaultQueueBudgetAction&& value) { m_defaultBudgetActionHasBeenSet = true; m_defaultBudgetAction = std::move(value); }

    /**
     * <p>The default action taken on a queue summary if a budget wasn't
     * configured.</p>
     */
    inline QueueSummary& WithDefaultBudgetAction(const DefaultQueueBudgetAction& value) { SetDefaultBudgetAction(value); return *this;}

    /**
     * <p>The default action taken on a queue summary if a budget wasn't
     * configured.</p>
     */
    inline QueueSummary& WithDefaultBudgetAction(DefaultQueueBudgetAction&& value) { SetDefaultBudgetAction(std::move(value)); return *this;}


    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline QueueSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline QueueSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the queue summary to update.</p>
     */
    inline QueueSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline QueueSummary& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline QueueSummary& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline QueueSummary& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue ID.</p>
     */
    inline QueueSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline QueueSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline QueueSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>That status of the queue.</p>
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }

    /**
     * <p>That status of the queue.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>That status of the queue.</p>
     */
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>That status of the queue.</p>
     */
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>That status of the queue.</p>
     */
    inline QueueSummary& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>That status of the queue.</p>
     */
    inline QueueSummary& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline QueueSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline QueueSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline QueueSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline QueueSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline QueueSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    QueueBlockedReason m_blockedReason;
    bool m_blockedReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    DefaultQueueBudgetAction m_defaultBudgetAction;
    bool m_defaultBudgetActionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    QueueStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
