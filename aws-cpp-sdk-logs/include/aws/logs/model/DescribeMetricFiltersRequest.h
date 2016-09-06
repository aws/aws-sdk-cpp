/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeMetricFiltersRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeMetricFiltersRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline DescribeMetricFiltersRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline DescribeMetricFiltersRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The log group name for which metric filters are to be listed.</p>
     */
    inline DescribeMetricFiltersRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline const Aws::String& GetFilterNamePrefix() const{ return m_filterNamePrefix; }

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline void SetFilterNamePrefix(const Aws::String& value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix = value; }

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline void SetFilterNamePrefix(Aws::String&& value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix = value; }

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline void SetFilterNamePrefix(const char* value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix.assign(value); }

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline DescribeMetricFiltersRequest& WithFilterNamePrefix(const Aws::String& value) { SetFilterNamePrefix(value); return *this;}

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline DescribeMetricFiltersRequest& WithFilterNamePrefix(Aws::String&& value) { SetFilterNamePrefix(value); return *this;}

    /**
     * <p>Will only return metric filters that match the provided filterNamePrefix. If
     * you don't specify a value, no prefix filter is applied.</p>
     */
    inline DescribeMetricFiltersRequest& WithFilterNamePrefix(const char* value) { SetFilterNamePrefix(value); return *this;}

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline DescribeMetricFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline DescribeMetricFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous
     * <code>DescribeMetricFilters</code> request.</p>
     */
    inline DescribeMetricFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items.</p>
     */
    inline DescribeMetricFiltersRequest& WithLimit(int value) { SetLimit(value); return *this;}

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
