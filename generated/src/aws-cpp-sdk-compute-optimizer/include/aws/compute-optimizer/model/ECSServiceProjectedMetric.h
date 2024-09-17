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
    AWS_COMPUTEOPTIMIZER_API ECSServiceProjectedMetric();
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
    inline const ECSServiceMetricName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ECSServiceMetricName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ECSServiceMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ECSServiceProjectedMetric& WithName(const ECSServiceMetricName& value) { SetName(value); return *this;}
    inline ECSServiceProjectedMetric& WithName(ECSServiceMetricName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamps of the projected metric. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }
    inline ECSServiceProjectedMetric& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}
    inline ECSServiceProjectedMetric& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}
    inline ECSServiceProjectedMetric& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }
    inline ECSServiceProjectedMetric& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The upper bound values for the projected metric. </p>
     */
    inline const Aws::Vector<double>& GetUpperBoundValues() const{ return m_upperBoundValues; }
    inline bool UpperBoundValuesHasBeenSet() const { return m_upperBoundValuesHasBeenSet; }
    inline void SetUpperBoundValues(const Aws::Vector<double>& value) { m_upperBoundValuesHasBeenSet = true; m_upperBoundValues = value; }
    inline void SetUpperBoundValues(Aws::Vector<double>&& value) { m_upperBoundValuesHasBeenSet = true; m_upperBoundValues = std::move(value); }
    inline ECSServiceProjectedMetric& WithUpperBoundValues(const Aws::Vector<double>& value) { SetUpperBoundValues(value); return *this;}
    inline ECSServiceProjectedMetric& WithUpperBoundValues(Aws::Vector<double>&& value) { SetUpperBoundValues(std::move(value)); return *this;}
    inline ECSServiceProjectedMetric& AddUpperBoundValues(double value) { m_upperBoundValuesHasBeenSet = true; m_upperBoundValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The lower bound values for the projected metric. </p>
     */
    inline const Aws::Vector<double>& GetLowerBoundValues() const{ return m_lowerBoundValues; }
    inline bool LowerBoundValuesHasBeenSet() const { return m_lowerBoundValuesHasBeenSet; }
    inline void SetLowerBoundValues(const Aws::Vector<double>& value) { m_lowerBoundValuesHasBeenSet = true; m_lowerBoundValues = value; }
    inline void SetLowerBoundValues(Aws::Vector<double>&& value) { m_lowerBoundValuesHasBeenSet = true; m_lowerBoundValues = std::move(value); }
    inline ECSServiceProjectedMetric& WithLowerBoundValues(const Aws::Vector<double>& value) { SetLowerBoundValues(value); return *this;}
    inline ECSServiceProjectedMetric& WithLowerBoundValues(Aws::Vector<double>&& value) { SetLowerBoundValues(std::move(value)); return *this;}
    inline ECSServiceProjectedMetric& AddLowerBoundValues(double value) { m_lowerBoundValuesHasBeenSet = true; m_lowerBoundValues.push_back(value); return *this; }
    ///@}
  private:

    ECSServiceMetricName m_name;
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
