/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/CustomizableMetricName.h>
#include <aws/compute-optimizer/model/CustomizableMetricParameters.h>
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
   * <p> The preference to control the resource’s CPU utilization threshold, CPU
   * utilization headroom, and memory utilization headroom. </p>  <p>This
   * preference is only available for the Amazon EC2 instance resource type.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UtilizationPreference">AWS
   * API Reference</a></p>
   */
  class UtilizationPreference
  {
  public:
    AWS_COMPUTEOPTIMIZER_API UtilizationPreference() = default;
    AWS_COMPUTEOPTIMIZER_API UtilizationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API UtilizationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the resource utilization metric name to customize. </p>
     */
    inline CustomizableMetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(CustomizableMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline UtilizationPreference& WithMetricName(CustomizableMetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameters to set when customizing the resource utilization thresholds.
     * </p>
     */
    inline const CustomizableMetricParameters& GetMetricParameters() const { return m_metricParameters; }
    inline bool MetricParametersHasBeenSet() const { return m_metricParametersHasBeenSet; }
    template<typename MetricParametersT = CustomizableMetricParameters>
    void SetMetricParameters(MetricParametersT&& value) { m_metricParametersHasBeenSet = true; m_metricParameters = std::forward<MetricParametersT>(value); }
    template<typename MetricParametersT = CustomizableMetricParameters>
    UtilizationPreference& WithMetricParameters(MetricParametersT&& value) { SetMetricParameters(std::forward<MetricParametersT>(value)); return *this;}
    ///@}
  private:

    CustomizableMetricName m_metricName{CustomizableMetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    CustomizableMetricParameters m_metricParameters;
    bool m_metricParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
