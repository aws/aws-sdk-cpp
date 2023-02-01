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
    AWS_LOOKOUTMETRICS_API InterMetricImpactDetails();
    AWS_LOOKOUTMETRICS_API InterMetricImpactDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API InterMetricImpactDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the measure.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the measure.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the measure.</p>
     */
    inline InterMetricImpactDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the measure.</p>
     */
    inline InterMetricImpactDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the measure.</p>
     */
    inline InterMetricImpactDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const{ return m_anomalyGroupId; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(const Aws::String& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = value; }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(Aws::String&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::move(value); }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline void SetAnomalyGroupId(const char* value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId.assign(value); }

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline InterMetricImpactDetails& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline InterMetricImpactDetails& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline InterMetricImpactDetails& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}


    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline const RelationshipType& GetRelationshipType() const{ return m_relationshipType; }

    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }

    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline void SetRelationshipType(const RelationshipType& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }

    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline void SetRelationshipType(RelationshipType&& value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = std::move(value); }

    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline InterMetricImpactDetails& WithRelationshipType(const RelationshipType& value) { SetRelationshipType(value); return *this;}

    /**
     * <p>Whether a measure is a potential cause of the anomaly group
     * (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), or whether the measure is impacted
     * by the anomaly group (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>).</p>
     */
    inline InterMetricImpactDetails& WithRelationshipType(RelationshipType&& value) { SetRelationshipType(std::move(value)); return *this;}


    /**
     * <p>For potential causes (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), the
     * percentage contribution the measure has in causing the anomalies.</p>
     */
    inline double GetContributionPercentage() const{ return m_contributionPercentage; }

    /**
     * <p>For potential causes (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), the
     * percentage contribution the measure has in causing the anomalies.</p>
     */
    inline bool ContributionPercentageHasBeenSet() const { return m_contributionPercentageHasBeenSet; }

    /**
     * <p>For potential causes (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), the
     * percentage contribution the measure has in causing the anomalies.</p>
     */
    inline void SetContributionPercentage(double value) { m_contributionPercentageHasBeenSet = true; m_contributionPercentage = value; }

    /**
     * <p>For potential causes (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>), the
     * percentage contribution the measure has in causing the anomalies.</p>
     */
    inline InterMetricImpactDetails& WithContributionPercentage(double value) { SetContributionPercentage(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    RelationshipType m_relationshipType;
    bool m_relationshipTypeHasBeenSet = false;

    double m_contributionPercentage;
    bool m_contributionPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
