/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/HostPropertiesResponse.h>
#include <aws/deadline/model/WorkerStatus.h>
#include <aws/deadline/model/LogConfiguration.h>
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
  class GetWorkerResult
  {
  public:
    AWS_DEADLINE_API GetWorkerResult();
    AWS_DEADLINE_API GetWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The worker ID.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline void SetWorkerId(const Aws::String& value) { m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerId.assign(value); }
    inline GetWorkerResult& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline GetWorkerResult& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline GetWorkerResult& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }
    inline GetWorkerResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetWorkerResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetWorkerResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline GetWorkerResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline GetWorkerResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline GetWorkerResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host properties for the worker.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const{ return m_hostProperties; }
    inline void SetHostProperties(const HostPropertiesResponse& value) { m_hostProperties = value; }
    inline void SetHostProperties(HostPropertiesResponse&& value) { m_hostProperties = std::move(value); }
    inline GetWorkerResult& WithHostProperties(const HostPropertiesResponse& value) { SetHostProperties(value); return *this;}
    inline GetWorkerResult& WithHostProperties(HostPropertiesResponse&& value) { SetHostProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the worker.</p>
     */
    inline const WorkerStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkerStatus& value) { m_status = value; }
    inline void SetStatus(WorkerStatus&& value) { m_status = std::move(value); }
    inline GetWorkerResult& WithStatus(const WorkerStatus& value) { SetStatus(value); return *this;}
    inline GetWorkerResult& WithStatus(WorkerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logs for the associated worker.</p>
     */
    inline const LogConfiguration& GetLog() const{ return m_log; }
    inline void SetLog(const LogConfiguration& value) { m_log = value; }
    inline void SetLog(LogConfiguration&& value) { m_log = std::move(value); }
    inline GetWorkerResult& WithLog(const LogConfiguration& value) { SetLog(value); return *this;}
    inline GetWorkerResult& WithLog(LogConfiguration&& value) { SetLog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetWorkerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetWorkerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetWorkerResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetWorkerResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetWorkerResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetWorkerResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetWorkerResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetWorkerResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetWorkerResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetWorkerResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workerId;

    Aws::String m_farmId;

    Aws::String m_fleetId;

    HostPropertiesResponse m_hostProperties;

    WorkerStatus m_status;

    LogConfiguration m_log;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
