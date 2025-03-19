/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/StageSessionSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListStageSessionsResult
  {
  public:
    AWS_IVSREALTIME_API ListStageSessionsResult() = default;
    AWS_IVSREALTIME_API ListStageSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListStageSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of matching stage sessions.</p>
     */
    inline const Aws::Vector<StageSessionSummary>& GetStageSessions() const { return m_stageSessions; }
    template<typename StageSessionsT = Aws::Vector<StageSessionSummary>>
    void SetStageSessions(StageSessionsT&& value) { m_stageSessionsHasBeenSet = true; m_stageSessions = std::forward<StageSessionsT>(value); }
    template<typename StageSessionsT = Aws::Vector<StageSessionSummary>>
    ListStageSessionsResult& WithStageSessions(StageSessionsT&& value) { SetStageSessions(std::forward<StageSessionsT>(value)); return *this;}
    template<typename StageSessionsT = StageSessionSummary>
    ListStageSessionsResult& AddStageSessions(StageSessionsT&& value) { m_stageSessionsHasBeenSet = true; m_stageSessions.emplace_back(std::forward<StageSessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStageSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStageSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StageSessionSummary> m_stageSessions;
    bool m_stageSessionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
