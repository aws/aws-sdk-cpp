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

  class AWS_DEVOPSGURU_API RecommendationRelatedAnomalySourceDetail
  {
  public:
    RecommendationRelatedAnomalySourceDetail();
    RecommendationRelatedAnomalySourceDetail(Aws::Utils::Json::JsonView jsonValue);
    RecommendationRelatedAnomalySourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>& GetCloudWatchMetrics() const{ return m_cloudWatchMetrics; }

    
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }

    
    inline void SetCloudWatchMetrics(const Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = value; }

    
    inline void SetCloudWatchMetrics(Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::move(value); }

    
    inline RecommendationRelatedAnomalySourceDetail& WithCloudWatchMetrics(const Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>& value) { SetCloudWatchMetrics(value); return *this;}

    
    inline RecommendationRelatedAnomalySourceDetail& WithCloudWatchMetrics(Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail>&& value) { SetCloudWatchMetrics(std::move(value)); return *this;}

    
    inline RecommendationRelatedAnomalySourceDetail& AddCloudWatchMetrics(const RecommendationRelatedCloudWatchMetricsSourceDetail& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(value); return *this; }

    
    inline RecommendationRelatedAnomalySourceDetail& AddCloudWatchMetrics(RecommendationRelatedCloudWatchMetricsSourceDetail&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecommendationRelatedCloudWatchMetricsSourceDetail> m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
