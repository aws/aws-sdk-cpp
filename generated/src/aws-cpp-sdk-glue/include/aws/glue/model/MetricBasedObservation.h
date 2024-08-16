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
    AWS_GLUE_API MetricBasedObservation();
    AWS_GLUE_API MetricBasedObservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MetricBasedObservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality metric used for generating the observation.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline MetricBasedObservation& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline MetricBasedObservation& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline MetricBasedObservation& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const{ return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    inline void SetStatisticId(const Aws::String& value) { m_statisticIdHasBeenSet = true; m_statisticId = value; }
    inline void SetStatisticId(Aws::String&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::move(value); }
    inline void SetStatisticId(const char* value) { m_statisticIdHasBeenSet = true; m_statisticId.assign(value); }
    inline MetricBasedObservation& WithStatisticId(const Aws::String& value) { SetStatisticId(value); return *this;}
    inline MetricBasedObservation& WithStatisticId(Aws::String&& value) { SetStatisticId(std::move(value)); return *this;}
    inline MetricBasedObservation& WithStatisticId(const char* value) { SetStatisticId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object of type <code>DataQualityMetricValues</code> representing the
     * analysis of the data quality metric value.</p>
     */
    inline const DataQualityMetricValues& GetMetricValues() const{ return m_metricValues; }
    inline bool MetricValuesHasBeenSet() const { return m_metricValuesHasBeenSet; }
    inline void SetMetricValues(const DataQualityMetricValues& value) { m_metricValuesHasBeenSet = true; m_metricValues = value; }
    inline void SetMetricValues(DataQualityMetricValues&& value) { m_metricValuesHasBeenSet = true; m_metricValues = std::move(value); }
    inline MetricBasedObservation& WithMetricValues(const DataQualityMetricValues& value) { SetMetricValues(value); return *this;}
    inline MetricBasedObservation& WithMetricValues(DataQualityMetricValues&& value) { SetMetricValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of new data quality rules generated as part of the observation based
     * on the data quality metric value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewRules() const{ return m_newRules; }
    inline bool NewRulesHasBeenSet() const { return m_newRulesHasBeenSet; }
    inline void SetNewRules(const Aws::Vector<Aws::String>& value) { m_newRulesHasBeenSet = true; m_newRules = value; }
    inline void SetNewRules(Aws::Vector<Aws::String>&& value) { m_newRulesHasBeenSet = true; m_newRules = std::move(value); }
    inline MetricBasedObservation& WithNewRules(const Aws::Vector<Aws::String>& value) { SetNewRules(value); return *this;}
    inline MetricBasedObservation& WithNewRules(Aws::Vector<Aws::String>&& value) { SetNewRules(std::move(value)); return *this;}
    inline MetricBasedObservation& AddNewRules(const Aws::String& value) { m_newRulesHasBeenSet = true; m_newRules.push_back(value); return *this; }
    inline MetricBasedObservation& AddNewRules(Aws::String&& value) { m_newRulesHasBeenSet = true; m_newRules.push_back(std::move(value)); return *this; }
    inline MetricBasedObservation& AddNewRules(const char* value) { m_newRulesHasBeenSet = true; m_newRules.push_back(value); return *this; }
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
