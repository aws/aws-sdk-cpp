﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p> An array of objects that describes the projected metrics. </p>
     */
    inline const Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>& GetRecommendedOptionProjectedMetrics() const{ return m_recommendedOptionProjectedMetrics; }
    inline void SetRecommendedOptionProjectedMetrics(const Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>& value) { m_recommendedOptionProjectedMetrics = value; }
    inline void SetRecommendedOptionProjectedMetrics(Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>&& value) { m_recommendedOptionProjectedMetrics = std::move(value); }
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(const Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>& value) { SetRecommendedOptionProjectedMetrics(value); return *this;}
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(Aws::Vector<ECSServiceRecommendedOptionProjectedMetric>&& value) { SetRecommendedOptionProjectedMetrics(std::move(value)); return *this;}
    inline GetECSServiceRecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(const ECSServiceRecommendedOptionProjectedMetric& value) { m_recommendedOptionProjectedMetrics.push_back(value); return *this; }
    inline GetECSServiceRecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(ECSServiceRecommendedOptionProjectedMetric&& value) { m_recommendedOptionProjectedMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetECSServiceRecommendationProjectedMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ECSServiceRecommendedOptionProjectedMetric> m_recommendedOptionProjectedMetrics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
