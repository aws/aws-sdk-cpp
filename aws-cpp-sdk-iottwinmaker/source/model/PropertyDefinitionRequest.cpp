﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

PropertyDefinitionRequest::PropertyDefinitionRequest() : 
    m_configurationHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isExternalId(false),
    m_isExternalIdHasBeenSet(false),
    m_isRequiredInEntity(false),
    m_isRequiredInEntityHasBeenSet(false),
    m_isStoredExternally(false),
    m_isStoredExternallyHasBeenSet(false),
    m_isTimeSeries(false),
    m_isTimeSeriesHasBeenSet(false)
{
}

PropertyDefinitionRequest::PropertyDefinitionRequest(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isExternalId(false),
    m_isExternalIdHasBeenSet(false),
    m_isRequiredInEntity(false),
    m_isRequiredInEntityHasBeenSet(false),
    m_isStoredExternally(false),
    m_isStoredExternallyHasBeenSet(false),
    m_isTimeSeries(false),
    m_isTimeSeriesHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyDefinitionRequest& PropertyDefinitionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    Aws::Map<Aws::String, JsonView> configurationJsonMap = jsonValue.GetObject("configuration").GetAllObjects();
    for(auto& configurationItem : configurationJsonMap)
    {
      m_configuration[configurationItem.first] = configurationItem.second.AsString();
    }
    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = jsonValue.GetObject("dataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetObject("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isExternalId"))
  {
    m_isExternalId = jsonValue.GetBool("isExternalId");

    m_isExternalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRequiredInEntity"))
  {
    m_isRequiredInEntity = jsonValue.GetBool("isRequiredInEntity");

    m_isRequiredInEntityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isStoredExternally"))
  {
    m_isStoredExternally = jsonValue.GetBool("isStoredExternally");

    m_isStoredExternallyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTimeSeries"))
  {
    m_isTimeSeries = jsonValue.GetBool("isTimeSeries");

    m_isTimeSeriesHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyDefinitionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   JsonValue configurationJsonMap;
   for(auto& configurationItem : m_configuration)
   {
     configurationJsonMap.WithString(configurationItem.first, configurationItem.second);
   }
   payload.WithObject("configuration", std::move(configurationJsonMap));

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithObject("dataType", m_dataType.Jsonize());

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithObject("defaultValue", m_defaultValue.Jsonize());

  }

  if(m_isExternalIdHasBeenSet)
  {
   payload.WithBool("isExternalId", m_isExternalId);

  }

  if(m_isRequiredInEntityHasBeenSet)
  {
   payload.WithBool("isRequiredInEntity", m_isRequiredInEntity);

  }

  if(m_isStoredExternallyHasBeenSet)
  {
   payload.WithBool("isStoredExternally", m_isStoredExternally);

  }

  if(m_isTimeSeriesHasBeenSet)
  {
   payload.WithBool("isTimeSeries", m_isTimeSeries);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
