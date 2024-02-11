/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomConnectorSourceProperties.h>
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

CustomConnectorSourceProperties::CustomConnectorSourceProperties() : 
    m_entityNameHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_dataTransferApiHasBeenSet(false)
{
}

CustomConnectorSourceProperties::CustomConnectorSourceProperties(JsonView jsonValue) : 
    m_entityNameHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_dataTransferApiHasBeenSet(false)
{
  *this = jsonValue;
}

CustomConnectorSourceProperties& CustomConnectorSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityName"))
  {
    m_entityName = jsonValue.GetString("entityName");

    m_entityNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("dataTransferApi"))
  {
    m_dataTransferApi = jsonValue.GetObject("dataTransferApi");

    m_dataTransferApiHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomConnectorSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("entityName", m_entityName);

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

  if(m_dataTransferApiHasBeenSet)
  {
   payload.WithObject("dataTransferApi", m_dataTransferApi.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
