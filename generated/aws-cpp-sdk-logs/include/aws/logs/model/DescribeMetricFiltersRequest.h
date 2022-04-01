﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_CLOUDWATCHLOGS_API DescribeMetricFiltersRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeMetricFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMetricFilters"; }

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
    inline DescribeMetricFiltersRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeMetricFiltersRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeMetricFiltersRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline const Aws::String& GetFilterNamePrefix() const{ return m_filterNamePrefix; }

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline bool FilterNamePrefixHasBeenSet() const { return m_filterNamePrefixHasBeenSet; }

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline void SetFilterNamePrefix(const Aws::String& value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix = value; }

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline void SetFilterNamePrefix(Aws::String&& value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix = std::move(value); }

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline void SetFilterNamePrefix(const char* value) { m_filterNamePrefixHasBeenSet = true; m_filterNamePrefix.assign(value); }

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline DescribeMetricFiltersRequest& WithFilterNamePrefix(const Aws::String& value) { SetFilterNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline DescribeMetricFiltersRequest& WithFilterNamePrefix(Aws::String&& value) { SetFilterNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix to match. CloudWatch Logs uses the value you set here only if you
     * also include the <code>logGroupName</code> parameter in your request.</p>
     */
    inline DescribeMetricFiltersRequest& WithFilterNamePrefix(const char* value) { SetFilterNamePrefix(value); return *this;}


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
    inline DescribeMetricFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMetricFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMetricFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeMetricFiltersRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline DescribeMetricFiltersRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline DescribeMetricFiltersRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>Filters results to include only those with the specified metric name. If you
     * include this parameter in your request, you must also include the
     * <code>metricNamespace</code> parameter.</p>
     */
    inline DescribeMetricFiltersRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline DescribeMetricFiltersRequest& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline DescribeMetricFiltersRequest& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>Filters results to include only those in the specified namespace. If you
     * include this parameter in your request, you must also include the
     * <code>metricName</code> parameter.</p>
     */
    inline DescribeMetricFiltersRequest& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_filterNamePrefix;
    bool m_filterNamePrefixHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
