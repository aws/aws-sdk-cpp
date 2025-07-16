/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SchemaDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

SchemaDefinition::SchemaDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaDefinition& SchemaDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = SchemaTypeMapper::GetSchemaTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsObject();
    }
    m_propertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("required"))
  {
    Aws::Utils::Array<JsonView> requiredJsonList = jsonValue.GetArray("required");
    for(unsigned requiredIndex = 0; requiredIndex < requiredJsonList.GetLength(); ++requiredIndex)
    {
      m_required.push_back(requiredJsonList[requiredIndex].AsString());
    }
    m_requiredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("items"))
  {
    m_items = Aws::MakeShared<SchemaDefinition>("SchemaDefinition", jsonValue.GetObject("items"));
    m_itemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SchemaTypeMapper::GetNameForSchemaType(m_type));
  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithObject(propertiesItem.first, propertiesItem.second.Jsonize());
   }
   payload.WithObject("properties", std::move(propertiesJsonMap));

  }

  if(m_requiredHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredJsonList(m_required.size());
   for(unsigned requiredIndex = 0; requiredIndex < requiredJsonList.GetLength(); ++requiredIndex)
   {
     requiredJsonList[requiredIndex].AsString(m_required[requiredIndex]);
   }
   payload.WithArray("required", std::move(requiredJsonList));

  }

  if(m_itemsHasBeenSet)
  {
   payload.WithObject("items", m_items->Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
