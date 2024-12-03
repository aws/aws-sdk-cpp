/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/datazone/model/LineageEventProcessingStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace DataZone
{
namespace Model
{
  class GetLineageEventResult
  {
  public:
    AWS_DATAZONE_API GetLineageEventResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_DATAZONE_API GetLineageEventResult(GetLineageEventResult&&);
    AWS_DATAZONE_API GetLineageEventResult& operator=(GetLineageEventResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetLineageEventResult(const GetLineageEventResult&) = delete;
    GetLineageEventResult& operator=(const GetLineageEventResult&) = delete;


    AWS_DATAZONE_API GetLineageEventResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_DATAZONE_API GetLineageEventResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The timestamp of when the lineage event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetLineageEventResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetLineageEventResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the lineage event.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetLineageEventResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetLineageEventResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetLineageEventResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetLineageEventResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetLineageEventResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetLineageEventResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lineage event details.</p>
     */
    inline Aws::IOStream& GetEvent() const { return m_event.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_event = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The time of the lineage event.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTime = std::move(value); }
    inline GetLineageEventResult& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline GetLineageEventResult& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the lineage event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetLineageEventResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetLineageEventResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetLineageEventResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progressing status of the lineage event.</p>
     */
    inline const LineageEventProcessingStatus& GetProcessingStatus() const{ return m_processingStatus; }
    inline void SetProcessingStatus(const LineageEventProcessingStatus& value) { m_processingStatus = value; }
    inline void SetProcessingStatus(LineageEventProcessingStatus&& value) { m_processingStatus = std::move(value); }
    inline GetLineageEventResult& WithProcessingStatus(const LineageEventProcessingStatus& value) { SetProcessingStatus(value); return *this;}
    inline GetLineageEventResult& WithProcessingStatus(LineageEventProcessingStatus&& value) { SetProcessingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLineageEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLineageEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLineageEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    Aws::Utils::Stream::ResponseStream m_event;

    Aws::Utils::DateTime m_eventTime;

    Aws::String m_id;

    LineageEventProcessingStatus m_processingStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
