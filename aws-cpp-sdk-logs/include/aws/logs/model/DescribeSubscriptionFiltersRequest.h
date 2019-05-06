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
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeSubscriptionFiltersRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeSubscriptionFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSubscriptionFilters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline const Aws::String& GetFilterNamePrefix() const{ return m_filterNamePrefix; }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline bool FilterNamePrefixHasBeenSet() const { return m_filterNamePrefixHasBeenSet; }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline void SetFilterNamePrefix(const Aws::String& value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix = value; }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline void SetFilterNamePrefix(Aws::String&& value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix = std::move(value); }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline void SetFilterNamePrefix(const char* value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix.assign(value); }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithFilterNamePrefix(const Aws::String& value) { SetFilterNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithFilterNamePrefix(Aws::String&& value) { SetFilterNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithFilterNamePrefix(const char* value) { SetFilterNamePrefix(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline DescribeSubscriptionFiltersRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_filterNamePrefix;
    bool m_filterNamePrefixHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
