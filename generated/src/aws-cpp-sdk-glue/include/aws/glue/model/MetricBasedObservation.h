/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityMetricValues.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the metric based observation generated based on evaluated data
   * quality metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MetricBasedObservation">AWS
   * API Reference</a></p>
   */
  class MetricBasedObservation
  {
  public:
    AWS_GLUE_API MetricBasedObservation() = default;
    AWS_GLUE_API MetricBasedObservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MetricBasedObservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality metric used for generating the observation.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricBasedObservation& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const { return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    template<typename StatisticIdT = Aws::String>
    void SetStatisticId(StatisticIdT&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::forward<StatisticIdT>(value); }
    template<typename StatisticIdT = Aws::String>
    MetricBasedObservation& WithStatisticId(StatisticIdT&& value) { SetStatisticId(std::forward<StatisticIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object of type <code>DataQualityMetricValues</code> representing the
     * analysis of the data quality metric value.</p>
     */
    inline const DataQualityMetricValues& GetMetricValues() const { return m_metricValues; }
    inline bool MetricValuesHasBeenSet() const { return m_metricValuesHasBeenSet; }
    template<typename MetricValuesT = DataQualityMetricValues>
    void SetMetricValues(MetricValuesT&& value) { m_metricValuesHasBeenSet = true; m_metricValues = std::forward<MetricValuesT>(value); }
    template<typename MetricValuesT = DataQualityMetricValues>
    MetricBasedObservation& WithMetricValues(MetricValuesT&& value) { SetMetricValues(std::forward<MetricValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of new data quality rules generated as part of the observation based
     * on the data quality metric value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewRules() const { return m_newRules; }
    inline bool NewRulesHasBeenSet() const { return m_newRulesHasBeenSet; }
    template<typename NewRulesT = Aws::Vector<Aws::String>>
    void SetNewRules(NewRulesT&& value) { m_newRulesHasBeenSet = true; m_newRules = std::forward<NewRulesT>(value); }
    template<typename NewRulesT = Aws::Vector<Aws::String>>
    MetricBasedObservation& WithNewRules(NewRulesT&& value) { SetNewRules(std::forward<NewRulesT>(value)); return *this;}
    template<typename NewRulesT = Aws::String>
    MetricBasedObservation& AddNewRules(NewRulesT&& value) { m_newRulesHasBeenSet = true; m_newRules.emplace_back(std::forward<NewRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    DataQualityMetricValues m_metricValues;
    bool m_metricValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_newRules;
    bool m_newRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
