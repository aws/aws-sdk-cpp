/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventAggregate.h>
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
namespace Health
{
namespace Model
{
  class DescribeEventAggregatesResult
  {
  public:
    AWS_HEALTH_API DescribeEventAggregatesResult() = default;
    AWS_HEALTH_API DescribeEventAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline const Aws::Vector<EventAggregate>& GetEventAggregates() const { return m_eventAggregates; }
    template<typename EventAggregatesT = Aws::Vector<EventAggregate>>
    void SetEventAggregates(EventAggregatesT&& value) { m_eventAggregatesHasBeenSet = true; m_eventAggregates = std::forward<EventAggregatesT>(value); }
    template<typename EventAggregatesT = Aws::Vector<EventAggregate>>
    DescribeEventAggregatesResult& WithEventAggregates(EventAggregatesT&& value) { SetEventAggregates(std::forward<EventAggregatesT>(value)); return *this;}
    template<typename EventAggregatesT = EventAggregate>
    DescribeEventAggregatesResult& AddEventAggregates(EventAggregatesT&& value) { m_eventAggregatesHasBeenSet = true; m_eventAggregates.emplace_back(std::forward<EventAggregatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEventAggregatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventAggregatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventAggregate> m_eventAggregates;
    bool m_eventAggregatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
