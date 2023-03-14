/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RecommendedOptionProjectedMetric.h>
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
  class GetEC2RecommendationProjectedMetricsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsResult();
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline const Aws::Vector<RecommendedOptionProjectedMetric>& GetRecommendedOptionProjectedMetrics() const{ return m_recommendedOptionProjectedMetrics; }

    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline void SetRecommendedOptionProjectedMetrics(const Aws::Vector<RecommendedOptionProjectedMetric>& value) { m_recommendedOptionProjectedMetrics = value; }

    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline void SetRecommendedOptionProjectedMetrics(Aws::Vector<RecommendedOptionProjectedMetric>&& value) { m_recommendedOptionProjectedMetrics = std::move(value); }

    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(const Aws::Vector<RecommendedOptionProjectedMetric>& value) { SetRecommendedOptionProjectedMetrics(value); return *this;}

    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(Aws::Vector<RecommendedOptionProjectedMetric>&& value) { SetRecommendedOptionProjectedMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(const RecommendedOptionProjectedMetric& value) { m_recommendedOptionProjectedMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetric&& value) { m_recommendedOptionProjectedMetrics.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEC2RecommendationProjectedMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEC2RecommendationProjectedMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEC2RecommendationProjectedMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RecommendedOptionProjectedMetric> m_recommendedOptionProjectedMetrics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
