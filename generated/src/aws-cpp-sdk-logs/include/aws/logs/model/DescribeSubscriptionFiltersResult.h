/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeSubscriptionFiltersResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeSubscriptionFiltersResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeSubscriptionFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeSubscriptionFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The subscription filters.</p>
     */
    inline const Aws::Vector<SubscriptionFilter>& GetSubscriptionFilters() const { return m_subscriptionFilters; }
    template<typename SubscriptionFiltersT = Aws::Vector<SubscriptionFilter>>
    void SetSubscriptionFilters(SubscriptionFiltersT&& value) { m_subscriptionFiltersHasBeenSet = true; m_subscriptionFilters = std::forward<SubscriptionFiltersT>(value); }
    template<typename SubscriptionFiltersT = Aws::Vector<SubscriptionFilter>>
    DescribeSubscriptionFiltersResult& WithSubscriptionFilters(SubscriptionFiltersT&& value) { SetSubscriptionFilters(std::forward<SubscriptionFiltersT>(value)); return *this;}
    template<typename SubscriptionFiltersT = SubscriptionFilter>
    DescribeSubscriptionFiltersResult& AddSubscriptionFilters(SubscriptionFiltersT&& value) { m_subscriptionFiltersHasBeenSet = true; m_subscriptionFilters.emplace_back(std::forward<SubscriptionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSubscriptionFiltersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSubscriptionFiltersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SubscriptionFilter> m_subscriptionFilters;
    bool m_subscriptionFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
