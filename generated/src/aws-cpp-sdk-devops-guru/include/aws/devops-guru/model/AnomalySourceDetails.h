/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/CloudWatchMetricsDetail.h>
#include <aws/devops-guru/model/PerformanceInsightsMetricsDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Details about the source of the anomalous operational data that triggered
   * the anomaly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalySourceDetails">AWS
   * API Reference</a></p>
   */
  class AnomalySourceDetails
  {
  public:
    AWS_DEVOPSGURU_API AnomalySourceDetails();
    AWS_DEVOPSGURU_API AnomalySourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline const Aws::Vector<CloudWatchMetricsDetail>& GetCloudWatchMetrics() const{ return m_cloudWatchMetrics; }

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline void SetCloudWatchMetrics(const Aws::Vector<CloudWatchMetricsDetail>& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = value; }

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline void SetCloudWatchMetrics(Aws::Vector<CloudWatchMetricsDetail>&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::move(value); }

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline AnomalySourceDetails& WithCloudWatchMetrics(const Aws::Vector<CloudWatchMetricsDetail>& value) { SetCloudWatchMetrics(value); return *this;}

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline AnomalySourceDetails& WithCloudWatchMetrics(Aws::Vector<CloudWatchMetricsDetail>&& value) { SetCloudWatchMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline AnomalySourceDetails& AddCloudWatchMetrics(const CloudWatchMetricsDetail& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(value); return *this; }

    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline AnomalySourceDetails& AddCloudWatchMetrics(CloudWatchMetricsDetail&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline const Aws::Vector<PerformanceInsightsMetricsDetail>& GetPerformanceInsightsMetrics() const{ return m_performanceInsightsMetrics; }

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline bool PerformanceInsightsMetricsHasBeenSet() const { return m_performanceInsightsMetricsHasBeenSet; }

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline void SetPerformanceInsightsMetrics(const Aws::Vector<PerformanceInsightsMetricsDetail>& value) { m_performanceInsightsMetricsHasBeenSet = true; m_performanceInsightsMetrics = value; }

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline void SetPerformanceInsightsMetrics(Aws::Vector<PerformanceInsightsMetricsDetail>&& value) { m_performanceInsightsMetricsHasBeenSet = true; m_performanceInsightsMetrics = std::move(value); }

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline AnomalySourceDetails& WithPerformanceInsightsMetrics(const Aws::Vector<PerformanceInsightsMetricsDetail>& value) { SetPerformanceInsightsMetrics(value); return *this;}

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline AnomalySourceDetails& WithPerformanceInsightsMetrics(Aws::Vector<PerformanceInsightsMetricsDetail>&& value) { SetPerformanceInsightsMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline AnomalySourceDetails& AddPerformanceInsightsMetrics(const PerformanceInsightsMetricsDetail& value) { m_performanceInsightsMetricsHasBeenSet = true; m_performanceInsightsMetrics.push_back(value); return *this; }

    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline AnomalySourceDetails& AddPerformanceInsightsMetrics(PerformanceInsightsMetricsDetail&& value) { m_performanceInsightsMetricsHasBeenSet = true; m_performanceInsightsMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CloudWatchMetricsDetail> m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet = false;

    Aws::Vector<PerformanceInsightsMetricsDetail> m_performanceInsightsMetrics;
    bool m_performanceInsightsMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
