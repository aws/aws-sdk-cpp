/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/RelationshipType.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Aggregated details about the measures contributing to the anomaly group, and
   * the measures potentially impacted by the anomaly group.</p> <p/><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/InterMetricImpactDetails">AWS
   * API Reference</a></p>
   */
  class InterMetricImpactDetails
  {
  public:
    AWS_LOOKOUTMETRICS_API InterMetricImpactDetails() = default;
    AWS_LOOKOUTMETRICS_API InterMetricImpactDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API InterMetricImpactDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the measure.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    InterMetricImpactDetails& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const { return m_anomalyGroupId; }
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }
    template<typename AnomalyGroupIdT = Aws::String>
    void SetAnomalyGroupId(AnomalyGroupIdT&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::forward<AnomalyGroupIdT>(value); }
    template<typename AnomalyGroupIdT = Aws::String>
    InterMetricImpactDetails& WithAnomalyGroupId(AnomalyGroupIdT&& value) { SetAnomalyGroupId(std::forward<AnomalyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline RelationshipType GetRelationshipType() const { return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(RelationshipType value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline InterMetricImpactDetails& WithRelationshipType(RelationshipType value) { SetRelationshipType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For potential causes (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), the
     * percentage contribution the measure has in causing the anomalies.</p>
     */
    inline double GetContributionPercentage() const { return m_contributionPercentage; }
    inline bool ContributionPercentageHasBeenSet() const { return m_contributionPercentageHasBeenSet; }
    inline void SetContributionPercentage(double value) { m_contributionPercentageHasBeenSet = true; m_contributionPercentage = value; }
    inline InterMetricImpactDetails& WithContributionPercentage(double value) { SetContributionPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    RelationshipType m_relationshipType{RelationshipType::NOT_SET};
    bool m_relationshipTypeHasBeenSet = false;

    double m_contributionPercentage{0.0};
    bool m_contributionPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
