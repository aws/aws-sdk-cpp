/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The metrics of recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationMetrics">AWS
   * API Reference</a></p>
   */
  class RecommendationMetrics
  {
  public:
    AWS_SAGEMAKER_API RecommendationMetrics();
    AWS_SAGEMAKER_API RecommendationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the cost per hour for the instance. </p>
     */
    inline double GetCostPerHour() const{ return m_costPerHour; }

    /**
     * <p>Defines the cost per hour for the instance. </p>
     */
    inline bool CostPerHourHasBeenSet() const { return m_costPerHourHasBeenSet; }

    /**
     * <p>Defines the cost per hour for the instance. </p>
     */
    inline void SetCostPerHour(double value) { m_costPerHourHasBeenSet = true; m_costPerHour = value; }

    /**
     * <p>Defines the cost per hour for the instance. </p>
     */
    inline RecommendationMetrics& WithCostPerHour(double value) { SetCostPerHour(value); return *this;}


    /**
     * <p>Defines the cost per inference for the instance .</p>
     */
    inline double GetCostPerInference() const{ return m_costPerInference; }

    /**
     * <p>Defines the cost per inference for the instance .</p>
     */
    inline bool CostPerInferenceHasBeenSet() const { return m_costPerInferenceHasBeenSet; }

    /**
     * <p>Defines the cost per inference for the instance .</p>
     */
    inline void SetCostPerInference(double value) { m_costPerInferenceHasBeenSet = true; m_costPerInference = value; }

    /**
     * <p>Defines the cost per inference for the instance .</p>
     */
    inline RecommendationMetrics& WithCostPerInference(double value) { SetCostPerInference(value); return *this;}


    /**
     * <p>The expected maximum number of requests per minute for the instance.</p>
     */
    inline int GetMaxInvocations() const{ return m_maxInvocations; }

    /**
     * <p>The expected maximum number of requests per minute for the instance.</p>
     */
    inline bool MaxInvocationsHasBeenSet() const { return m_maxInvocationsHasBeenSet; }

    /**
     * <p>The expected maximum number of requests per minute for the instance.</p>
     */
    inline void SetMaxInvocations(int value) { m_maxInvocationsHasBeenSet = true; m_maxInvocations = value; }

    /**
     * <p>The expected maximum number of requests per minute for the instance.</p>
     */
    inline RecommendationMetrics& WithMaxInvocations(int value) { SetMaxInvocations(value); return *this;}


    /**
     * <p>The expected model latency at maximum invocation per minute for the
     * instance.</p>
     */
    inline int GetModelLatency() const{ return m_modelLatency; }

    /**
     * <p>The expected model latency at maximum invocation per minute for the
     * instance.</p>
     */
    inline bool ModelLatencyHasBeenSet() const { return m_modelLatencyHasBeenSet; }

    /**
     * <p>The expected model latency at maximum invocation per minute for the
     * instance.</p>
     */
    inline void SetModelLatency(int value) { m_modelLatencyHasBeenSet = true; m_modelLatency = value; }

    /**
     * <p>The expected model latency at maximum invocation per minute for the
     * instance.</p>
     */
    inline RecommendationMetrics& WithModelLatency(int value) { SetModelLatency(value); return *this;}

  private:

    double m_costPerHour;
    bool m_costPerHourHasBeenSet = false;

    double m_costPerInference;
    bool m_costPerInferenceHasBeenSet = false;

    int m_maxInvocations;
    bool m_maxInvocationsHasBeenSet = false;

    int m_modelLatency;
    bool m_modelLatencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
