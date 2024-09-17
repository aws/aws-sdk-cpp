/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/QueueFleetAssociationStatus.h>
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
  class GetQueueFleetAssociationResult
  {
  public:
    AWS_DEADLINE_API GetQueueFleetAssociationResult();
    AWS_DEADLINE_API GetQueueFleetAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetQueueFleetAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The queue ID for the queue-fleet association.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline void SetQueueId(const Aws::String& value) { m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueId.assign(value); }
    inline GetQueueFleetAssociationResult& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline GetQueueFleetAssociationResult& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline GetQueueFleetAssociationResult& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID for the queue-fleet association.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline GetQueueFleetAssociationResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline GetQueueFleetAssociationResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline GetQueueFleetAssociationResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the queue-fleet association.</p>
     */
    inline const QueueFleetAssociationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const QueueFleetAssociationStatus& value) { m_status = value; }
    inline void SetStatus(QueueFleetAssociationStatus&& value) { m_status = std::move(value); }
    inline GetQueueFleetAssociationResult& WithStatus(const QueueFleetAssociationStatus& value) { SetStatus(value); return *this;}
    inline GetQueueFleetAssociationResult& WithStatus(QueueFleetAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetQueueFleetAssociationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetQueueFleetAssociationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetQueueFleetAssociationResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetQueueFleetAssociationResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetQueueFleetAssociationResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetQueueFleetAssociationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetQueueFleetAssociationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetQueueFleetAssociationResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetQueueFleetAssociationResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetQueueFleetAssociationResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueueFleetAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueueFleetAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueueFleetAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queueId;

    Aws::String m_fleetId;

    QueueFleetAssociationStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
