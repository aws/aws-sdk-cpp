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
    AWS_DEVOPSGURU_API AnomalySourceDetails() = default;
    AWS_DEVOPSGURU_API AnomalySourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>CloudWatchMetricsDetail</code> objects that contain
     * information about analyzed CloudWatch metrics that show anomalous behavior. </p>
     */
    inline const Aws::Vector<CloudWatchMetricsDetail>& GetCloudWatchMetrics() const { return m_cloudWatchMetrics; }
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }
    template<typename CloudWatchMetricsT = Aws::Vector<CloudWatchMetricsDetail>>
    void SetCloudWatchMetrics(CloudWatchMetricsT&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::forward<CloudWatchMetricsT>(value); }
    template<typename CloudWatchMetricsT = Aws::Vector<CloudWatchMetricsDetail>>
    AnomalySourceDetails& WithCloudWatchMetrics(CloudWatchMetricsT&& value) { SetCloudWatchMetrics(std::forward<CloudWatchMetricsT>(value)); return *this;}
    template<typename CloudWatchMetricsT = CloudWatchMetricsDetail>
    AnomalySourceDetails& AddCloudWatchMetrics(CloudWatchMetricsT&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.emplace_back(std::forward<CloudWatchMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>PerformanceInsightsMetricsDetail</code> objects that
     * contain information about analyzed Performance Insights metrics that show
     * anomalous behavior.</p>
     */
    inline const Aws::Vector<PerformanceInsightsMetricsDetail>& GetPerformanceInsightsMetrics() const { return m_performanceInsightsMetrics; }
    inline bool PerformanceInsightsMetricsHasBeenSet() const { return m_performanceInsightsMetricsHasBeenSet; }
    template<typename PerformanceInsightsMetricsT = Aws::Vector<PerformanceInsightsMetricsDetail>>
    void SetPerformanceInsightsMetrics(PerformanceInsightsMetricsT&& value) { m_performanceInsightsMetricsHasBeenSet = true; m_performanceInsightsMetrics = std::forward<PerformanceInsightsMetricsT>(value); }
    template<typename PerformanceInsightsMetricsT = Aws::Vector<PerformanceInsightsMetricsDetail>>
    AnomalySourceDetails& WithPerformanceInsightsMetrics(PerformanceInsightsMetricsT&& value) { SetPerformanceInsightsMetrics(std::forward<PerformanceInsightsMetricsT>(value)); return *this;}
    template<typename PerformanceInsightsMetricsT = PerformanceInsightsMetricsDetail>
    AnomalySourceDetails& AddPerformanceInsightsMetrics(PerformanceInsightsMetricsT&& value) { m_performanceInsightsMetricsHasBeenSet = true; m_performanceInsightsMetrics.emplace_back(std::forward<PerformanceInsightsMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CloudWatchMetricsDetail> m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet = false;

    Aws::Vector<PerformanceInsightsMetricsDetail> m_performanceInsightsMetrics;
    bool m_performanceInsightsMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
