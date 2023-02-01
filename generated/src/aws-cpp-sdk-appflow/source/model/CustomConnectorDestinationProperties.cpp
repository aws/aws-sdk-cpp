/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomConnectorDestinationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

CustomConnectorDestinationProperties::CustomConnectorDestinationProperties() : 
    m_entityNameHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false),
    m_writeOperationType(WriteOperationType::NOT_SET),
    m_writeOperationTypeHasBeenSet(false),
    m_idFieldNamesHasBeenSet(false),
    m_customPropertiesHasBeenSet(false)
{
}

CustomConnectorDestinationProperties::CustomConnectorDestinationProperties(JsonView jsonValue) : 
    m_entityNameHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false),
    m_writeOperationType(WriteOperationType::NOT_SET),
    m_writeOperationTypeHasBeenSet(false),
    m_idFieldNamesHasBeenSet(false),
    m_customPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomConnectorDestinationProperties& CustomConnectorDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityName"))
  {
    m_entityName = jsonValue.GetString("entityName");

    m_entityNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorHandlingConfig"))
  {
    m_errorHandlingConfig = jsonValue.GetObject("errorHandlingConfig");

    m_errorHandlingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeOperationType"))
  {
    m_writeOperationType = WriteOperationTypeMapper::GetWriteOperationTypeForName(jsonValue.GetString("writeOperationType"));

    m_writeOperationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idFieldNames"))
  {
    Aws::Utils::Array<JsonView> idFieldNamesJsonList = jsonValue.GetArray("idFieldNames");
    for(unsigned idFieldNamesIndex = 0; idFieldNamesIndex < idFieldNamesJsonList.GetLength(); ++idFieldNamesIndex)
    {
      m_idFieldNames.push_back(idFieldNamesJsonList[idFieldNamesIndex].AsString());
    }
    m_idFieldNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customProperties"))
  {
    Aws::Map<Aws::String, JsonView> customPropertiesJsonMap = jsonValue.GetObject("customProperties").GetAllObjects();
    for(auto& customPropertiesItem : customPropertiesJsonMap)
    {
      m_customProperties[customPropertiesItem.first] = customPropertiesItem.second.AsString();
    }
    m_customPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomConnectorDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("entityName", m_entityName);

  }

  if(m_errorHandlingConfigHasBeenSet)
  {
   payload.WithObject("errorHandlingConfig", m_errorHandlingConfig.Jsonize());

  }

  if(m_writeOperationTypeHasBeenSet)
  {
   payload.WithString("writeOperationType", WriteOperationTypeMapper::GetNameForWriteOperationType(m_writeOperationType));
  }

  if(m_idFieldNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idFieldNamesJsonList(m_idFieldNames.size());
   for(unsigned idFieldNamesIndex = 0; idFieldNamesIndex < idFieldNamesJsonList.GetLength(); ++idFieldNamesIndex)
   {
     idFieldNamesJsonList[idFieldNamesIndex].AsString(m_idFieldNames[idFieldNamesIndex]);
   }
   payload.WithArray("idFieldNames", std::move(idFieldNamesJsonList));

  }

  if(m_customPropertiesHasBeenSet)
  {
   JsonValue customPropertiesJsonMap;
   for(auto& customPropertiesItem : m_customProperties)
   {
     customPropertiesJsonMap.WithString(customPropertiesItem.first, customPropertiesItem.second);
   }
   payload.WithObject("customProperties", std::move(customPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
