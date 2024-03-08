/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDatabaseCacheConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDatabaseCacheConfiguration::KxDatabaseCacheConfiguration() : 
    m_cacheTypeHasBeenSet(false),
    m_dbPathsHasBeenSet(false),
    m_dataviewNameHasBeenSet(false)
{
}

KxDatabaseCacheConfiguration::KxDatabaseCacheConfiguration(JsonView jsonValue) : 
    m_cacheTypeHasBeenSet(false),
    m_dbPathsHasBeenSet(false),
    m_dataviewNameHasBeenSet(false)
{
  *this = jsonValue;
}

KxDatabaseCacheConfiguration& KxDatabaseCacheConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cacheType"))
  {
    m_cacheType = jsonValue.GetString("cacheType");

    m_cacheTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dbPaths"))
  {
    Aws::Utils::Array<JsonView> dbPathsJsonList = jsonValue.GetArray("dbPaths");
    for(unsigned dbPathsIndex = 0; dbPathsIndex < dbPathsJsonList.GetLength(); ++dbPathsIndex)
    {
      m_dbPaths.push_back(dbPathsJsonList[dbPathsIndex].AsString());
    }
    m_dbPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataviewName"))
  {
    m_dataviewName = jsonValue.GetString("dataviewName");

    m_dataviewNameHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDatabaseCacheConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cacheTypeHasBeenSet)
  {
   payload.WithString("cacheType", m_cacheType);

  }

  if(m_dbPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbPathsJsonList(m_dbPaths.size());
   for(unsigned dbPathsIndex = 0; dbPathsIndex < dbPathsJsonList.GetLength(); ++dbPathsIndex)
   {
     dbPathsJsonList[dbPathsIndex].AsString(m_dbPaths[dbPathsIndex]);
   }
   payload.WithArray("dbPaths", std::move(dbPathsJsonList));

  }

  if(m_dataviewNameHasBeenSet)
  {
   payload.WithString("dataviewName", m_dataviewName);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
