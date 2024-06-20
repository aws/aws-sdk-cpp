/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/RDSDBMetricName.h>
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
   * <p> Describes the projected metrics of an Amazon RDS recommendation option. </p>
   * <p> To determine the performance difference between your current Amazon RDS and
   * the recommended option, compare the metric data of your service against its
   * projected metric data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDatabaseProjectedMetric">AWS
   * API Reference</a></p>
   */
  class RDSDatabaseProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDatabaseProjectedMetric();
    AWS_COMPUTEOPTIMIZER_API RDSDatabaseProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDatabaseProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the projected metric. </p>
     */
    inline const RDSDBMetricName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const RDSDBMetricName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(RDSDBMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline RDSDatabaseProjectedMetric& WithName(const RDSDBMetricName& value) { SetName(value); return *this;}
    inline RDSDatabaseProjectedMetric& WithName(RDSDBMetricName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamps of the projected metric. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }
    inline RDSDatabaseProjectedMetric& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}
    inline RDSDatabaseProjectedMetric& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}
    inline RDSDatabaseProjectedMetric& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }
    inline RDSDatabaseProjectedMetric& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The values for the projected metric. </p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline RDSDatabaseProjectedMetric& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}
    inline RDSDatabaseProjectedMetric& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}
    inline RDSDatabaseProjectedMetric& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    RDSDBMetricName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
