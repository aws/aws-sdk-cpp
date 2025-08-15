/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IntegrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

IntegrationConfig::IntegrationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IntegrationConfig& IntegrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RefreshInterval"))
  {
    m_refreshInterval = jsonValue.GetString("RefreshInterval");
    m_refreshIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceProperties"))
  {
    Aws::Map<Aws::String, JsonView> sourcePropertiesJsonMap = jsonValue.GetObject("SourceProperties").GetAllObjects();
    for(auto& sourcePropertiesItem : sourcePropertiesJsonMap)
    {
      m_sourceProperties[sourcePropertiesItem.first] = sourcePropertiesItem.second.AsString();
    }
    m_sourcePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContinuousSync"))
  {
    m_continuousSync = jsonValue.GetBool("ContinuousSync");
    m_continuousSyncHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_refreshIntervalHasBeenSet)
  {
   payload.WithString("RefreshInterval", m_refreshInterval);

  }

  if(m_sourcePropertiesHasBeenSet)
  {
   JsonValue sourcePropertiesJsonMap;
   for(auto& sourcePropertiesItem : m_sourceProperties)
   {
     sourcePropertiesJsonMap.WithString(sourcePropertiesItem.first, sourcePropertiesItem.second);
   }
   payload.WithObject("SourceProperties", std::move(sourcePropertiesJsonMap));

  }

  if(m_continuousSyncHasBeenSet)
  {
   payload.WithBool("ContinuousSync", m_continuousSync);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
