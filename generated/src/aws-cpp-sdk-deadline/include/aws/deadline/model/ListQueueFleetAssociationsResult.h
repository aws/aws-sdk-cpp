/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/QueueFleetAssociationSummary.h>
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
  class ListQueueFleetAssociationsResult
  {
  public:
    AWS_DEADLINE_API ListQueueFleetAssociationsResult() = default;
    AWS_DEADLINE_API ListQueueFleetAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListQueueFleetAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The queue-fleet associations on the list.</p>
     */
    inline const Aws::Vector<QueueFleetAssociationSummary>& GetQueueFleetAssociations() const { return m_queueFleetAssociations; }
    template<typename QueueFleetAssociationsT = Aws::Vector<QueueFleetAssociationSummary>>
    void SetQueueFleetAssociations(QueueFleetAssociationsT&& value) { m_queueFleetAssociationsHasBeenSet = true; m_queueFleetAssociations = std::forward<QueueFleetAssociationsT>(value); }
    template<typename QueueFleetAssociationsT = Aws::Vector<QueueFleetAssociationSummary>>
    ListQueueFleetAssociationsResult& WithQueueFleetAssociations(QueueFleetAssociationsT&& value) { SetQueueFleetAssociations(std::forward<QueueFleetAssociationsT>(value)); return *this;}
    template<typename QueueFleetAssociationsT = QueueFleetAssociationSummary>
    ListQueueFleetAssociationsResult& AddQueueFleetAssociations(QueueFleetAssociationsT&& value) { m_queueFleetAssociationsHasBeenSet = true; m_queueFleetAssociations.emplace_back(std::forward<QueueFleetAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain, then
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an HTTP 400 <code>ValidationException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueueFleetAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueueFleetAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueueFleetAssociationSummary> m_queueFleetAssociations;
    bool m_queueFleetAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
