/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/KafkaSchemaRegistryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

KafkaSchemaRegistryConfig::KafkaSchemaRegistryConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

KafkaSchemaRegistryConfig& KafkaSchemaRegistryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaRegistryURI"))
  {
    m_schemaRegistryURI = jsonValue.GetString("SchemaRegistryURI");
    m_schemaRegistryURIHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventRecordFormat"))
  {
    m_eventRecordFormat = SchemaRegistryEventRecordFormatMapper::GetSchemaRegistryEventRecordFormatForName(jsonValue.GetString("EventRecordFormat"));
    m_eventRecordFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessConfigs"))
  {
    Aws::Utils::Array<JsonView> accessConfigsJsonList = jsonValue.GetArray("AccessConfigs");
    for(unsigned accessConfigsIndex = 0; accessConfigsIndex < accessConfigsJsonList.GetLength(); ++accessConfigsIndex)
    {
      m_accessConfigs.push_back(accessConfigsJsonList[accessConfigsIndex].AsObject());
    }
    m_accessConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaValidationConfigs"))
  {
    Aws::Utils::Array<JsonView> schemaValidationConfigsJsonList = jsonValue.GetArray("SchemaValidationConfigs");
    for(unsigned schemaValidationConfigsIndex = 0; schemaValidationConfigsIndex < schemaValidationConfigsJsonList.GetLength(); ++schemaValidationConfigsIndex)
    {
      m_schemaValidationConfigs.push_back(schemaValidationConfigsJsonList[schemaValidationConfigsIndex].AsObject());
    }
    m_schemaValidationConfigsHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaSchemaRegistryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_schemaRegistryURIHasBeenSet)
  {
   payload.WithString("SchemaRegistryURI", m_schemaRegistryURI);

  }

  if(m_eventRecordFormatHasBeenSet)
  {
   payload.WithString("EventRecordFormat", SchemaRegistryEventRecordFormatMapper::GetNameForSchemaRegistryEventRecordFormat(m_eventRecordFormat));
  }

  if(m_accessConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessConfigsJsonList(m_accessConfigs.size());
   for(unsigned accessConfigsIndex = 0; accessConfigsIndex < accessConfigsJsonList.GetLength(); ++accessConfigsIndex)
   {
     accessConfigsJsonList[accessConfigsIndex].AsObject(m_accessConfigs[accessConfigsIndex].Jsonize());
   }
   payload.WithArray("AccessConfigs", std::move(accessConfigsJsonList));

  }

  if(m_schemaValidationConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaValidationConfigsJsonList(m_schemaValidationConfigs.size());
   for(unsigned schemaValidationConfigsIndex = 0; schemaValidationConfigsIndex < schemaValidationConfigsJsonList.GetLength(); ++schemaValidationConfigsIndex)
   {
     schemaValidationConfigsJsonList[schemaValidationConfigsIndex].AsObject(m_schemaValidationConfigs[schemaValidationConfigsIndex].Jsonize());
   }
   payload.WithArray("SchemaValidationConfigs", std::move(schemaValidationConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
