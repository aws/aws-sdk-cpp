﻿/**
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
   * <p> The preference to control the resource’s CPU utilization thresholds -
   * threshold and headroom. </p>  <p>This preference is only available for the
   * Amazon EC2 instance resource type.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/UtilizationPreference">AWS
   * API Reference</a></p>
   */
  class UtilizationPreference
  {
  public:
    AWS_COMPUTEOPTIMIZER_API UtilizationPreference();
    AWS_COMPUTEOPTIMIZER_API UtilizationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API UtilizationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the resource utilization metric name to customize. </p>
     */
    inline const CustomizableMetricName& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const CustomizableMetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(CustomizableMetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline UtilizationPreference& WithMetricName(const CustomizableMetricName& value) { SetMetricName(value); return *this;}
    inline UtilizationPreference& WithMetricName(CustomizableMetricName&& value) { SetMetricName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameters to set when customizing the resource utilization thresholds.
     * </p>
     */
    inline const CustomizableMetricParameters& GetMetricParameters() const{ return m_metricParameters; }
    inline bool MetricParametersHasBeenSet() const { return m_metricParametersHasBeenSet; }
    inline void SetMetricParameters(const CustomizableMetricParameters& value) { m_metricParametersHasBeenSet = true; m_metricParameters = value; }
    inline void SetMetricParameters(CustomizableMetricParameters&& value) { m_metricParametersHasBeenSet = true; m_metricParameters = std::move(value); }
    inline UtilizationPreference& WithMetricParameters(const CustomizableMetricParameters& value) { SetMetricParameters(value); return *this;}
    inline UtilizationPreference& WithMetricParameters(CustomizableMetricParameters&& value) { SetMetricParameters(std::move(value)); return *this;}
    ///@}
  private:

    CustomizableMetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    CustomizableMetricParameters m_metricParameters;
    bool m_metricParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
