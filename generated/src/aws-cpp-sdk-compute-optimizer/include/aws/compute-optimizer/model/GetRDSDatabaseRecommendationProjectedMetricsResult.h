/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RDSDatabaseRecommendedOptionProjectedMetric.h>
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
  class GetRDSDatabaseRecommendationProjectedMetricsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationProjectedMetricsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationProjectedMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationProjectedMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline const Aws::Vector<RDSDatabaseRecommendedOptionProjectedMetric>& GetRecommendedOptionProjectedMetrics() const { return m_recommendedOptionProjectedMetrics; }
    template<typename RecommendedOptionProjectedMetricsT = Aws::Vector<RDSDatabaseRecommendedOptionProjectedMetric>>
    void SetRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetricsT&& value) { m_recommendedOptionProjectedMetricsHasBeenSet = true; m_recommendedOptionProjectedMetrics = std::forward<RecommendedOptionProjectedMetricsT>(value); }
    template<typename RecommendedOptionProjectedMetricsT = Aws::Vector<RDSDatabaseRecommendedOptionProjectedMetric>>
    GetRDSDatabaseRecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetricsT&& value) { SetRecommendedOptionProjectedMetrics(std::forward<RecommendedOptionProjectedMetricsT>(value)); return *this;}
    template<typename RecommendedOptionProjectedMetricsT = RDSDatabaseRecommendedOptionProjectedMetric>
    GetRDSDatabaseRecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetricsT&& value) { m_recommendedOptionProjectedMetricsHasBeenSet = true; m_recommendedOptionProjectedMetrics.emplace_back(std::forward<RecommendedOptionProjectedMetricsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRDSDatabaseRecommendationProjectedMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RDSDatabaseRecommendedOptionProjectedMetric> m_recommendedOptionProjectedMetrics;
    bool m_recommendedOptionProjectedMetricsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
