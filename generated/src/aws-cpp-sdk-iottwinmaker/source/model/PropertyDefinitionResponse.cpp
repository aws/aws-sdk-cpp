/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyDefinitionResponse.h>
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

PropertyDefinitionResponse::PropertyDefinitionResponse() : 
    m_dataTypeHasBeenSet(false),
    m_isTimeSeries(false),
    m_isTimeSeriesHasBeenSet(false),
    m_isRequiredInEntity(false),
    m_isRequiredInEntityHasBeenSet(false),
    m_isExternalId(false),
    m_isExternalIdHasBeenSet(false),
    m_isStoredExternally(false),
    m_isStoredExternallyHasBeenSet(false),
    m_isImported(false),
    m_isImportedHasBeenSet(false),
    m_isFinal(false),
    m_isFinalHasBeenSet(false),
    m_isInherited(false),
    m_isInheritedHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

PropertyDefinitionResponse::PropertyDefinitionResponse(JsonView jsonValue) : 
    m_dataTypeHasBeenSet(false),
    m_isTimeSeries(false),
    m_isTimeSeriesHasBeenSet(false),
    m_isRequiredInEntity(false),
    m_isRequiredInEntityHasBeenSet(false),
    m_isExternalId(false),
    m_isExternalIdHasBeenSet(false),
    m_isStoredExternally(false),
    m_isStoredExternallyHasBeenSet(false),
    m_isImported(false),
    m_isImportedHasBeenSet(false),
    m_isFinal(false),
    m_isFinalHasBeenSet(false),
    m_isInherited(false),
    m_isInheritedHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyDefinitionResponse& PropertyDefinitionResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = jsonValue.GetObject("dataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTimeSeries"))
  {
    m_isTimeSeries = jsonValue.GetBool("isTimeSeries");

    m_isTimeSeriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRequiredInEntity"))
  {
    m_isRequiredInEntity = jsonValue.GetBool("isRequiredInEntity");

    m_isRequiredInEntityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isExternalId"))
  {
    m_isExternalId = jsonValue.GetBool("isExternalId");

    m_isExternalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isStoredExternally"))
  {
    m_isStoredExternally = jsonValue.GetBool("isStoredExternally");

    m_isStoredExternallyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isImported"))
  {
    m_isImported = jsonValue.GetBool("isImported");

    m_isImportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isFinal"))
  {
    m_isFinal = jsonValue.GetBool("isFinal");

    m_isFinalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isInherited"))
  {
    m_isInherited = jsonValue.GetBool("isInherited");

    m_isInheritedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetObject("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuration"))
  {
    Aws::Map<Aws::String, JsonView> configurationJsonMap = jsonValue.GetObject("configuration").GetAllObjects();
    for(auto& configurationItem : configurationJsonMap)
    {
      m_configuration[configurationItem.first] = configurationItem.second.AsString();
    }
    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyDefinitionResponse::Jsonize() const
{
  JsonValue payload;

  if(m_dataTypeHasBeenSet)
  {
   payload.WithObject("dataType", m_dataType.Jsonize());

  }

  if(m_isTimeSeriesHasBeenSet)
  {
   payload.WithBool("isTimeSeries", m_isTimeSeries);

  }

  if(m_isRequiredInEntityHasBeenSet)
  {
   payload.WithBool("isRequiredInEntity", m_isRequiredInEntity);

  }

  if(m_isExternalIdHasBeenSet)
  {
   payload.WithBool("isExternalId", m_isExternalId);

  }

  if(m_isStoredExternallyHasBeenSet)
  {
   payload.WithBool("isStoredExternally", m_isStoredExternally);

  }

  if(m_isImportedHasBeenSet)
  {
   payload.WithBool("isImported", m_isImported);

  }

  if(m_isFinalHasBeenSet)
  {
   payload.WithBool("isFinal", m_isFinal);

  }

  if(m_isInheritedHasBeenSet)
  {
   payload.WithBool("isInherited", m_isInherited);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithObject("defaultValue", m_defaultValue.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   JsonValue configurationJsonMap;
   for(auto& configurationItem : m_configuration)
   {
     configurationJsonMap.WithString(configurationItem.first, configurationItem.second);
   }
   payload.WithObject("configuration", std::move(configurationJsonMap));

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
