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
   * instead of a metric pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingPredefinedLoadMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingPredefinedLoadMetricSpecification
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedLoadMetricSpecification();
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedLoadMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPredefinedLoadMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The metric type. </p>
     */
    inline const Aws::String& GetPredefinedMetricType() const{ return m_predefinedMetricType; }
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }
    inline void SetPredefinedMetricType(const Aws::String& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }
    inline void SetPredefinedMetricType(Aws::String&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::move(value); }
    inline void SetPredefinedMetricType(const char* value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType.assign(value); }
    inline PredictiveScalingPredefinedLoadMetricSpecification& WithPredefinedMetricType(const Aws::String& value) { SetPredefinedMetricType(value); return *this;}
    inline PredictiveScalingPredefinedLoadMetricSpecification& WithPredefinedMetricType(Aws::String&& value) { SetPredefinedMetricType(std::move(value)); return *this;}
    inline PredictiveScalingPredefinedLoadMetricSpecification& WithPredefinedMetricType(const char* value) { SetPredefinedMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A label that uniquely identifies a target group. </p>
     */
    inline const Aws::String& GetResourceLabel() const{ return m_resourceLabel; }
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }
    inline void SetResourceLabel(const Aws::String& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = value; }
    inline void SetResourceLabel(Aws::String&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::move(value); }
    inline void SetResourceLabel(const char* value) { m_resourceLabelHasBeenSet = true; m_resourceLabel.assign(value); }
    inline PredictiveScalingPredefinedLoadMetricSpecification& WithResourceLabel(const Aws::String& value) { SetResourceLabel(value); return *this;}
    inline PredictiveScalingPredefinedLoadMetricSpecification& WithResourceLabel(Aws::String&& value) { SetResourceLabel(std::move(value)); return *this;}
    inline PredictiveScalingPredefinedLoadMetricSpecification& WithResourceLabel(const char* value) { SetResourceLabel(value); return *this;}
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
