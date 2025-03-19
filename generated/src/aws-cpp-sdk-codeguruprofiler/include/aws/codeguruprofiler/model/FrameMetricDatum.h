/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/FrameMetric.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> Information about a frame metric and its values. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/FrameMetricDatum">AWS
   * API Reference</a></p>
   */
  class FrameMetricDatum
  {
  public:
    AWS_CODEGURUPROFILER_API FrameMetricDatum() = default;
    AWS_CODEGURUPROFILER_API FrameMetricDatum(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API FrameMetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FrameMetric& GetFrameMetric() const { return m_frameMetric; }
    inline bool FrameMetricHasBeenSet() const { return m_frameMetricHasBeenSet; }
    template<typename FrameMetricT = FrameMetric>
    void SetFrameMetric(FrameMetricT&& value) { m_frameMetricHasBeenSet = true; m_frameMetric = std::forward<FrameMetricT>(value); }
    template<typename FrameMetricT = FrameMetric>
    FrameMetricDatum& WithFrameMetric(FrameMetricT&& value) { SetFrameMetric(std::forward<FrameMetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of values that are associated with a frame metric. </p>
     */
    inline const Aws::Vector<double>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<double>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<double>>
    FrameMetricDatum& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline FrameMetricDatum& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    FrameMetric m_frameMetric;
    bool m_frameMetricHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
