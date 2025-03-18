/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/MapConfigurationUpdate.h>
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

MapConfigurationUpdate::MapConfigurationUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

MapConfigurationUpdate& MapConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoliticalView"))
  {
    m_politicalView = jsonValue.GetString("PoliticalView");
    m_politicalViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomLayers"))
  {
    Aws::Utils::Array<JsonView> customLayersJsonList = jsonValue.GetArray("CustomLayers");
    for(unsigned customLayersIndex = 0; customLayersIndex < customLayersJsonList.GetLength(); ++customLayersIndex)
    {
      m_customLayers.push_back(customLayersJsonList[customLayersIndex].AsString());
    }
    m_customLayersHasBeenSet = true;
  }
  return *this;
}

JsonValue MapConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  if(m_customLayersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customLayersJsonList(m_customLayers.size());
   for(unsigned customLayersIndex = 0; customLayersIndex < customLayersJsonList.GetLength(); ++customLayersIndex)
   {
     customLayersJsonList[customLayersIndex].AsString(m_customLayers[customLayersIndex]);
   }
   payload.WithArray("CustomLayers", std::move(customLayersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
