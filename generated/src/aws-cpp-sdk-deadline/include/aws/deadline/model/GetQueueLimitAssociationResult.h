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
  class GetQueueLimitAssociationResult
  {
  public:
    AWS_DEADLINE_API GetQueueLimitAssociationResult();
    AWS_DEADLINE_API GetQueueLimitAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetQueueLimitAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetQueueLimitAssociationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetQueueLimitAssociationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetQueueLimitAssociationResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetQueueLimitAssociationResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetQueueLimitAssociationResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp of the date and time that the association was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetQueueLimitAssociationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetQueueLimitAssociationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier of the person that last updated the association.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetQueueLimitAssociationResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetQueueLimitAssociationResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetQueueLimitAssociationResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the queue associated with the limit.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline void SetQueueId(const Aws::String& value) { m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueId.assign(value); }
    inline GetQueueLimitAssociationResult& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline GetQueueLimitAssociationResult& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline GetQueueLimitAssociationResult& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit associated with the queue.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline void SetLimitId(const Aws::String& value) { m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitId.assign(value); }
    inline GetQueueLimitAssociationResult& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline GetQueueLimitAssociationResult& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline GetQueueLimitAssociationResult& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the limit.</p>
     */
    inline const QueueLimitAssociationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const QueueLimitAssociationStatus& value) { m_status = value; }
    inline void SetStatus(QueueLimitAssociationStatus&& value) { m_status = std::move(value); }
    inline GetQueueLimitAssociationResult& WithStatus(const QueueLimitAssociationStatus& value) { SetStatus(value); return *this;}
    inline GetQueueLimitAssociationResult& WithStatus(QueueLimitAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueueLimitAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueueLimitAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueueLimitAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_queueId;

    Aws::String m_limitId;

    QueueLimitAssociationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
