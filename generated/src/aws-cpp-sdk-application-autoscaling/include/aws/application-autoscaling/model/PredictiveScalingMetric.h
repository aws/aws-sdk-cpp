/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricDimension.h>
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
   * <p> Describes the scaling metric. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingMetric">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingMetric
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetric();
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the dimensions of the metric. </p>
     */
    inline const Aws::Vector<PredictiveScalingMetricDimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<PredictiveScalingMetricDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<PredictiveScalingMetricDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline PredictiveScalingMetric& WithDimensions(const Aws::Vector<PredictiveScalingMetricDimension>& value) { SetDimensions(value); return *this;}
    inline PredictiveScalingMetric& WithDimensions(Aws::Vector<PredictiveScalingMetricDimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline PredictiveScalingMetric& AddDimensions(const PredictiveScalingMetricDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline PredictiveScalingMetric& AddDimensions(PredictiveScalingMetricDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the metric. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline PredictiveScalingMetric& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline PredictiveScalingMetric& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline PredictiveScalingMetric& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The namespace of the metric. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline PredictiveScalingMetric& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline PredictiveScalingMetric& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline PredictiveScalingMetric& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}
  private:

    Aws::Vector<PredictiveScalingMetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
