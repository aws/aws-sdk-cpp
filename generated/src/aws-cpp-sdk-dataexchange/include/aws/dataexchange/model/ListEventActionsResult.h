/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/EventActionEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListEventActionsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListEventActionsResult() = default;
    AWS_DATAEXCHANGE_API ListEventActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListEventActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline const Aws::Vector<EventActionEntry>& GetEventActions() const { return m_eventActions; }
    template<typename EventActionsT = Aws::Vector<EventActionEntry>>
    void SetEventActions(EventActionsT&& value) { m_eventActionsHasBeenSet = true; m_eventActions = std::forward<EventActionsT>(value); }
    template<typename EventActionsT = Aws::Vector<EventActionEntry>>
    ListEventActionsResult& WithEventActions(EventActionsT&& value) { SetEventActions(std::forward<EventActionsT>(value)); return *this;}
    template<typename EventActionsT = EventActionEntry>
    ListEventActionsResult& AddEventActions(EventActionsT&& value) { m_eventActionsHasBeenSet = true; m_eventActions.emplace_back(std::forward<EventActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventActionEntry> m_eventActions;
    bool m_eventActionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
