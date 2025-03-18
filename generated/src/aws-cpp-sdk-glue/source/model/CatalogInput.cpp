/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogInput.h>
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

CatalogInput::CatalogInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CatalogInput& CatalogInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FederatedCatalog"))
  {
    m_federatedCatalog = jsonValue.GetObject("FederatedCatalog");
    m_federatedCatalogHasBeenSet = true;
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
  if(jsonValue.ValueExists("TargetRedshiftCatalog"))
  {
    m_targetRedshiftCatalog = jsonValue.GetObject("TargetRedshiftCatalog");
    m_targetRedshiftCatalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CatalogProperties"))
  {
    m_catalogProperties = jsonValue.GetObject("CatalogProperties");
    m_catalogPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTableDefaultPermissions"))
  {
    Aws::Utils::Array<JsonView> createTableDefaultPermissionsJsonList = jsonValue.GetArray("CreateTableDefaultPermissions");
    for(unsigned createTableDefaultPermissionsIndex = 0; createTableDefaultPermissionsIndex < createTableDefaultPermissionsJsonList.GetLength(); ++createTableDefaultPermissionsIndex)
    {
      m_createTableDefaultPermissions.push_back(createTableDefaultPermissionsJsonList[createTableDefaultPermissionsIndex].AsObject());
    }
    m_createTableDefaultPermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateDatabaseDefaultPermissions"))
  {
    Aws::Utils::Array<JsonView> createDatabaseDefaultPermissionsJsonList = jsonValue.GetArray("CreateDatabaseDefaultPermissions");
    for(unsigned createDatabaseDefaultPermissionsIndex = 0; createDatabaseDefaultPermissionsIndex < createDatabaseDefaultPermissionsJsonList.GetLength(); ++createDatabaseDefaultPermissionsIndex)
    {
      m_createDatabaseDefaultPermissions.push_back(createDatabaseDefaultPermissionsJsonList[createDatabaseDefaultPermissionsIndex].AsObject());
    }
    m_createDatabaseDefaultPermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowFullTableExternalDataAccess"))
  {
    m_allowFullTableExternalDataAccess = AllowFullTableExternalDataAccessEnumMapper::GetAllowFullTableExternalDataAccessEnumForName(jsonValue.GetString("AllowFullTableExternalDataAccess"));
    m_allowFullTableExternalDataAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogInput::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_federatedCatalogHasBeenSet)
  {
   payload.WithObject("FederatedCatalog", m_federatedCatalog.Jsonize());

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

  if(m_targetRedshiftCatalogHasBeenSet)
  {
   payload.WithObject("TargetRedshiftCatalog", m_targetRedshiftCatalog.Jsonize());

  }

  if(m_catalogPropertiesHasBeenSet)
  {
   payload.WithObject("CatalogProperties", m_catalogProperties.Jsonize());

  }

  if(m_createTableDefaultPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createTableDefaultPermissionsJsonList(m_createTableDefaultPermissions.size());
   for(unsigned createTableDefaultPermissionsIndex = 0; createTableDefaultPermissionsIndex < createTableDefaultPermissionsJsonList.GetLength(); ++createTableDefaultPermissionsIndex)
   {
     createTableDefaultPermissionsJsonList[createTableDefaultPermissionsIndex].AsObject(m_createTableDefaultPermissions[createTableDefaultPermissionsIndex].Jsonize());
   }
   payload.WithArray("CreateTableDefaultPermissions", std::move(createTableDefaultPermissionsJsonList));

  }

  if(m_createDatabaseDefaultPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createDatabaseDefaultPermissionsJsonList(m_createDatabaseDefaultPermissions.size());
   for(unsigned createDatabaseDefaultPermissionsIndex = 0; createDatabaseDefaultPermissionsIndex < createDatabaseDefaultPermissionsJsonList.GetLength(); ++createDatabaseDefaultPermissionsIndex)
   {
     createDatabaseDefaultPermissionsJsonList[createDatabaseDefaultPermissionsIndex].AsObject(m_createDatabaseDefaultPermissions[createDatabaseDefaultPermissionsIndex].Jsonize());
   }
   payload.WithArray("CreateDatabaseDefaultPermissions", std::move(createDatabaseDefaultPermissionsJsonList));

  }

  if(m_allowFullTableExternalDataAccessHasBeenSet)
  {
   payload.WithString("AllowFullTableExternalDataAccess", AllowFullTableExternalDataAccessEnumMapper::GetNameForAllowFullTableExternalDataAccessEnum(m_allowFullTableExternalDataAccess));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
