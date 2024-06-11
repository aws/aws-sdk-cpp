﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/HostPropertiesResponse.h>
#include <aws/deadline/model/LogConfiguration.h>
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
   * <p>The summary of details for a worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WorkerSummary">AWS
   * API Reference</a></p>
   */
  class WorkerSummary
  {
  public:
    AWS_DEADLINE_API WorkerSummary();
    AWS_DEADLINE_API WorkerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WorkerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline WorkerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline WorkerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline WorkerSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline WorkerSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline WorkerSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline WorkerSummary& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline WorkerSummary& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline WorkerSummary& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline WorkerSummary& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline WorkerSummary& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline WorkerSummary& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host properties of the worker.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const{ return m_hostProperties; }
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }
    inline void SetHostProperties(const HostPropertiesResponse& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }
    inline void SetHostProperties(HostPropertiesResponse&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }
    inline WorkerSummary& WithHostProperties(const HostPropertiesResponse& value) { SetHostProperties(value); return *this;}
    inline WorkerSummary& WithHostProperties(HostPropertiesResponse&& value) { SetHostProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration for the worker.</p>
     */
    inline const LogConfiguration& GetLog() const{ return m_log; }
    inline bool LogHasBeenSet() const { return m_logHasBeenSet; }
    inline void SetLog(const LogConfiguration& value) { m_logHasBeenSet = true; m_log = value; }
    inline void SetLog(LogConfiguration&& value) { m_logHasBeenSet = true; m_log = std::move(value); }
    inline WorkerSummary& WithLog(const LogConfiguration& value) { SetLog(value); return *this;}
    inline WorkerSummary& WithLog(LogConfiguration&& value) { SetLog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the worker.</p>
     */
    inline const WorkerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkerSummary& WithStatus(const WorkerStatus& value) { SetStatus(value); return *this;}
    inline WorkerSummary& WithStatus(WorkerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline WorkerSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline WorkerSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline WorkerSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline WorkerSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline WorkerSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline WorkerSummary& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline WorkerSummary& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline WorkerSummary& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    HostPropertiesResponse m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;

    LogConfiguration m_log;
    bool m_logHasBeenSet = false;

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
