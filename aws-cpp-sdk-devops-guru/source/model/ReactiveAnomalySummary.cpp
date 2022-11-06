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
    m_anomalyReportedTimeRangeHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_associatedInsightIdHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_type(AnomalyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_causalAnomalyIdHasBeenSet(false),
    m_anomalyResourcesHasBeenSet(false)
{
}

ReactiveAnomalySummary::ReactiveAnomalySummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_severity(AnomalySeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(AnomalyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_anomalyTimeRangeHasBeenSet(false),
    m_anomalyReportedTimeRangeHasBeenSet(false),
    m_sourceDetailsHasBeenSet(false),
    m_associatedInsightIdHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_type(AnomalyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_causalAnomalyIdHasBeenSet(false),
    m_anomalyResourcesHasBeenSet(false)
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

  if(jsonValue.ValueExists("AnomalyReportedTimeRange"))
  {
    m_anomalyReportedTimeRange = jsonValue.GetObject("AnomalyReportedTimeRange");

    m_anomalyReportedTimeRangeHasBeenSet = true;
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = AnomalyTypeMapper::GetAnomalyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CausalAnomalyId"))
  {
    m_causalAnomalyId = jsonValue.GetString("CausalAnomalyId");

    m_causalAnomalyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyResources"))
  {
    Aws::Utils::Array<JsonView> anomalyResourcesJsonList = jsonValue.GetArray("AnomalyResources");
    for(unsigned anomalyResourcesIndex = 0; anomalyResourcesIndex < anomalyResourcesJsonList.GetLength(); ++anomalyResourcesIndex)
    {
      m_anomalyResources.push_back(anomalyResourcesJsonList[anomalyResourcesIndex].AsObject());
    }
    m_anomalyResourcesHasBeenSet = true;
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

  if(m_anomalyReportedTimeRangeHasBeenSet)
  {
   payload.WithObject("AnomalyReportedTimeRange", m_anomalyReportedTimeRange.Jsonize());

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AnomalyTypeMapper::GetNameForAnomalyType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_causalAnomalyIdHasBeenSet)
  {
   payload.WithString("CausalAnomalyId", m_causalAnomalyId);

  }

  if(m_anomalyResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> anomalyResourcesJsonList(m_anomalyResources.size());
   for(unsigned anomalyResourcesIndex = 0; anomalyResourcesIndex < anomalyResourcesJsonList.GetLength(); ++anomalyResourcesIndex)
   {
     anomalyResourcesJsonList[anomalyResourcesIndex].AsObject(m_anomalyResources[anomalyResourcesIndex].Jsonize());
   }
   payload.WithArray("AnomalyResources", std::move(anomalyResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
