﻿/**
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
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultsData();
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentResultsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline ExperimentResultsData& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline ExperimentResultsData& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline ExperimentResultsData& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment statistic that these results pertain to.</p>
     */
    inline const ExperimentResultResponseType& GetResultStat() const{ return m_resultStat; }
    inline bool ResultStatHasBeenSet() const { return m_resultStatHasBeenSet; }
    inline void SetResultStat(const ExperimentResultResponseType& value) { m_resultStatHasBeenSet = true; m_resultStat = value; }
    inline void SetResultStat(ExperimentResultResponseType&& value) { m_resultStatHasBeenSet = true; m_resultStat = std::move(value); }
    inline ExperimentResultsData& WithResultStat(const ExperimentResultResponseType& value) { SetResultStat(value); return *this;}
    inline ExperimentResultsData& WithResultStat(ExperimentResultResponseType&& value) { SetResultStat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The treatment, or variation, that returned the <code>values</code> in this
     * structure.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }
    inline ExperimentResultsData& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}
    inline ExperimentResultsData& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}
    inline ExperimentResultsData& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the <code>metricName</code> that were recorded in the
     * experiment.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ExperimentResultsData& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}
    inline ExperimentResultsData& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}
    inline ExperimentResultsData& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    ExperimentResultResponseType m_resultStat;
    bool m_resultStatHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
