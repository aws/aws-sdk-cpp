/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/QueueLimitAssociationStatus.h>
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
   * <p>Provides information about the association between a queue and a
   * limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/QueueLimitAssociationSummary">AWS
   * API Reference</a></p>
   */
  class QueueLimitAssociationSummary
  {
  public:
    AWS_DEADLINE_API QueueLimitAssociationSummary();
    AWS_DEADLINE_API QueueLimitAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API QueueLimitAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline QueueLimitAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline QueueLimitAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline QueueLimitAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline QueueLimitAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline QueueLimitAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the association was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline QueueLimitAssociationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline QueueLimitAssociationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that updated the association.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline QueueLimitAssociationSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline QueueLimitAssociationSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline QueueLimitAssociationSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the queue in the association.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline QueueLimitAssociationSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline QueueLimitAssociationSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline QueueLimitAssociationSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit in the association.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline bool LimitIdHasBeenSet() const { return m_limitIdHasBeenSet; }
    inline void SetLimitId(const Aws::String& value) { m_limitIdHasBeenSet = true; m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitIdHasBeenSet = true; m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitIdHasBeenSet = true; m_limitId.assign(value); }
    inline QueueLimitAssociationSummary& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline QueueLimitAssociationSummary& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline QueueLimitAssociationSummary& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of task scheduling in the queue-limit association.</p> <ul> <li>
     * <p> <code>ACTIVE</code> - Association is active.</p> </li> <li> <p>
     * <code>STOP_LIMIT_USAGE_AND_COMPLETE_TASKS</code> - Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_LIMIT_USAGE_AND_CANCEL_TASKS</code> - Association has stopped
     * scheduling new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code> - Association has been stopped.</p> </li> </ul>
     */
    inline const QueueLimitAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const QueueLimitAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(QueueLimitAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline QueueLimitAssociationSummary& WithStatus(const QueueLimitAssociationStatus& value) { SetStatus(value); return *this;}
    inline QueueLimitAssociationSummary& WithStatus(QueueLimitAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;

    QueueLimitAssociationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
