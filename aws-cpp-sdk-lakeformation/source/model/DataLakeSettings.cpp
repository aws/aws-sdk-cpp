/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DataLakeSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

DataLakeSettings::DataLakeSettings() : 
    m_dataLakeAdminsHasBeenSet(false),
    m_createDatabaseDefaultPermissionsHasBeenSet(false),
    m_createTableDefaultPermissionsHasBeenSet(false),
    m_trustedResourceOwnersHasBeenSet(false)
{
}

DataLakeSettings::DataLakeSettings(JsonView jsonValue) : 
    m_dataLakeAdminsHasBeenSet(false),
    m_createDatabaseDefaultPermissionsHasBeenSet(false),
    m_createTableDefaultPermissionsHasBeenSet(false),
    m_trustedResourceOwnersHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeSettings& DataLakeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakeAdmins"))
  {
    Array<JsonView> dataLakeAdminsJsonList = jsonValue.GetArray("DataLakeAdmins");
    for(unsigned dataLakeAdminsIndex = 0; dataLakeAdminsIndex < dataLakeAdminsJsonList.GetLength(); ++dataLakeAdminsIndex)
    {
      m_dataLakeAdmins.push_back(dataLakeAdminsJsonList[dataLakeAdminsIndex].AsObject());
    }
    m_dataLakeAdminsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDatabaseDefaultPermissions"))
  {
    Array<JsonView> createDatabaseDefaultPermissionsJsonList = jsonValue.GetArray("CreateDatabaseDefaultPermissions");
    for(unsigned createDatabaseDefaultPermissionsIndex = 0; createDatabaseDefaultPermissionsIndex < createDatabaseDefaultPermissionsJsonList.GetLength(); ++createDatabaseDefaultPermissionsIndex)
    {
      m_createDatabaseDefaultPermissions.push_back(createDatabaseDefaultPermissionsJsonList[createDatabaseDefaultPermissionsIndex].AsObject());
    }
    m_createDatabaseDefaultPermissionsHasBeenSet = true;
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

  if(jsonValue.ValueExists("TrustedResourceOwners"))
  {
    Array<JsonView> trustedResourceOwnersJsonList = jsonValue.GetArray("TrustedResourceOwners");
    for(unsigned trustedResourceOwnersIndex = 0; trustedResourceOwnersIndex < trustedResourceOwnersJsonList.GetLength(); ++trustedResourceOwnersIndex)
    {
      m_trustedResourceOwners.push_back(trustedResourceOwnersJsonList[trustedResourceOwnersIndex].AsString());
    }
    m_trustedResourceOwnersHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakeAdminsHasBeenSet)
  {
   Array<JsonValue> dataLakeAdminsJsonList(m_dataLakeAdmins.size());
   for(unsigned dataLakeAdminsIndex = 0; dataLakeAdminsIndex < dataLakeAdminsJsonList.GetLength(); ++dataLakeAdminsIndex)
   {
     dataLakeAdminsJsonList[dataLakeAdminsIndex].AsObject(m_dataLakeAdmins[dataLakeAdminsIndex].Jsonize());
   }
   payload.WithArray("DataLakeAdmins", std::move(dataLakeAdminsJsonList));

  }

  if(m_createDatabaseDefaultPermissionsHasBeenSet)
  {
   Array<JsonValue> createDatabaseDefaultPermissionsJsonList(m_createDatabaseDefaultPermissions.size());
   for(unsigned createDatabaseDefaultPermissionsIndex = 0; createDatabaseDefaultPermissionsIndex < createDatabaseDefaultPermissionsJsonList.GetLength(); ++createDatabaseDefaultPermissionsIndex)
   {
     createDatabaseDefaultPermissionsJsonList[createDatabaseDefaultPermissionsIndex].AsObject(m_createDatabaseDefaultPermissions[createDatabaseDefaultPermissionsIndex].Jsonize());
   }
   payload.WithArray("CreateDatabaseDefaultPermissions", std::move(createDatabaseDefaultPermissionsJsonList));

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

  if(m_trustedResourceOwnersHasBeenSet)
  {
   Array<JsonValue> trustedResourceOwnersJsonList(m_trustedResourceOwners.size());
   for(unsigned trustedResourceOwnersIndex = 0; trustedResourceOwnersIndex < trustedResourceOwnersJsonList.GetLength(); ++trustedResourceOwnersIndex)
   {
     trustedResourceOwnersJsonList[trustedResourceOwnersIndex].AsString(m_trustedResourceOwners[trustedResourceOwnersIndex]);
   }
   payload.WithArray("TrustedResourceOwners", std::move(trustedResourceOwnersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
