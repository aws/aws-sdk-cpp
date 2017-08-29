/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_HEALTH_API DescribeEventAggregatesResult
  {
  public:
    DescribeEventAggregatesResult();
    DescribeEventAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEventAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline const Aws::Vector<EventAggregate>& GetEventAggregates() const{ return m_eventAggregates; }

    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline void SetEventAggregates(const Aws::Vector<EventAggregate>& value) { m_eventAggregates = value; }

    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline void SetEventAggregates(Aws::Vector<EventAggregate>&& value) { m_eventAggregates = std::move(value); }

    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline DescribeEventAggregatesResult& WithEventAggregates(const Aws::Vector<EventAggregate>& value) { SetEventAggregates(value); return *this;}

    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline DescribeEventAggregatesResult& WithEventAggregates(Aws::Vector<EventAggregate>&& value) { SetEventAggregates(std::move(value)); return *this;}

    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline DescribeEventAggregatesResult& AddEventAggregates(const EventAggregate& value) { m_eventAggregates.push_back(value); return *this; }

    /**
     * <p>The number of events in each category that meet the optional filter
     * criteria.</p>
     */
    inline DescribeEventAggregatesResult& AddEventAggregates(EventAggregate&& value) { m_eventAggregates.push_back(std::move(value)); return *this; }


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventAggregatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventAggregatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventAggregatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventAggregate> m_eventAggregates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
