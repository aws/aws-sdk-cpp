/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/StreamSessionSummary.h>
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
namespace IVS
{
namespace Model
{
  class ListStreamSessionsResult
  {
  public:
    AWS_IVS_API ListStreamSessionsResult() = default;
    AWS_IVS_API ListStreamSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListStreamSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more streams than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of stream sessions.</p>
     */
    inline const Aws::Vector<StreamSessionSummary>& GetStreamSessions() const { return m_streamSessions; }
    template<typename StreamSessionsT = Aws::Vector<StreamSessionSummary>>
    void SetStreamSessions(StreamSessionsT&& value) { m_streamSessionsHasBeenSet = true; m_streamSessions = std::forward<StreamSessionsT>(value); }
    template<typename StreamSessionsT = Aws::Vector<StreamSessionSummary>>
    ListStreamSessionsResult& WithStreamSessions(StreamSessionsT&& value) { SetStreamSessions(std::forward<StreamSessionsT>(value)); return *this;}
    template<typename StreamSessionsT = StreamSessionSummary>
    ListStreamSessionsResult& AddStreamSessions(StreamSessionsT&& value) { m_streamSessionsHasBeenSet = true; m_streamSessions.emplace_back(std::forward<StreamSessionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStreamSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StreamSessionSummary> m_streamSessions;
    bool m_streamSessionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
