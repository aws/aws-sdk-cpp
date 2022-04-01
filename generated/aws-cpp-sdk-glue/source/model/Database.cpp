﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Database.h>
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

Database::Database() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationUriHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createTableDefaultPermissionsHasBeenSet(false),
    m_targetDatabaseHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
}

Database::Database(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationUriHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createTableDefaultPermissionsHasBeenSet(false),
    m_targetDatabaseHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
  *this = jsonValue;
}

Database& Database::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

    m_locationUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTableDefaultPermissions"))
  {
    Array<JsonView> createTableDefaultPermissionsJsonList = jsonValue.GetArray("CreateTableDefaultPermissions");
    for(unsigned createTableDefaultPermissionsIndex = 0; createTableDefaultPermissionsIndex < createTableDefaultPermissionsJsonList.GetLength(); ++createTableDefaultPermissionsIndex)
    {
      m_createTableDefaultPermissions.push_back(createTableDefaultPermissionsJsonList[createTableDefaultPermissionsIndex].AsObject());
    }
    m_createTableDefaultPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDatabase"))
  {
    m_targetDatabase = jsonValue.GetObject("TargetDatabase");

    m_targetDatabaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Database::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_locationUriHasBeenSet)
  {
   payload.WithString("LocationUri", m_locationUri);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_createTableDefaultPermissionsHasBeenSet)
  {
   Array<JsonValue> createTableDefaultPermissionsJsonList(m_createTableDefaultPermissions.size());
   for(unsigned createTableDefaultPermissionsIndex = 0; createTableDefaultPermissionsIndex < createTableDefaultPermissionsJsonList.GetLength(); ++createTableDefaultPermissionsIndex)
   {
     createTableDefaultPermissionsJsonList[createTableDefaultPermissionsIndex].AsObject(m_createTableDefaultPermissions[createTableDefaultPermissionsIndex].Jsonize());
   }
   payload.WithArray("CreateTableDefaultPermissions", std::move(createTableDefaultPermissionsJsonList));

  }

  if(m_targetDatabaseHasBeenSet)
  {
   payload.WithObject("TargetDatabase", m_targetDatabase.Jsonize());

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
