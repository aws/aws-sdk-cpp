/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/ExperimentResultResponseType.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains experiment results for one metric that is monitored
   * in the experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ExperimentResultsData">AWS
   * API Reference</a></p>
   */
  class ExperimentResultsData
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultsData() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    ExperimentResultsData& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment statistic that these results pertain to.</p>
     */
    inline ExperimentResultResponseType GetResultStat() const { return m_resultStat; }
    inline bool ResultStatHasBeenSet() const { return m_resultStatHasBeenSet; }
    inline void SetResultStat(ExperimentResultResponseType value) { m_resultStatHasBeenSet = true; m_resultStat = value; }
    inline ExperimentResultsData& WithResultStat(ExperimentResultResponseType value) { SetResultStat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The treatment, or variation, that returned the <code>values</code> in this
     * structure.</p>
     */
    inline const Aws::String& GetTreatmentName() const { return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    template<typename TreatmentNameT = Aws::String>
    void SetTreatmentName(TreatmentNameT&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::forward<TreatmentNameT>(value); }
    template<typename TreatmentNameT = Aws::String>
    ExperimentResultsData& WithTreatmentName(TreatmentNameT&& value) { SetTreatmentName(std::forward<TreatmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the <code>metricName</code> that were recorded in the
     * experiment.</p>
     */
    inline const Aws::Vector<double>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<double>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<double>>
    ExperimentResultsData& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline ExperimentResultsData& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    ExperimentResultResponseType m_resultStat{ExperimentResultResponseType::NOT_SET};
    bool m_resultStatHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
