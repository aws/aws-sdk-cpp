/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UsageReportSubscription.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeUsageReportSubscriptionsResult
  {
  public:
    AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult() = default;
    AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline const Aws::Vector<UsageReportSubscription>& GetUsageReportSubscriptions() const { return m_usageReportSubscriptions; }
    template<typename UsageReportSubscriptionsT = Aws::Vector<UsageReportSubscription>>
    void SetUsageReportSubscriptions(UsageReportSubscriptionsT&& value) { m_usageReportSubscriptionsHasBeenSet = true; m_usageReportSubscriptions = std::forward<UsageReportSubscriptionsT>(value); }
    template<typename UsageReportSubscriptionsT = Aws::Vector<UsageReportSubscription>>
    DescribeUsageReportSubscriptionsResult& WithUsageReportSubscriptions(UsageReportSubscriptionsT&& value) { SetUsageReportSubscriptions(std::forward<UsageReportSubscriptionsT>(value)); return *this;}
    template<typename UsageReportSubscriptionsT = UsageReportSubscription>
    DescribeUsageReportSubscriptionsResult& AddUsageReportSubscriptions(UsageReportSubscriptionsT&& value) { m_usageReportSubscriptionsHasBeenSet = true; m_usageReportSubscriptions.emplace_back(std::forward<UsageReportSubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeUsageReportSubscriptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUsageReportSubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UsageReportSubscription> m_usageReportSubscriptions;
    bool m_usageReportSubscriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
