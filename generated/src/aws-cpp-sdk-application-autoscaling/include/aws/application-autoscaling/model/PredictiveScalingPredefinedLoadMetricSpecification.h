/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p> Describes a load metric for a predictive scaling policy. </p> <p>When
   * returned in the output of <code>DescribePolicies</code>, it indicates that a
   * predictive scaling policy uses individually specified load and scaling metrics
   * instead of a metric pair.</p> <p>The following predefined metrics are available
   * for predictive scaling:</p> <ul> <li> <p>
   * <code>ECSServiceAverageCPUUtilization</code> </p> </li> <li> <p>
   * <code>ECSServiceAverageMemoryUtilization</code> </p> </li> <li> <p>
   * <code>ECSServiceCPUUtilization</code> </p> </li> <li> <p>
   * <code>ECSServiceMemoryUtilization</code> </p> </li> <li> <p>
   * <code>ECSServiceTotalCPUUtilization</code> </p> </li> <li> <p>
   * <code>ECSServiceTotalMemoryUtilization</code> </p> </li> <li> <p>
   * <code>ALBRequestCount</code> </p> </li> <li> <p>
   * <code>ALBRequestCountPerTarget</code> </p> </li> <li> <p>
   * <code>TotalALBRequestCount</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingPredefinedLoadMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingPredefinedLoadMetricSpecification
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedLoadMetricSpecification() = default;
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedLoadMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedLoadMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The metric type. </p>
     */
    inline const Aws::String& GetPredefinedMetricType() const { return m_predefinedMetricType; }
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }
    template<typename PredefinedMetricTypeT = Aws::String>
    void SetPredefinedMetricType(PredefinedMetricTypeT&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::forward<PredefinedMetricTypeT>(value); }
    template<typename PredefinedMetricTypeT = Aws::String>
    PredictiveScalingPredefinedLoadMetricSpecification& WithPredefinedMetricType(PredefinedMetricTypeT&& value) { SetPredefinedMetricType(std::forward<PredefinedMetricTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A label that uniquely identifies a target group. </p>
     */
    inline const Aws::String& GetResourceLabel() const { return m_resourceLabel; }
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }
    template<typename ResourceLabelT = Aws::String>
    void SetResourceLabel(ResourceLabelT&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::forward<ResourceLabelT>(value); }
    template<typename ResourceLabelT = Aws::String>
    PredictiveScalingPredefinedLoadMetricSpecification& WithResourceLabel(ResourceLabelT&& value) { SetResourceLabel(std::forward<ResourceLabelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predefinedMetricType;
    bool m_predefinedMetricTypeHasBeenSet = false;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
