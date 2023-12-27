/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceIntrospectionModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DataSourceIntrospectionModel::DataSourceIntrospectionModel() : 
    m_nameHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_indexesHasBeenSet(false),
    m_sdlHasBeenSet(false)
{
}

DataSourceIntrospectionModel::DataSourceIntrospectionModel(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_indexesHasBeenSet(false),
    m_sdlHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceIntrospectionModel& DataSourceIntrospectionModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("primaryKey"))
  {
    m_primaryKey = jsonValue.GetObject("primaryKey");

    m_primaryKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexes"))
  {
    Aws::Utils::Array<JsonView> indexesJsonList = jsonValue.GetArray("indexes");
    for(unsigned indexesIndex = 0; indexesIndex < indexesJsonList.GetLength(); ++indexesIndex)
    {
      m_indexes.push_back(indexesJsonList[indexesIndex].AsObject());
    }
    m_indexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sdl"))
  {
    m_sdl = jsonValue.GetString("sdl");

    m_sdlHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceIntrospectionModel::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  if(m_primaryKeyHasBeenSet)
  {
   payload.WithObject("primaryKey", m_primaryKey.Jsonize());

  }

  if(m_indexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> indexesJsonList(m_indexes.size());
   for(unsigned indexesIndex = 0; indexesIndex < indexesJsonList.GetLength(); ++indexesIndex)
   {
     indexesJsonList[indexesIndex].AsObject(m_indexes[indexesIndex].Jsonize());
   }
   payload.WithArray("indexes", std::move(indexesJsonList));

  }

  if(m_sdlHasBeenSet)
  {
   payload.WithString("sdl", m_sdl);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
