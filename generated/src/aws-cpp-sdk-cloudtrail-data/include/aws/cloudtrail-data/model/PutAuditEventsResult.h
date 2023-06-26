/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail-data/model/ResultErrorEntry.h>
#include <aws/cloudtrail-data/model/AuditEventResultEntry.h>
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
namespace CloudTrailData
{
namespace Model
{
  class PutAuditEventsResult
  {
  public:
    AWS_CLOUDTRAILDATA_API PutAuditEventsResult();
    AWS_CLOUDTRAILDATA_API PutAuditEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAILDATA_API PutAuditEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline const Aws::Vector<ResultErrorEntry>& GetFailed() const{ return m_failed; }

    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline void SetFailed(const Aws::Vector<ResultErrorEntry>& value) { m_failed = value; }

    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline void SetFailed(Aws::Vector<ResultErrorEntry>&& value) { m_failed = std::move(value); }

    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline PutAuditEventsResult& WithFailed(const Aws::Vector<ResultErrorEntry>& value) { SetFailed(value); return *this;}

    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline PutAuditEventsResult& WithFailed(Aws::Vector<ResultErrorEntry>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline PutAuditEventsResult& AddFailed(const ResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>Lists events in the provided event payload that could not be ingested into
     * CloudTrail, and includes the error code and error message returned for events
     * that could not be ingested.</p>
     */
    inline PutAuditEventsResult& AddFailed(ResultErrorEntry&& value) { m_failed.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline const Aws::Vector<AuditEventResultEntry>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline void SetSuccessful(const Aws::Vector<AuditEventResultEntry>& value) { m_successful = value; }

    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline void SetSuccessful(Aws::Vector<AuditEventResultEntry>&& value) { m_successful = std::move(value); }

    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline PutAuditEventsResult& WithSuccessful(const Aws::Vector<AuditEventResultEntry>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline PutAuditEventsResult& WithSuccessful(Aws::Vector<AuditEventResultEntry>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline PutAuditEventsResult& AddSuccessful(const AuditEventResultEntry& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>Lists events in the provided event payload that were successfully ingested
     * into CloudTrail.</p>
     */
    inline PutAuditEventsResult& AddSuccessful(AuditEventResultEntry&& value) { m_successful.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutAuditEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutAuditEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutAuditEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResultErrorEntry> m_failed;

    Aws::Vector<AuditEventResultEntry> m_successful;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws
