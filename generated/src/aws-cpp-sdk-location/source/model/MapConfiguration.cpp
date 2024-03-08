/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/MapConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

MapConfiguration::MapConfiguration() : 
    m_customLayersHasBeenSet(false),
    m_politicalViewHasBeenSet(false),
    m_styleHasBeenSet(false)
{
}

MapConfiguration::MapConfiguration(JsonView jsonValue) : 
    m_customLayersHasBeenSet(false),
    m_politicalViewHasBeenSet(false),
    m_styleHasBeenSet(false)
{
  *this = jsonValue;
}

MapConfiguration& MapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomLayers"))
  {
    Aws::Utils::Array<JsonView> customLayersJsonList = jsonValue.GetArray("CustomLayers");
    for(unsigned customLayersIndex = 0; customLayersIndex < customLayersJsonList.GetLength(); ++customLayersIndex)
    {
      m_customLayers.push_back(customLayersJsonList[customLayersIndex].AsString());
    }
    m_customLayersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoliticalView"))
  {
    m_politicalView = jsonValue.GetString("PoliticalView");

    m_politicalViewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Style"))
  {
    m_style = jsonValue.GetString("Style");

    m_styleHasBeenSet = true;
  }

  return *this;
}

JsonValue MapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customLayersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customLayersJsonList(m_customLayers.size());
   for(unsigned customLayersIndex = 0; customLayersIndex < customLayersJsonList.GetLength(); ++customLayersIndex)
   {
     customLayersJsonList[customLayersIndex].AsString(m_customLayers[customLayersIndex]);
   }
   payload.WithArray("CustomLayers", std::move(customLayersJsonList));

  }

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  if(m_styleHasBeenSet)
  {
   payload.WithString("Style", m_style);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
