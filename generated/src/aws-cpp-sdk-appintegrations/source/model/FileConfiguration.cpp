/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/FileConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

FileConfiguration::FileConfiguration() : 
    m_foldersHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

FileConfiguration::FileConfiguration(JsonView jsonValue) : 
    m_foldersHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
  *this = jsonValue;
}

FileConfiguration& FileConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Folders"))
  {
    Aws::Utils::Array<JsonView> foldersJsonList = jsonValue.GetArray("Folders");
    for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
    {
      m_folders.push_back(foldersJsonList[foldersIndex].AsString());
    }
    m_foldersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Map<Aws::String, JsonView> filtersJsonMap = jsonValue.GetObject("Filters").GetAllObjects();
    for(auto& filtersItem : filtersJsonMap)
    {
      Aws::Utils::Array<JsonView> fieldsListJsonList = filtersItem.second.AsArray();
      Aws::Vector<Aws::String> fieldsListList;
      fieldsListList.reserve((size_t)fieldsListJsonList.GetLength());
      for(unsigned fieldsListIndex = 0; fieldsListIndex < fieldsListJsonList.GetLength(); ++fieldsListIndex)
      {
        fieldsListList.push_back(fieldsListJsonList[fieldsListIndex].AsString());
      }
      m_filters[filtersItem.first] = std::move(fieldsListList);
    }
    m_filtersHasBeenSet = true;
  }

  return *this;
}

JsonValue FileConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_foldersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> foldersJsonList(m_folders.size());
   for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
   {
     foldersJsonList[foldersIndex].AsString(m_folders[foldersIndex]);
   }
   payload.WithArray("Folders", std::move(foldersJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   JsonValue filtersJsonMap;
   for(auto& filtersItem : m_filters)
   {
     Aws::Utils::Array<JsonValue> fieldsListJsonList(filtersItem.second.size());
     for(unsigned fieldsListIndex = 0; fieldsListIndex < fieldsListJsonList.GetLength(); ++fieldsListIndex)
     {
       fieldsListJsonList[fieldsListIndex].AsString(filtersItem.second[fieldsListIndex]);
     }
     filtersJsonMap.WithArray(filtersItem.first, std::move(fieldsListJsonList));
   }
   payload.WithObject("Filters", std::move(filtersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
