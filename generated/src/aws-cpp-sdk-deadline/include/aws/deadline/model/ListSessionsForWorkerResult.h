/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/WorkerSessionSummary.h>
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
  class ListSessionsForWorkerResult
  {
  public:
    AWS_DEADLINE_API ListSessionsForWorkerResult();
    AWS_DEADLINE_API ListSessionsForWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListSessionsForWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline ListSessionsForWorkerResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline ListSessionsForWorkerResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline ListSessionsForWorkerResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The sessions in the response.</p>
     */
    inline const Aws::Vector<WorkerSessionSummary>& GetSessions() const{ return m_sessions; }

    /**
     * <p>The sessions in the response.</p>
     */
    inline void SetSessions(const Aws::Vector<WorkerSessionSummary>& value) { m_sessions = value; }

    /**
     * <p>The sessions in the response.</p>
     */
    inline void SetSessions(Aws::Vector<WorkerSessionSummary>&& value) { m_sessions = std::move(value); }

    /**
     * <p>The sessions in the response.</p>
     */
    inline ListSessionsForWorkerResult& WithSessions(const Aws::Vector<WorkerSessionSummary>& value) { SetSessions(value); return *this;}

    /**
     * <p>The sessions in the response.</p>
     */
    inline ListSessionsForWorkerResult& WithSessions(Aws::Vector<WorkerSessionSummary>&& value) { SetSessions(std::move(value)); return *this;}

    /**
     * <p>The sessions in the response.</p>
     */
    inline ListSessionsForWorkerResult& AddSessions(const WorkerSessionSummary& value) { m_sessions.push_back(value); return *this; }

    /**
     * <p>The sessions in the response.</p>
     */
    inline ListSessionsForWorkerResult& AddSessions(WorkerSessionSummary&& value) { m_sessions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSessionsForWorkerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSessionsForWorkerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSessionsForWorkerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkerSessionSummary> m_sessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
