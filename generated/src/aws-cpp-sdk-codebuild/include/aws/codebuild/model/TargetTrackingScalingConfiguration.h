/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FleetScalingMetricType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Defines when a new instance is auto-scaled into the compute
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/TargetTrackingScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetTrackingScalingConfiguration
  {
  public:
    AWS_CODEBUILD_API TargetTrackingScalingConfiguration();
    AWS_CODEBUILD_API TargetTrackingScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API TargetTrackingScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type to determine auto-scaling.</p>
     */
    inline const FleetScalingMetricType& GetMetricType() const{ return m_metricType; }

    /**
     * <p>The metric type to determine auto-scaling.</p>
     */
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }

    /**
     * <p>The metric type to determine auto-scaling.</p>
     */
    inline void SetMetricType(const FleetScalingMetricType& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }

    /**
     * <p>The metric type to determine auto-scaling.</p>
     */
    inline void SetMetricType(FleetScalingMetricType&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }

    /**
     * <p>The metric type to determine auto-scaling.</p>
     */
    inline TargetTrackingScalingConfiguration& WithMetricType(const FleetScalingMetricType& value) { SetMetricType(value); return *this;}

    /**
     * <p>The metric type to determine auto-scaling.</p>
     */
    inline TargetTrackingScalingConfiguration& WithMetricType(FleetScalingMetricType&& value) { SetMetricType(std::move(value)); return *this;}


    /**
     * <p>The value of <code>metricType</code> when to start scaling.</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The value of <code>metricType</code> when to start scaling.</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The value of <code>metricType</code> when to start scaling.</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The value of <code>metricType</code> when to start scaling.</p>
     */
    inline TargetTrackingScalingConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}

  private:

    FleetScalingMetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    double m_targetValue;
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
