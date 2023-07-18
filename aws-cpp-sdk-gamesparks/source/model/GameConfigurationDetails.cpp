﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GameConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

GameConfigurationDetails::GameConfigurationDetails() : 
    m_createdHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_sectionsHasBeenSet(false)
{
}

GameConfigurationDetails::GameConfigurationDetails(JsonView jsonValue) : 
    m_createdHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_sectionsHasBeenSet(false)
{
  *this = jsonValue;
}

GameConfigurationDetails& GameConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetString("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetString("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sections"))
  {
    Aws::Map<Aws::String, JsonView> sectionsJsonMap = jsonValue.GetObject("Sections").GetAllObjects();
    for(auto& sectionsItem : sectionsJsonMap)
    {
      m_sections[sectionsItem.first] = sectionsItem.second.AsObject();
    }
    m_sectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue GameConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_createdHasBeenSet)
  {
   payload.WithString("Created", m_created.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithString("LastUpdated", m_lastUpdated.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_sectionsHasBeenSet)
  {
   JsonValue sectionsJsonMap;
   for(auto& sectionsItem : m_sections)
   {
     sectionsJsonMap.WithObject(sectionsItem.first, sectionsItem.second.Jsonize());
   }
   payload.WithObject("Sections", std::move(sectionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
