/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DEADLINE_API ListSessionsForWorkerResult() = default;
    AWS_DEADLINE_API ListSessionsForWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListSessionsForWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sessions in the response.</p>
     */
    inline const Aws::Vector<WorkerSessionSummary>& GetSessions() const { return m_sessions; }
    template<typename SessionsT = Aws::Vector<WorkerSessionSummary>>
    void SetSessions(SessionsT&& value) { m_sessionsHasBeenSet = true; m_sessions = std::forward<SessionsT>(value); }
    template<typename SessionsT = Aws::Vector<WorkerSessionSummary>>
    ListSessionsForWorkerResult& WithSessions(SessionsT&& value) { SetSessions(std::forward<SessionsT>(value)); return *this;}
    template<typename SessionsT = WorkerSessionSummary>
    ListSessionsForWorkerResult& AddSessions(SessionsT&& value) { m_sessionsHasBeenSet = true; m_sessions.emplace_back(std::forward<SessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSessionsForWorkerResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSessionsForWorkerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkerSessionSummary> m_sessions;
    bool m_sessionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
