﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetPropertyValueHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPropertyValueHistoryRequest::GetPropertyValueHistoryRequest() : 
    m_componentNameHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_interpolationHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_orderByTime(OrderByTime::NOT_SET),
    m_orderByTimeHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false),
    m_selectedPropertiesHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String GetPropertyValueHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("endDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_interpolationHasBeenSet)
  {
   payload.WithObject("interpolation", m_interpolation.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_orderByTimeHasBeenSet)
  {
   payload.WithString("orderByTime", OrderByTimeMapper::GetNameForOrderByTime(m_orderByTime));
  }

  if(m_propertyFiltersHasBeenSet)
  {
   Array<JsonValue> propertyFiltersJsonList(m_propertyFilters.size());
   for(unsigned propertyFiltersIndex = 0; propertyFiltersIndex < propertyFiltersJsonList.GetLength(); ++propertyFiltersIndex)
   {
     propertyFiltersJsonList[propertyFiltersIndex].AsObject(m_propertyFilters[propertyFiltersIndex].Jsonize());
   }
   payload.WithArray("propertyFilters", std::move(propertyFiltersJsonList));

  }

  if(m_selectedPropertiesHasBeenSet)
  {
   Array<JsonValue> selectedPropertiesJsonList(m_selectedProperties.size());
   for(unsigned selectedPropertiesIndex = 0; selectedPropertiesIndex < selectedPropertiesJsonList.GetLength(); ++selectedPropertiesIndex)
   {
     selectedPropertiesJsonList[selectedPropertiesIndex].AsString(m_selectedProperties[selectedPropertiesIndex]);
   }
   payload.WithArray("selectedProperties", std::move(selectedPropertiesJsonList));

  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("startDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




