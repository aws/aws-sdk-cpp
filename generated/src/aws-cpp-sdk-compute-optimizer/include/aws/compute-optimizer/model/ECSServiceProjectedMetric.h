/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ECSServiceMetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Describes the projected metrics of an Amazon ECS service recommendation
   * option. </p> <p>To determine the performance difference between your current
   * Amazon ECS service and the recommended option, compare the metric data of your
   * service against its projected metric data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSServiceProjectedMetric">AWS
   * API Reference</a></p>
   */
  class ECSServiceProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSServiceProjectedMetric() = default;
    AWS_COMPUTEOPTIMIZER_API ECSServiceProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the projected metric. </p> <p>The following metrics are
     * available:</p> <ul> <li> <p> <code>Cpu</code> — The percentage of allocated
     * compute units that are currently in use on the service tasks.</p> </li> <li> <p>
     * <code>Memory</code> — The percentage of memory that's currently in use on the
     * service tasks.</p> </li> </ul>
     */
    inline ECSServiceMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ECSServiceMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ECSServiceProjectedMetric& WithName(ECSServiceMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamps of the projected metric. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::forward<TimestampsT>(value); }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    ECSServiceProjectedMetric& WithTimestamps(TimestampsT&& value) { SetTimestamps(std::forward<TimestampsT>(value)); return *this;}
    template<typename TimestampsT = Aws::Utils::DateTime>
    ECSServiceProjectedMetric& AddTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps.emplace_back(std::forward<TimestampsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The upper bound values for the projected metric. </p>
     */
    inline const Aws::Vector<double>& GetUpperBoundValues() const { return m_upperBoundValues; }
    inline bool UpperBoundValuesHasBeenSet() const { return m_upperBoundValuesHasBeenSet; }
    template<typename UpperBoundValuesT = Aws::Vector<double>>
    void SetUpperBoundValues(UpperBoundValuesT&& value) { m_upperBoundValuesHasBeenSet = true; m_upperBoundValues = std::forward<UpperBoundValuesT>(value); }
    template<typename UpperBoundValuesT = Aws::Vector<double>>
    ECSServiceProjectedMetric& WithUpperBoundValues(UpperBoundValuesT&& value) { SetUpperBoundValues(std::forward<UpperBoundValuesT>(value)); return *this;}
    inline ECSServiceProjectedMetric& AddUpperBoundValues(double value) { m_upperBoundValuesHasBeenSet = true; m_upperBoundValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The lower bound values for the projected metric. </p>
     */
    inline const Aws::Vector<double>& GetLowerBoundValues() const { return m_lowerBoundValues; }
    inline bool LowerBoundValuesHasBeenSet() const { return m_lowerBoundValuesHasBeenSet; }
    template<typename LowerBoundValuesT = Aws::Vector<double>>
    void SetLowerBoundValues(LowerBoundValuesT&& value) { m_lowerBoundValuesHasBeenSet = true; m_lowerBoundValues = std::forward<LowerBoundValuesT>(value); }
    template<typename LowerBoundValuesT = Aws::Vector<double>>
    ECSServiceProjectedMetric& WithLowerBoundValues(LowerBoundValuesT&& value) { SetLowerBoundValues(std::forward<LowerBoundValuesT>(value)); return *this;}
    inline ECSServiceProjectedMetric& AddLowerBoundValues(double value) { m_lowerBoundValuesHasBeenSet = true; m_lowerBoundValues.push_back(value); return *this; }
    ///@}
  private:

    ECSServiceMetricName m_name{ECSServiceMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<double> m_upperBoundValues;
    bool m_upperBoundValuesHasBeenSet = false;

    Aws::Vector<double> m_lowerBoundValues;
    bool m_lowerBoundValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
