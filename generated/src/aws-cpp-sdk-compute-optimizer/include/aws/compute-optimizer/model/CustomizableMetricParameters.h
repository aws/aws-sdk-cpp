/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/CustomizableMetricThreshold.h>
#include <aws/compute-optimizer/model/CustomizableMetricHeadroom.h>
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
   * <p> Defines the various metric parameters that can be customized, such as
   * threshold and headroom. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/CustomizableMetricParameters">AWS
   * API Reference</a></p>
   */
  class CustomizableMetricParameters
  {
  public:
    AWS_COMPUTEOPTIMIZER_API CustomizableMetricParameters();
    AWS_COMPUTEOPTIMIZER_API CustomizableMetricParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API CustomizableMetricParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The threshold value used for the specified metric parameter. </p> 
     * <p>You can only specify the threshold value for CPU utilization.</p> 
     */
    inline const CustomizableMetricThreshold& GetThreshold() const{ return m_threshold; }

    /**
     * <p> The threshold value used for the specified metric parameter. </p> 
     * <p>You can only specify the threshold value for CPU utilization.</p> 
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p> The threshold value used for the specified metric parameter. </p> 
     * <p>You can only specify the threshold value for CPU utilization.</p> 
     */
    inline void SetThreshold(const CustomizableMetricThreshold& value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p> The threshold value used for the specified metric parameter. </p> 
     * <p>You can only specify the threshold value for CPU utilization.</p> 
     */
    inline void SetThreshold(CustomizableMetricThreshold&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }

    /**
     * <p> The threshold value used for the specified metric parameter. </p> 
     * <p>You can only specify the threshold value for CPU utilization.</p> 
     */
    inline CustomizableMetricParameters& WithThreshold(const CustomizableMetricThreshold& value) { SetThreshold(value); return *this;}

    /**
     * <p> The threshold value used for the specified metric parameter. </p> 
     * <p>You can only specify the threshold value for CPU utilization.</p> 
     */
    inline CustomizableMetricParameters& WithThreshold(CustomizableMetricThreshold&& value) { SetThreshold(std::move(value)); return *this;}


    /**
     * <p> The headroom value in percentage used for the specified metric parameter.
     * </p> <p>The following lists the valid values for CPU and memory utilization.</p>
     * <ul> <li> <p>CPU utilization: <code>PERCENT_30 | PERCENT_20 | PERCENT_0</code>
     * </p> </li> <li> <p>Memory utilization: <code>PERCENT_30 | PERCENT_20 |
     * PERCENT_10</code> </p> </li> </ul>
     */
    inline const CustomizableMetricHeadroom& GetHeadroom() const{ return m_headroom; }

    /**
     * <p> The headroom value in percentage used for the specified metric parameter.
     * </p> <p>The following lists the valid values for CPU and memory utilization.</p>
     * <ul> <li> <p>CPU utilization: <code>PERCENT_30 | PERCENT_20 | PERCENT_0</code>
     * </p> </li> <li> <p>Memory utilization: <code>PERCENT_30 | PERCENT_20 |
     * PERCENT_10</code> </p> </li> </ul>
     */
    inline bool HeadroomHasBeenSet() const { return m_headroomHasBeenSet; }

    /**
     * <p> The headroom value in percentage used for the specified metric parameter.
     * </p> <p>The following lists the valid values for CPU and memory utilization.</p>
     * <ul> <li> <p>CPU utilization: <code>PERCENT_30 | PERCENT_20 | PERCENT_0</code>
     * </p> </li> <li> <p>Memory utilization: <code>PERCENT_30 | PERCENT_20 |
     * PERCENT_10</code> </p> </li> </ul>
     */
    inline void SetHeadroom(const CustomizableMetricHeadroom& value) { m_headroomHasBeenSet = true; m_headroom = value; }

    /**
     * <p> The headroom value in percentage used for the specified metric parameter.
     * </p> <p>The following lists the valid values for CPU and memory utilization.</p>
     * <ul> <li> <p>CPU utilization: <code>PERCENT_30 | PERCENT_20 | PERCENT_0</code>
     * </p> </li> <li> <p>Memory utilization: <code>PERCENT_30 | PERCENT_20 |
     * PERCENT_10</code> </p> </li> </ul>
     */
    inline void SetHeadroom(CustomizableMetricHeadroom&& value) { m_headroomHasBeenSet = true; m_headroom = std::move(value); }

    /**
     * <p> The headroom value in percentage used for the specified metric parameter.
     * </p> <p>The following lists the valid values for CPU and memory utilization.</p>
     * <ul> <li> <p>CPU utilization: <code>PERCENT_30 | PERCENT_20 | PERCENT_0</code>
     * </p> </li> <li> <p>Memory utilization: <code>PERCENT_30 | PERCENT_20 |
     * PERCENT_10</code> </p> </li> </ul>
     */
    inline CustomizableMetricParameters& WithHeadroom(const CustomizableMetricHeadroom& value) { SetHeadroom(value); return *this;}

    /**
     * <p> The headroom value in percentage used for the specified metric parameter.
     * </p> <p>The following lists the valid values for CPU and memory utilization.</p>
     * <ul> <li> <p>CPU utilization: <code>PERCENT_30 | PERCENT_20 | PERCENT_0</code>
     * </p> </li> <li> <p>Memory utilization: <code>PERCENT_30 | PERCENT_20 |
     * PERCENT_10</code> </p> </li> </ul>
     */
    inline CustomizableMetricParameters& WithHeadroom(CustomizableMetricHeadroom&& value) { SetHeadroom(std::move(value)); return *this;}

  private:

    CustomizableMetricThreshold m_threshold;
    bool m_thresholdHasBeenSet = false;

    CustomizableMetricHeadroom m_headroom;
    bool m_headroomHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
