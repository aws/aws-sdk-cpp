/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeEventTypesResult
  {
  public:
    AWS_HEALTH_API DescribeEventTypesResult() = default;
    AWS_HEALTH_API DescribeEventTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypes() const { return m_eventTypes; }
    template<typename EventTypesT = Aws::Vector<Aws::String>>
    void SetEventTypes(EventTypesT&& value) { m_eventTypesHasBeenSet = true; m_eventTypes = std::forward<EventTypesT>(value); }
    template<typename EventTypesT = Aws::Vector<Aws::String>>
    DescribeEventTypesResult& WithEventTypes(EventTypesT&& value) { SetEventTypes(std::forward<EventTypesT>(value)); return *this;}
    template<typename EventTypesT = Aws::String>
    DescribeEventTypesResult& AddEventTypes(EventTypesT&& value) { m_eventTypesHasBeenSet = true; m_eventTypes.emplace_back(std::forward<EventTypesT>(value)); return *this; }
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
    DescribeEventTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventTypes;
    bool m_eventTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
