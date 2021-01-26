/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/RecentlyActive.h>
#include <aws/monitoring/model/DimensionFilter.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API ListMetricsRequest : public CloudWatchRequest
  {
  public:
    ListMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetrics"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline ListMetricsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline ListMetricsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline ListMetricsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline ListMetricsRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline ListMetricsRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline ListMetricsRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline const Aws::Vector<DimensionFilter>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline void SetDimensions(const Aws::Vector<DimensionFilter>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline void SetDimensions(Aws::Vector<DimensionFilter>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline ListMetricsRequest& WithDimensions(const Aws::Vector<DimensionFilter>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline ListMetricsRequest& WithDimensions(Aws::Vector<DimensionFilter>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline ListMetricsRequest& AddDimensions(const DimensionFilter& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions to filter against. Only the dimensions that match exactly will
     * be returned.</p>
     */
    inline ListMetricsRequest& AddDimensions(DimensionFilter&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 40 minutes more than the specified time interval.</p>
     */
    inline const RecentlyActive& GetRecentlyActive() const{ return m_recentlyActive; }

    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 40 minutes more than the specified time interval.</p>
     */
    inline bool RecentlyActiveHasBeenSet() const { return m_recentlyActiveHasBeenSet; }

    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 40 minutes more than the specified time interval.</p>
     */
    inline void SetRecentlyActive(const RecentlyActive& value) { m_recentlyActiveHasBeenSet = true; m_recentlyActive = value; }

    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 40 minutes more than the specified time interval.</p>
     */
    inline void SetRecentlyActive(RecentlyActive&& value) { m_recentlyActiveHasBeenSet = true; m_recentlyActive = std::move(value); }

    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 40 minutes more than the specified time interval.</p>
     */
    inline ListMetricsRequest& WithRecentlyActive(const RecentlyActive& value) { SetRecentlyActive(value); return *this;}

    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 40 minutes more than the specified time interval.</p>
     */
    inline ListMetricsRequest& WithRecentlyActive(RecentlyActive&& value) { SetRecentlyActive(std::move(value)); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Vector<DimensionFilter> m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    RecentlyActive m_recentlyActive;
    bool m_recentlyActiveHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
