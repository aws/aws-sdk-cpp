﻿/**
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
    AWS_HEALTH_API DescribeEventAggregatesResult();
    AWS_HEALTH_API DescribeEventAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline const Aws::Vector<EventAggregate>& GetEventAggregates() const{ return m_eventAggregates; }
    inline void SetEventAggregates(const Aws::Vector<EventAggregate>& value) { m_eventAggregates = value; }
    inline void SetEventAggregates(Aws::Vector<EventAggregate>&& value) { m_eventAggregates = std::move(value); }
    inline DescribeEventAggregatesResult& WithEventAggregates(const Aws::Vector<EventAggregate>& value) { SetEventAggregates(value); return *this;}
    inline DescribeEventAggregatesResult& WithEventAggregates(Aws::Vector<EventAggregate>&& value) { SetEventAggregates(std::move(value)); return *this;}
    inline DescribeEventAggregatesResult& AddEventAggregates(const EventAggregate& value) { m_eventAggregates.push_back(value); return *this; }
    inline DescribeEventAggregatesResult& AddEventAggregates(EventAggregate&& value) { m_eventAggregates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeEventAggregatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEventAggregatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEventAggregatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEventAggregatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEventAggregatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEventAggregatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventAggregate> m_eventAggregates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
