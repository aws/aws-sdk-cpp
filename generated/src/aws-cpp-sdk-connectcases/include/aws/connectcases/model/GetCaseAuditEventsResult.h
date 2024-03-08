/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/AuditEvent.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetCaseAuditEventsResult
  {
  public:
    AWS_CONNECTCASES_API GetCaseAuditEventsResult();
    AWS_CONNECTCASES_API GetCaseAuditEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetCaseAuditEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline const Aws::Vector<AuditEvent>& GetAuditEvents() const{ return m_auditEvents; }

    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline void SetAuditEvents(const Aws::Vector<AuditEvent>& value) { m_auditEvents = value; }

    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline void SetAuditEvents(Aws::Vector<AuditEvent>&& value) { m_auditEvents = std::move(value); }

    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline GetCaseAuditEventsResult& WithAuditEvents(const Aws::Vector<AuditEvent>& value) { SetAuditEvents(value); return *this;}

    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline GetCaseAuditEventsResult& WithAuditEvents(Aws::Vector<AuditEvent>&& value) { SetAuditEvents(std::move(value)); return *this;}

    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline GetCaseAuditEventsResult& AddAuditEvents(const AuditEvent& value) { m_auditEvents.push_back(value); return *this; }

    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline GetCaseAuditEventsResult& AddAuditEvents(AuditEvent&& value) { m_auditEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline GetCaseAuditEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline GetCaseAuditEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline GetCaseAuditEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCaseAuditEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCaseAuditEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCaseAuditEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AuditEvent> m_auditEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
