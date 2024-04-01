/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/HostPropertiesResponse.h>
#include <aws/deadline/model/WorkerStatus.h>
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
   * <p>The details of a worker search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WorkerSearchSummary">AWS
   * API Reference</a></p>
   */
  class WorkerSearchSummary
  {
  public:
    AWS_DEADLINE_API WorkerSearchSummary();
    AWS_DEADLINE_API WorkerSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WorkerSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline WorkerSearchSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline WorkerSearchSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline WorkerSearchSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline WorkerSearchSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline WorkerSearchSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


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
    inline WorkerSearchSummary& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline WorkerSearchSummary& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline WorkerSearchSummary& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Provides the Amazon EC2 instance properties of the worker host.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>Provides the Amazon EC2 instance properties of the worker host.</p>
     */
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }

    /**
     * <p>Provides the Amazon EC2 instance properties of the worker host.</p>
     */
    inline void SetHostProperties(const HostPropertiesResponse& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }

    /**
     * <p>Provides the Amazon EC2 instance properties of the worker host.</p>
     */
    inline void SetHostProperties(HostPropertiesResponse&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }

    /**
     * <p>Provides the Amazon EC2 instance properties of the worker host.</p>
     */
    inline WorkerSearchSummary& WithHostProperties(const HostPropertiesResponse& value) { SetHostProperties(value); return *this;}

    /**
     * <p>Provides the Amazon EC2 instance properties of the worker host.</p>
     */
    inline WorkerSearchSummary& WithHostProperties(HostPropertiesResponse&& value) { SetHostProperties(std::move(value)); return *this;}


    /**
     * <p>The status of the worker search.</p>
     */
    inline const WorkerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the worker search.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the worker search.</p>
     */
    inline void SetStatus(const WorkerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the worker search.</p>
     */
    inline void SetStatus(WorkerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the worker search.</p>
     */
    inline WorkerSearchSummary& WithStatus(const WorkerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the worker search.</p>
     */
    inline WorkerSearchSummary& WithStatus(WorkerStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline WorkerSearchSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline WorkerSearchSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


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
    inline WorkerSearchSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline WorkerSearchSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline WorkerSearchSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The worker ID.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The worker ID.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The worker ID.</p>
     */
    inline WorkerSearchSummary& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The worker ID.</p>
     */
    inline WorkerSearchSummary& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The worker ID.</p>
     */
    inline WorkerSearchSummary& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    HostPropertiesResponse m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;

    WorkerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
