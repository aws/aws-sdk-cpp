/**
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
    inline GetWorkerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetWorkerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline GetWorkerResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetWorkerResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetWorkerResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline GetWorkerResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline GetWorkerResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline GetWorkerResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The fleet ID.</p>
     */
    inline GetWorkerResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline GetWorkerResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID.</p>
     */
    inline GetWorkerResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The host properties for the worker.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>The host properties for the worker.</p>
     */
    inline void SetHostProperties(const HostPropertiesResponse& value) { m_hostProperties = value; }

    /**
     * <p>The host properties for the worker.</p>
     */
    inline void SetHostProperties(HostPropertiesResponse&& value) { m_hostProperties = std::move(value); }

    /**
     * <p>The host properties for the worker.</p>
     */
    inline GetWorkerResult& WithHostProperties(const HostPropertiesResponse& value) { SetHostProperties(value); return *this;}

    /**
     * <p>The host properties for the worker.</p>
     */
    inline GetWorkerResult& WithHostProperties(HostPropertiesResponse&& value) { SetHostProperties(std::move(value)); return *this;}


    /**
     * <p>The logs for the associated worker.</p>
     */
    inline const LogConfiguration& GetLog() const{ return m_log; }

    /**
     * <p>The logs for the associated worker.</p>
     */
    inline void SetLog(const LogConfiguration& value) { m_log = value; }

    /**
     * <p>The logs for the associated worker.</p>
     */
    inline void SetLog(LogConfiguration&& value) { m_log = std::move(value); }

    /**
     * <p>The logs for the associated worker.</p>
     */
    inline GetWorkerResult& WithLog(const LogConfiguration& value) { SetLog(value); return *this;}

    /**
     * <p>The logs for the associated worker.</p>
     */
    inline GetWorkerResult& WithLog(LogConfiguration&& value) { SetLog(std::move(value)); return *this;}


    /**
     * <p>The status of the worker.</p>
     */
    inline const WorkerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the worker.</p>
     */
    inline void SetStatus(const WorkerStatus& value) { m_status = value; }

    /**
     * <p>The status of the worker.</p>
     */
    inline void SetStatus(WorkerStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the worker.</p>
     */
    inline GetWorkerResult& WithStatus(const WorkerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the worker.</p>
     */
    inline GetWorkerResult& WithStatus(WorkerStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline GetWorkerResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetWorkerResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


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
    inline GetWorkerResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetWorkerResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetWorkerResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The worker ID.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerId = value; }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerId = std::move(value); }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerId.assign(value); }

    /**
     * <p>The worker ID.</p>
     */
    inline GetWorkerResult& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The worker ID.</p>
     */
    inline GetWorkerResult& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The worker ID.</p>
     */
    inline GetWorkerResult& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_farmId;

    Aws::String m_fleetId;

    HostPropertiesResponse m_hostProperties;

    LogConfiguration m_log;

    WorkerStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_workerId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
