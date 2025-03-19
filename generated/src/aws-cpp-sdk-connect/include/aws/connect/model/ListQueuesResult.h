/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QueueSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListQueuesResult
  {
  public:
    AWS_CONNECT_API ListQueuesResult() = default;
    AWS_CONNECT_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the queues.</p>
     */
    inline const Aws::Vector<QueueSummary>& GetQueueSummaryList() const { return m_queueSummaryList; }
    template<typename QueueSummaryListT = Aws::Vector<QueueSummary>>
    void SetQueueSummaryList(QueueSummaryListT&& value) { m_queueSummaryListHasBeenSet = true; m_queueSummaryList = std::forward<QueueSummaryListT>(value); }
    template<typename QueueSummaryListT = Aws::Vector<QueueSummary>>
    ListQueuesResult& WithQueueSummaryList(QueueSummaryListT&& value) { SetQueueSummaryList(std::forward<QueueSummaryListT>(value)); return *this;}
    template<typename QueueSummaryListT = QueueSummary>
    ListQueuesResult& AddQueueSummaryList(QueueSummaryListT&& value) { m_queueSummaryListHasBeenSet = true; m_queueSummaryList.emplace_back(std::forward<QueueSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueueSummary> m_queueSummaryList;
    bool m_queueSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
