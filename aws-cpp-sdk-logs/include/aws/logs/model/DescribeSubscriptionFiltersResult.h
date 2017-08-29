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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/SubscriptionFilter.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API DescribeSubscriptionFiltersResult
  {
  public:
    DescribeSubscriptionFiltersResult();
    DescribeSubscriptionFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSubscriptionFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The subscription filters.</p>
     */
    inline const Aws::Vector<SubscriptionFilter>& GetSubscriptionFilters() const{ return m_subscriptionFilters; }

    /**
     * <p>The subscription filters.</p>
     */
    inline void SetSubscriptionFilters(const Aws::Vector<SubscriptionFilter>& value) { m_subscriptionFilters = value; }

    /**
     * <p>The subscription filters.</p>
     */
    inline void SetSubscriptionFilters(Aws::Vector<SubscriptionFilter>&& value) { m_subscriptionFilters = std::move(value); }

    /**
     * <p>The subscription filters.</p>
     */
    inline DescribeSubscriptionFiltersResult& WithSubscriptionFilters(const Aws::Vector<SubscriptionFilter>& value) { SetSubscriptionFilters(value); return *this;}

    /**
     * <p>The subscription filters.</p>
     */
    inline DescribeSubscriptionFiltersResult& WithSubscriptionFilters(Aws::Vector<SubscriptionFilter>&& value) { SetSubscriptionFilters(std::move(value)); return *this;}

    /**
     * <p>The subscription filters.</p>
     */
    inline DescribeSubscriptionFiltersResult& AddSubscriptionFilters(const SubscriptionFilter& value) { m_subscriptionFilters.push_back(value); return *this; }

    /**
     * <p>The subscription filters.</p>
     */
    inline DescribeSubscriptionFiltersResult& AddSubscriptionFilters(SubscriptionFilter&& value) { m_subscriptionFilters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeSubscriptionFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeSubscriptionFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeSubscriptionFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SubscriptionFilter> m_subscriptionFilters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
