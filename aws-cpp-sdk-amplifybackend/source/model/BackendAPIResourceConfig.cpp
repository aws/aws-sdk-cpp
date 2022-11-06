/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendAPIResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

BackendAPIResourceConfig::BackendAPIResourceConfig() : 
    m_additionalAuthTypesHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_defaultAuthTypeHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_transformSchemaHasBeenSet(false)
{
}

BackendAPIResourceConfig::BackendAPIResourceConfig(JsonView jsonValue) : 
    m_additionalAuthTypesHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_defaultAuthTypeHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_transformSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

BackendAPIResourceConfig& BackendAPIResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalAuthTypes"))
  {
    Aws::Utils::Array<JsonView> additionalAuthTypesJsonList = jsonValue.GetArray("additionalAuthTypes");
    for(unsigned additionalAuthTypesIndex = 0; additionalAuthTypesIndex < additionalAuthTypesJsonList.GetLength(); ++additionalAuthTypesIndex)
    {
      m_additionalAuthTypes.push_back(additionalAuthTypesJsonList[additionalAuthTypesIndex].AsObject());
    }
    m_additionalAuthTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiName"))
  {
    m_apiName = jsonValue.GetString("apiName");

    m_apiNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conflictResolution"))
  {
    m_conflictResolution = jsonValue.GetObject("conflictResolution");

    m_conflictResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultAuthType"))
  {
    m_defaultAuthType = jsonValue.GetObject("defaultAuthType");

    m_defaultAuthTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transformSchema"))
  {
    m_transformSchema = jsonValue.GetString("transformSchema");

    m_transformSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendAPIResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_additionalAuthTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAuthTypesJsonList(m_additionalAuthTypes.size());
   for(unsigned additionalAuthTypesIndex = 0; additionalAuthTypesIndex < additionalAuthTypesJsonList.GetLength(); ++additionalAuthTypesIndex)
   {
     additionalAuthTypesJsonList[additionalAuthTypesIndex].AsObject(m_additionalAuthTypes[additionalAuthTypesIndex].Jsonize());
   }
   payload.WithArray("additionalAuthTypes", std::move(additionalAuthTypesJsonList));

  }

  if(m_apiNameHasBeenSet)
  {
   payload.WithString("apiName", m_apiName);

  }

  if(m_conflictResolutionHasBeenSet)
  {
   payload.WithObject("conflictResolution", m_conflictResolution.Jsonize());

  }

  if(m_defaultAuthTypeHasBeenSet)
  {
   payload.WithObject("defaultAuthType", m_defaultAuthType.Jsonize());

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_transformSchemaHasBeenSet)
  {
   payload.WithString("transformSchema", m_transformSchema);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
