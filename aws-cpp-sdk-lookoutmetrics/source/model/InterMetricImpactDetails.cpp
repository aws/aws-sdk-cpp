/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/InterMetricImpactDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

InterMetricImpactDetails::InterMetricImpactDetails() : 
    m_metricNameHasBeenSet(false),
    m_anomalyGroupIdHasBeenSet(false),
    m_relationshipType(RelationshipType::NOT_SET),
    m_relationshipTypeHasBeenSet(false),
    m_contributionPercentage(0.0),
    m_contributionPercentageHasBeenSet(false)
{
}

InterMetricImpactDetails::InterMetricImpactDetails(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_anomalyGroupIdHasBeenSet(false),
    m_relationshipType(RelationshipType::NOT_SET),
    m_relationshipTypeHasBeenSet(false),
    m_contributionPercentage(0.0),
    m_contributionPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

InterMetricImpactDetails& InterMetricImpactDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyGroupId"))
  {
    m_anomalyGroupId = jsonValue.GetString("AnomalyGroupId");

    m_anomalyGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelationshipType"))
  {
    m_relationshipType = RelationshipTypeMapper::GetRelationshipTypeForName(jsonValue.GetString("RelationshipType"));

    m_relationshipTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContributionPercentage"))
  {
    m_contributionPercentage = jsonValue.GetDouble("ContributionPercentage");

    m_contributionPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue InterMetricImpactDetails::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_anomalyGroupIdHasBeenSet)
  {
   payload.WithString("AnomalyGroupId", m_anomalyGroupId);

  }

  if(m_relationshipTypeHasBeenSet)
  {
   payload.WithString("RelationshipType", RelationshipTypeMapper::GetNameForRelationshipType(m_relationshipType));
  }

  if(m_contributionPercentageHasBeenSet)
  {
   payload.WithDouble("ContributionPercentage", m_contributionPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
