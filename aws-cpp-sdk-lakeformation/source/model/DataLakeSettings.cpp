/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_createTableDefaultPermissionsHasBeenSet(false)
{
}

DataLakeSettings::DataLakeSettings(JsonView jsonValue) : 
    m_dataLakeAdminsHasBeenSet(false),
    m_createDatabaseDefaultPermissionsHasBeenSet(false),
    m_createTableDefaultPermissionsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
