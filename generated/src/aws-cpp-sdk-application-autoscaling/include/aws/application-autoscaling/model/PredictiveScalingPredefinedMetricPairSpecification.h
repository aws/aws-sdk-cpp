﻿/**
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
   * <p> Represents a metric pair for a predictive scaling policy. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingPredefinedMetricPairSpecification">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingPredefinedMetricPairSpecification
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedMetricPairSpecification() = default;
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedMetricPairSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedMetricPairSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. </p>
     */
    inline const Aws::String& GetPredefinedMetricType() const { return m_predefinedMetricType; }
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }
    template<typename PredefinedMetricTypeT = Aws::String>
    void SetPredefinedMetricType(PredefinedMetricTypeT&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::forward<PredefinedMetricTypeT>(value); }
    template<typename PredefinedMetricTypeT = Aws::String>
    PredictiveScalingPredefinedMetricPairSpecification& WithPredefinedMetricType(PredefinedMetricTypeT&& value) { SetPredefinedMetricType(std::forward<PredefinedMetricTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A label that uniquely identifies a specific target group from which to
     * determine the total and average request count. </p>
     */
    inline const Aws::String& GetResourceLabel() const { return m_resourceLabel; }
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }
    template<typename ResourceLabelT = Aws::String>
    void SetResourceLabel(ResourceLabelT&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::forward<ResourceLabelT>(value); }
    template<typename ResourceLabelT = Aws::String>
    PredictiveScalingPredefinedMetricPairSpecification& WithResourceLabel(ResourceLabelT&& value) { SetResourceLabel(std::forward<ResourceLabelT>(value)); return *this;}
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
