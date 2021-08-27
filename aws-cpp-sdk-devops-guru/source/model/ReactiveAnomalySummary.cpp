/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ReactiveAnomalySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ReactiveAnomalySummary::ReactiveAnomalySummary() : 
    m_idHasBeenSet(false),
    m_severity(AnomalySeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(AnomalyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_anomalyTimeRangeHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_associatedInsightIdHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
}

ReactiveAnomalySummary::ReactiveAnomalySummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_severity(AnomalySeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(AnomalyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_anomalyTimeRangeHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_associatedInsightIdHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
  *this = jsonValue;
}

ReactiveAnomalySummary& ReactiveAnomalySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = AnomalySeverityMapper::GetAnomalySeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AnomalyStatusMapper::GetAnomalyStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyTimeRange"))
  {
    m_anomalyTimeRange = jsonValue.GetObject("AnomalyTimeRange");

    m_anomalyTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDetails"))
  {
    m_sourceDetails = jsonValue.GetObject("SourceDetails");

    m_sourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedInsightId"))
  {
    m_associatedInsightId = jsonValue.GetString("AssociatedInsightId");

    m_associatedInsightIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

    m_resourceCollectionHasBeenSet = true;
  }

  return *this;
}

JsonValue ReactiveAnomalySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", AnomalySeverityMapper::GetNameForAnomalySeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AnomalyStatusMapper::GetNameForAnomalyStatus(m_status));
  }

  if(m_anomalyTimeRangeHasBeenSet)
  {
   payload.WithObject("AnomalyTimeRange", m_anomalyTimeRange.Jsonize());

  }

  if(m_sourceDetailsHasBeenSet)
  {
   payload.WithObject("SourceDetails", m_sourceDetails.Jsonize());

  }

  if(m_associatedInsightIdHasBeenSet)
  {
   payload.WithString("AssociatedInsightId", m_associatedInsightId);

  }

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
