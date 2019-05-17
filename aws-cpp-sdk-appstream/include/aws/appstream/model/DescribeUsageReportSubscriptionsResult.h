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
  class AWS_APPSTREAM_API DescribeUsageReportSubscriptionsResult
  {
  public:
    DescribeUsageReportSubscriptionsResult();
    DescribeUsageReportSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUsageReportSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline const Aws::Vector<UsageReportSubscription>& GetUsageReportSubscriptions() const{ return m_usageReportSubscriptions; }

    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline void SetUsageReportSubscriptions(const Aws::Vector<UsageReportSubscription>& value) { m_usageReportSubscriptions = value; }

    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline void SetUsageReportSubscriptions(Aws::Vector<UsageReportSubscription>&& value) { m_usageReportSubscriptions = std::move(value); }

    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& WithUsageReportSubscriptions(const Aws::Vector<UsageReportSubscription>& value) { SetUsageReportSubscriptions(value); return *this;}

    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& WithUsageReportSubscriptions(Aws::Vector<UsageReportSubscription>&& value) { SetUsageReportSubscriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& AddUsageReportSubscriptions(const UsageReportSubscription& value) { m_usageReportSubscriptions.push_back(value); return *this; }

    /**
     * <p>Information about the usage report subscription.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& AddUsageReportSubscriptions(UsageReportSubscription&& value) { m_usageReportSubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeUsageReportSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UsageReportSubscription> m_usageReportSubscriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
