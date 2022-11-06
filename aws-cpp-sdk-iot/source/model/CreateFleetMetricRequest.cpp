/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateFleetMetricRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetMetricRequest::CreateFleetMetricRequest() : 
    m_metricNameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_aggregationTypeHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_aggregationFieldHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_queryVersionHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_unit(FleetMetricUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFleetMetricRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_aggregationTypeHasBeenSet)
  {
   payload.WithObject("aggregationType", m_aggregationType.Jsonize());

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("period", m_period);

  }

  if(m_aggregationFieldHasBeenSet)
  {
   payload.WithString("aggregationField", m_aggregationField);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_queryVersionHasBeenSet)
  {
   payload.WithString("queryVersion", m_queryVersion);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", FleetMetricUnitMapper::GetNameForFleetMetricUnit(m_unit));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




