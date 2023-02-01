/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendedOptionProjectedMetric.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetECSServiceRecommendationProjectedMetricsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationProjectedMetricsResult();
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationProjectedMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationProjectedMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline const Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>& GetRecommendedOptionProjectedMetrics() const{ return m_recommendedOptionProjectedMetrics; }

    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline void SetRecommendedOptionProjectedMetrics(const Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>& value) { m_recommendedOptionProjectedMetrics = value; }

    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline void SetRecommendedOptionProjectedMetrics(Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>&& value) { m_recommendedOptionProjectedMetrics = std::move(value); }

    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(const Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>& value) { SetRecommendedOptionProjectedMetrics(value); return *this;}

    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>&& value) { SetRecommendedOptionProjectedMetrics(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(const ECSServiceRecommendedOptionProjectedMetric& value) { m_recommendedOptionProjectedMetrics.push_back(value); return *this; }

    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline GetECSServiceRecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(ECSServiceRecommendedOptionProjectedMetric&& value) { m_recommendedOptionProjectedMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ECSServiceRecommendedOptionProjectedMetric> m_recommendedOptionProjectedMetrics;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
