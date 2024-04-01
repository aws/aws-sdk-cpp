/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/QueueFleetAssociationStatus.h>
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
   * <p>The details of a queue-fleet association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/QueueFleetAssociationSummary">AWS
   * API Reference</a></p>
   */
  class QueueFleetAssociationSummary
  {
  public:
    AWS_DEADLINE_API QueueFleetAssociationSummary();
    AWS_DEADLINE_API QueueFleetAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API QueueFleetAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline QueueFleetAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline QueueFleetAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline QueueFleetAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline QueueFleetAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline QueueFleetAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline QueueFleetAssociationSummary& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline QueueFleetAssociationSummary& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline QueueFleetAssociationSummary& WithFleetId(const char* value) { SetFleetId(value); return *this;}


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
    inline QueueFleetAssociationSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline QueueFleetAssociationSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline QueueFleetAssociationSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The status of task scheduling in the queue-fleet association.</p> <ul> <li>
     * <p> <code>ACTIVE</code>–Association is active.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_COMPLETE_TASKS</code>–Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_CANCEL_TASKS</code>–Association has stopped scheduling
     * new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code>–Association has been stopped.</p> </li> </ul>
     */
    inline const QueueFleetAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of task scheduling in the queue-fleet association.</p> <ul> <li>
     * <p> <code>ACTIVE</code>–Association is active.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_COMPLETE_TASKS</code>–Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_CANCEL_TASKS</code>–Association has stopped scheduling
     * new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code>–Association has been stopped.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of task scheduling in the queue-fleet association.</p> <ul> <li>
     * <p> <code>ACTIVE</code>–Association is active.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_COMPLETE_TASKS</code>–Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_CANCEL_TASKS</code>–Association has stopped scheduling
     * new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code>–Association has been stopped.</p> </li> </ul>
     */
    inline void SetStatus(const QueueFleetAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of task scheduling in the queue-fleet association.</p> <ul> <li>
     * <p> <code>ACTIVE</code>–Association is active.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_COMPLETE_TASKS</code>–Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_CANCEL_TASKS</code>–Association has stopped scheduling
     * new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code>–Association has been stopped.</p> </li> </ul>
     */
    inline void SetStatus(QueueFleetAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of task scheduling in the queue-fleet association.</p> <ul> <li>
     * <p> <code>ACTIVE</code>–Association is active.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_COMPLETE_TASKS</code>–Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_CANCEL_TASKS</code>–Association has stopped scheduling
     * new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code>–Association has been stopped.</p> </li> </ul>
     */
    inline QueueFleetAssociationSummary& WithStatus(const QueueFleetAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of task scheduling in the queue-fleet association.</p> <ul> <li>
     * <p> <code>ACTIVE</code>–Association is active.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_COMPLETE_TASKS</code>–Association has stopped
     * scheduling new tasks and is completing current tasks.</p> </li> <li> <p>
     * <code>STOP_SCHEDULING_AND_CANCEL_TASKS</code>–Association has stopped scheduling
     * new tasks and is canceling current tasks.</p> </li> <li> <p>
     * <code>STOPPED</code>–Association has been stopped.</p> </li> </ul>
     */
    inline QueueFleetAssociationSummary& WithStatus(QueueFleetAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline QueueFleetAssociationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline QueueFleetAssociationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


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
    inline QueueFleetAssociationSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline QueueFleetAssociationSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline QueueFleetAssociationSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    QueueFleetAssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
