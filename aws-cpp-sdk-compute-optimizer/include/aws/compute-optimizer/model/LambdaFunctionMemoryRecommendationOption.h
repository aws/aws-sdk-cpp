/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/LambdaFunctionMemoryProjectedMetric.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a recommendation option for an AWS Lambda function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionMemoryRecommendationOption">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryRecommendationOption
  {
  public:
    LambdaFunctionMemoryRecommendationOption();
    LambdaFunctionMemoryRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    LambdaFunctionMemoryRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rank of the function recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>The rank of the function recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>The rank of the function recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>The rank of the function recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline LambdaFunctionMemoryRecommendationOption& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>The memory size, in MB, of the function recommendation option.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The memory size, in MB, of the function recommendation option.</p>
     */
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }

    /**
     * <p>The memory size, in MB, of the function recommendation option.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The memory size, in MB, of the function recommendation option.</p>
     */
    inline LambdaFunctionMemoryRecommendationOption& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline const Aws::Vector<LambdaFunctionMemoryProjectedMetric>& GetProjectedUtilizationMetrics() const{ return m_projectedUtilizationMetrics; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline void SetProjectedUtilizationMetrics(const Aws::Vector<LambdaFunctionMemoryProjectedMetric>& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = value; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline void SetProjectedUtilizationMetrics(Aws::Vector<LambdaFunctionMemoryProjectedMetric>&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline LambdaFunctionMemoryRecommendationOption& WithProjectedUtilizationMetrics(const Aws::Vector<LambdaFunctionMemoryProjectedMetric>& value) { SetProjectedUtilizationMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline LambdaFunctionMemoryRecommendationOption& WithProjectedUtilizationMetrics(Aws::Vector<LambdaFunctionMemoryProjectedMetric>&& value) { SetProjectedUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline LambdaFunctionMemoryRecommendationOption& AddProjectedUtilizationMetrics(const LambdaFunctionMemoryProjectedMetric& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline LambdaFunctionMemoryRecommendationOption& AddProjectedUtilizationMetrics(LambdaFunctionMemoryProjectedMetric&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(std::move(value)); return *this; }

  private:

    int m_rank;
    bool m_rankHasBeenSet;

    int m_memorySize;
    bool m_memorySizeHasBeenSet;

    Aws::Vector<LambdaFunctionMemoryProjectedMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
