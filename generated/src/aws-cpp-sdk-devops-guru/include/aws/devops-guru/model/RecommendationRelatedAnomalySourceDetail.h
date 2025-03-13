/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/RecommendationRelatedCloudWatchMetricsSourceDetail.h>
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
   * <p> Contains an array of
   * <code>RecommendationRelatedCloudWatchMetricsSourceDetail</code> objects that
   * contain the name and namespace of an Amazon CloudWatch metric. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RecommendationRelatedAnomalySourceDetail">AWS
   * API Reference</a></p>
   */
  class RecommendationRelatedAnomalySourceDetail
  {
  public:
    AWS_DEVOPSGURU_API RecommendationRelatedAnomalySourceDetail() = default;
    AWS_DEVOPSGURU_API RecommendationRelatedAnomalySourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API RecommendationRelatedAnomalySourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> objects that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline const Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>& GetCloudWatchMetrics() const { return m_cloudWatchMetrics; }
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }
    template<typename CloudWatchMetricsT = Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>>
    void SetCloudWatchMetrics(CloudWatchMetricsT&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::forward<CloudWatchMetricsT>(value); }
    template<typename CloudWatchMetricsT = Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>>
    RecommendationRelatedAnomalySourceDetail& WithCloudWatchMetrics(CloudWatchMetricsT&& value) { SetCloudWatchMetrics(std::forward<CloudWatchMetricsT>(value)); return *this;}
    template<typename CloudWatchMetricsT = RecommendationRelatedCloudWatchMetricsSourceDetail>
    RecommendationRelatedAnomalySourceDetail& AddCloudWatchMetrics(CloudWatchMetricsT&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.emplace_back(std::forward<CloudWatchMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail> m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
