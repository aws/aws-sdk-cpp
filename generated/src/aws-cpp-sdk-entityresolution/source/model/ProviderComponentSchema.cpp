/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProviderComponentSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

ProviderComponentSchema::ProviderComponentSchema() : 
    m_providerSchemaAttributesHasBeenSet(false),
    m_schemasHasBeenSet(false)
{
}

ProviderComponentSchema::ProviderComponentSchema(JsonView jsonValue) : 
    m_providerSchemaAttributesHasBeenSet(false),
    m_schemasHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderComponentSchema& ProviderComponentSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerSchemaAttributes"))
  {
    Aws::Utils::Array<JsonView> providerSchemaAttributesJsonList = jsonValue.GetArray("providerSchemaAttributes");
    for(unsigned providerSchemaAttributesIndex = 0; providerSchemaAttributesIndex < providerSchemaAttributesJsonList.GetLength(); ++providerSchemaAttributesIndex)
    {
      m_providerSchemaAttributes.push_back(providerSchemaAttributesJsonList[providerSchemaAttributesIndex].AsObject());
    }
    m_providerSchemaAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemas"))
  {
    Aws::Utils::Array<JsonView> schemasJsonList = jsonValue.GetArray("schemas");
    for(unsigned schemasIndex = 0; schemasIndex < schemasJsonList.GetLength(); ++schemasIndex)
    {
      Aws::Utils::Array<JsonView> schemaListJsonList = schemasJsonList[schemasIndex].AsArray();
      Aws::Vector<Aws::String> schemaListList;
      schemaListList.reserve((size_t)schemaListJsonList.GetLength());
      for(unsigned schemaListIndex = 0; schemaListIndex < schemaListJsonList.GetLength(); ++schemaListIndex)
      {
        schemaListList.push_back(schemaListJsonList[schemaListIndex].AsString());
      }
      m_schemas.push_back(std::move(schemaListList));
    }
    m_schemasHasBeenSet = true;
  }

  return *this;
}

JsonValue ProviderComponentSchema::Jsonize() const
{
  JsonValue payload;

  if(m_providerSchemaAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> providerSchemaAttributesJsonList(m_providerSchemaAttributes.size());
   for(unsigned providerSchemaAttributesIndex = 0; providerSchemaAttributesIndex < providerSchemaAttributesJsonList.GetLength(); ++providerSchemaAttributesIndex)
   {
     providerSchemaAttributesJsonList[providerSchemaAttributesIndex].AsObject(m_providerSchemaAttributes[providerSchemaAttributesIndex].Jsonize());
   }
   payload.WithArray("providerSchemaAttributes", std::move(providerSchemaAttributesJsonList));

  }

  if(m_schemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemasJsonList(m_schemas.size());
   for(unsigned schemasIndex = 0; schemasIndex < schemasJsonList.GetLength(); ++schemasIndex)
   {
     Aws::Utils::Array<JsonValue> schemaListJsonList(m_schemas[schemasIndex].size());
     for(unsigned schemaListIndex = 0; schemaListIndex < schemaListJsonList.GetLength(); ++schemaListIndex)
     {
       schemaListJsonList[schemaListIndex].AsString(m_schemas[schemasIndex][schemaListIndex]);
     }
     schemasJsonList[schemasIndex].AsArray(std::move(schemaListJsonList));
   }
   payload.WithArray("schemas", std::move(schemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
