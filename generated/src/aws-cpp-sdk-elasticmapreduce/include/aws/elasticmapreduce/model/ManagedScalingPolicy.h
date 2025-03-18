/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ComputeLimits.h>
#include <aws/elasticmapreduce/model/ScalingStrategy.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p> Managed scaling policy for an Amazon EMR cluster. The policy specifies the
   * limits for resources that can be added or terminated from a cluster. The policy
   * only applies to the core and task nodes. The master node cannot be scaled after
   * initial configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ManagedScalingPolicy">AWS
   * API Reference</a></p>
   */
  class ManagedScalingPolicy
  {
  public:
    AWS_EMR_API ManagedScalingPolicy() = default;
    AWS_EMR_API ManagedScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ManagedScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration.</p>
     */
    inline const ComputeLimits& GetComputeLimits() const { return m_computeLimits; }
    inline bool ComputeLimitsHasBeenSet() const { return m_computeLimitsHasBeenSet; }
    template<typename ComputeLimitsT = ComputeLimits>
    void SetComputeLimits(ComputeLimitsT&& value) { m_computeLimitsHasBeenSet = true; m_computeLimits = std::forward<ComputeLimitsT>(value); }
    template<typename ComputeLimitsT = ComputeLimits>
    ManagedScalingPolicy& WithComputeLimits(ComputeLimitsT&& value) { SetComputeLimits(std::forward<ComputeLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value that represents an advanced scaling strategy. Setting a
     * higher value optimizes for performance. Setting a lower value optimizes for
     * resource conservation. Setting the value to 50 balances performance and resource
     * conservation. Possible values are 1, 25, 50, 75, and 100.</p>
     */
    inline int GetUtilizationPerformanceIndex() const { return m_utilizationPerformanceIndex; }
    inline bool UtilizationPerformanceIndexHasBeenSet() const { return m_utilizationPerformanceIndexHasBeenSet; }
    inline void SetUtilizationPerformanceIndex(int value) { m_utilizationPerformanceIndexHasBeenSet = true; m_utilizationPerformanceIndex = value; }
    inline ManagedScalingPolicy& WithUtilizationPerformanceIndex(int value) { SetUtilizationPerformanceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a custom scaling utilization performance index can be set.
     * Possible values include <i>ADVANCED</i> or <i>DEFAULT</i>.</p>
     */
    inline ScalingStrategy GetScalingStrategy() const { return m_scalingStrategy; }
    inline bool ScalingStrategyHasBeenSet() const { return m_scalingStrategyHasBeenSet; }
    inline void SetScalingStrategy(ScalingStrategy value) { m_scalingStrategyHasBeenSet = true; m_scalingStrategy = value; }
    inline ManagedScalingPolicy& WithScalingStrategy(ScalingStrategy value) { SetScalingStrategy(value); return *this;}
    ///@}
  private:

    ComputeLimits m_computeLimits;
    bool m_computeLimitsHasBeenSet = false;

    int m_utilizationPerformanceIndex{0};
    bool m_utilizationPerformanceIndexHasBeenSet = false;

    ScalingStrategy m_scalingStrategy{ScalingStrategy::NOT_SET};
    bool m_scalingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
