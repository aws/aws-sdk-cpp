/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/PredictiveScalingPredefinedMetricPairSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingPredefinedScalingMetricSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingPredefinedLoadMetricSpecification.h>
#include <aws/application-autoscaling/model/PredictiveScalingCustomizedMetricSpecification.h>
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
   * <p> This structure specifies the metrics and target utilization settings for a
   * predictive scaling policy. </p> <p>You must specify either a metric pair, or a
   * load metric and a scaling metric individually. Specifying a metric pair instead
   * of individual metrics provides a simpler way to configure metrics for a scaling
   * policy. You choose the metric pair, and the policy automatically knows the
   * correct sum and average statistics to use for the load metric and the scaling
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingMetricSpecification
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetricSpecification() = default;
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the target utilization. </p>
     */
    inline double GetTargetValue() const { return m_targetValue; }
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }
    inline PredictiveScalingMetricSpecification& WithTargetValue(double value) { SetTargetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The predefined metric pair specification that determines the appropriate
     * scaling metric and load metric to use. </p>
     */
    inline const PredictiveScalingPredefinedMetricPairSpecification& GetPredefinedMetricPairSpecification() const { return m_predefinedMetricPairSpecification; }
    inline bool PredefinedMetricPairSpecificationHasBeenSet() const { return m_predefinedMetricPairSpecificationHasBeenSet; }
    template<typename PredefinedMetricPairSpecificationT = PredictiveScalingPredefinedMetricPairSpecification>
    void SetPredefinedMetricPairSpecification(PredefinedMetricPairSpecificationT&& value) { m_predefinedMetricPairSpecificationHasBeenSet = true; m_predefinedMetricPairSpecification = std::forward<PredefinedMetricPairSpecificationT>(value); }
    template<typename PredefinedMetricPairSpecificationT = PredictiveScalingPredefinedMetricPairSpecification>
    PredictiveScalingMetricSpecification& WithPredefinedMetricPairSpecification(PredefinedMetricPairSpecificationT&& value) { SetPredefinedMetricPairSpecification(std::forward<PredefinedMetricPairSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The predefined scaling metric specification. </p>
     */
    inline const PredictiveScalingPredefinedScalingMetricSpecification& GetPredefinedScalingMetricSpecification() const { return m_predefinedScalingMetricSpecification; }
    inline bool PredefinedScalingMetricSpecificationHasBeenSet() const { return m_predefinedScalingMetricSpecificationHasBeenSet; }
    template<typename PredefinedScalingMetricSpecificationT = PredictiveScalingPredefinedScalingMetricSpecification>
    void SetPredefinedScalingMetricSpecification(PredefinedScalingMetricSpecificationT&& value) { m_predefinedScalingMetricSpecificationHasBeenSet = true; m_predefinedScalingMetricSpecification = std::forward<PredefinedScalingMetricSpecificationT>(value); }
    template<typename PredefinedScalingMetricSpecificationT = PredictiveScalingPredefinedScalingMetricSpecification>
    PredictiveScalingMetricSpecification& WithPredefinedScalingMetricSpecification(PredefinedScalingMetricSpecificationT&& value) { SetPredefinedScalingMetricSpecification(std::forward<PredefinedScalingMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The predefined load metric specification. </p>
     */
    inline const PredictiveScalingPredefinedLoadMetricSpecification& GetPredefinedLoadMetricSpecification() const { return m_predefinedLoadMetricSpecification; }
    inline bool PredefinedLoadMetricSpecificationHasBeenSet() const { return m_predefinedLoadMetricSpecificationHasBeenSet; }
    template<typename PredefinedLoadMetricSpecificationT = PredictiveScalingPredefinedLoadMetricSpecification>
    void SetPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecificationT&& value) { m_predefinedLoadMetricSpecificationHasBeenSet = true; m_predefinedLoadMetricSpecification = std::forward<PredefinedLoadMetricSpecificationT>(value); }
    template<typename PredefinedLoadMetricSpecificationT = PredictiveScalingPredefinedLoadMetricSpecification>
    PredictiveScalingMetricSpecification& WithPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecificationT&& value) { SetPredefinedLoadMetricSpecification(std::forward<PredefinedLoadMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The customized scaling metric specification. </p>
     */
    inline const PredictiveScalingCustomizedMetricSpecification& GetCustomizedScalingMetricSpecification() const { return m_customizedScalingMetricSpecification; }
    inline bool CustomizedScalingMetricSpecificationHasBeenSet() const { return m_customizedScalingMetricSpecificationHasBeenSet; }
    template<typename CustomizedScalingMetricSpecificationT = PredictiveScalingCustomizedMetricSpecification>
    void SetCustomizedScalingMetricSpecification(CustomizedScalingMetricSpecificationT&& value) { m_customizedScalingMetricSpecificationHasBeenSet = true; m_customizedScalingMetricSpecification = std::forward<CustomizedScalingMetricSpecificationT>(value); }
    template<typename CustomizedScalingMetricSpecificationT = PredictiveScalingCustomizedMetricSpecification>
    PredictiveScalingMetricSpecification& WithCustomizedScalingMetricSpecification(CustomizedScalingMetricSpecificationT&& value) { SetCustomizedScalingMetricSpecification(std::forward<CustomizedScalingMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The customized load metric specification. </p>
     */
    inline const PredictiveScalingCustomizedMetricSpecification& GetCustomizedLoadMetricSpecification() const { return m_customizedLoadMetricSpecification; }
    inline bool CustomizedLoadMetricSpecificationHasBeenSet() const { return m_customizedLoadMetricSpecificationHasBeenSet; }
    template<typename CustomizedLoadMetricSpecificationT = PredictiveScalingCustomizedMetricSpecification>
    void SetCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecificationT&& value) { m_customizedLoadMetricSpecificationHasBeenSet = true; m_customizedLoadMetricSpecification = std::forward<CustomizedLoadMetricSpecificationT>(value); }
    template<typename CustomizedLoadMetricSpecificationT = PredictiveScalingCustomizedMetricSpecification>
    PredictiveScalingMetricSpecification& WithCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecificationT&& value) { SetCustomizedLoadMetricSpecification(std::forward<CustomizedLoadMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The customized capacity metric specification. </p>
     */
    inline const PredictiveScalingCustomizedMetricSpecification& GetCustomizedCapacityMetricSpecification() const { return m_customizedCapacityMetricSpecification; }
    inline bool CustomizedCapacityMetricSpecificationHasBeenSet() const { return m_customizedCapacityMetricSpecificationHasBeenSet; }
    template<typename CustomizedCapacityMetricSpecificationT = PredictiveScalingCustomizedMetricSpecification>
    void SetCustomizedCapacityMetricSpecification(CustomizedCapacityMetricSpecificationT&& value) { m_customizedCapacityMetricSpecificationHasBeenSet = true; m_customizedCapacityMetricSpecification = std::forward<CustomizedCapacityMetricSpecificationT>(value); }
    template<typename CustomizedCapacityMetricSpecificationT = PredictiveScalingCustomizedMetricSpecification>
    PredictiveScalingMetricSpecification& WithCustomizedCapacityMetricSpecification(CustomizedCapacityMetricSpecificationT&& value) { SetCustomizedCapacityMetricSpecification(std::forward<CustomizedCapacityMetricSpecificationT>(value)); return *this;}
    ///@}
  private:

    double m_targetValue{0.0};
    bool m_targetValueHasBeenSet = false;

    PredictiveScalingPredefinedMetricPairSpecification m_predefinedMetricPairSpecification;
    bool m_predefinedMetricPairSpecificationHasBeenSet = false;

    PredictiveScalingPredefinedScalingMetricSpecification m_predefinedScalingMetricSpecification;
    bool m_predefinedScalingMetricSpecificationHasBeenSet = false;

    PredictiveScalingPredefinedLoadMetricSpecification m_predefinedLoadMetricSpecification;
    bool m_predefinedLoadMetricSpecificationHasBeenSet = false;

    PredictiveScalingCustomizedMetricSpecification m_customizedScalingMetricSpecification;
    bool m_customizedScalingMetricSpecificationHasBeenSet = false;

    PredictiveScalingCustomizedMetricSpecification m_customizedLoadMetricSpecification;
    bool m_customizedLoadMetricSpecificationHasBeenSet = false;

    PredictiveScalingCustomizedMetricSpecification m_customizedCapacityMetricSpecification;
    bool m_customizedCapacityMetricSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
