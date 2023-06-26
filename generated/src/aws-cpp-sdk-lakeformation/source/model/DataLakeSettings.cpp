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
    m_parametersHasBeenSet(false),
    m_trustedResourceOwnersHasBeenSet(false),
    m_allowExternalDataFiltering(false),
    m_allowExternalDataFilteringHasBeenSet(false),
    m_externalDataFilteringAllowListHasBeenSet(false),
    m_authorizedSessionTagValueListHasBeenSet(false)
{
}

DataLakeSettings::DataLakeSettings(JsonView jsonValue) : 
    m_dataLakeAdminsHasBeenSet(false),
    m_createDatabaseDefaultPermissionsHasBeenSet(false),
    m_createTableDefaultPermissionsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_trustedResourceOwnersHasBeenSet(false),
    m_allowExternalDataFiltering(false),
    m_allowExternalDataFilteringHasBeenSet(false),
    m_externalDataFilteringAllowListHasBeenSet(false),
    m_authorizedSessionTagValueListHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeSettings& DataLakeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakeAdmins"))
  {
    Aws::Utils::Array<JsonView> dataLakeAdminsJsonList = jsonValue.GetArray("DataLakeAdmins");
    for(unsigned dataLakeAdminsIndex = 0; dataLakeAdminsIndex < dataLakeAdminsJsonList.GetLength(); ++dataLakeAdminsIndex)
    {
      m_dataLakeAdmins.push_back(dataLakeAdminsJsonList[dataLakeAdminsIndex].AsObject());
    }
    m_dataLakeAdminsHasBeenSet = true;
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

  if(jsonValue.ValueExists("CreateTableDefaultPermissions"))
  {
    Aws::Utils::Array<JsonView> createTableDefaultPermissionsJsonList = jsonValue.GetArray("CreateTableDefaultPermissions");
    for(unsigned createTableDefaultPermissionsIndex = 0; createTableDefaultPermissionsIndex < createTableDefaultPermissionsJsonList.GetLength(); ++createTableDefaultPermissionsIndex)
    {
      m_createTableDefaultPermissions.push_back(createTableDefaultPermissionsJsonList[createTableDefaultPermissionsIndex].AsObject());
    }
    m_createTableDefaultPermissionsHasBeenSet = true;
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

  if(jsonValue.ValueExists("TrustedResourceOwners"))
  {
    Aws::Utils::Array<JsonView> trustedResourceOwnersJsonList = jsonValue.GetArray("TrustedResourceOwners");
    for(unsigned trustedResourceOwnersIndex = 0; trustedResourceOwnersIndex < trustedResourceOwnersJsonList.GetLength(); ++trustedResourceOwnersIndex)
    {
      m_trustedResourceOwners.push_back(trustedResourceOwnersJsonList[trustedResourceOwnersIndex].AsString());
    }
    m_trustedResourceOwnersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowExternalDataFiltering"))
  {
    m_allowExternalDataFiltering = jsonValue.GetBool("AllowExternalDataFiltering");

    m_allowExternalDataFilteringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalDataFilteringAllowList"))
  {
    Aws::Utils::Array<JsonView> externalDataFilteringAllowListJsonList = jsonValue.GetArray("ExternalDataFilteringAllowList");
    for(unsigned externalDataFilteringAllowListIndex = 0; externalDataFilteringAllowListIndex < externalDataFilteringAllowListJsonList.GetLength(); ++externalDataFilteringAllowListIndex)
    {
      m_externalDataFilteringAllowList.push_back(externalDataFilteringAllowListJsonList[externalDataFilteringAllowListIndex].AsObject());
    }
    m_externalDataFilteringAllowListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizedSessionTagValueList"))
  {
    Aws::Utils::Array<JsonView> authorizedSessionTagValueListJsonList = jsonValue.GetArray("AuthorizedSessionTagValueList");
    for(unsigned authorizedSessionTagValueListIndex = 0; authorizedSessionTagValueListIndex < authorizedSessionTagValueListJsonList.GetLength(); ++authorizedSessionTagValueListIndex)
    {
      m_authorizedSessionTagValueList.push_back(authorizedSessionTagValueListJsonList[authorizedSessionTagValueListIndex].AsString());
    }
    m_authorizedSessionTagValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakeAdminsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataLakeAdminsJsonList(m_dataLakeAdmins.size());
   for(unsigned dataLakeAdminsIndex = 0; dataLakeAdminsIndex < dataLakeAdminsJsonList.GetLength(); ++dataLakeAdminsIndex)
   {
     dataLakeAdminsJsonList[dataLakeAdminsIndex].AsObject(m_dataLakeAdmins[dataLakeAdminsIndex].Jsonize());
   }
   payload.WithArray("DataLakeAdmins", std::move(dataLakeAdminsJsonList));

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

  if(m_createTableDefaultPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createTableDefaultPermissionsJsonList(m_createTableDefaultPermissions.size());
   for(unsigned createTableDefaultPermissionsIndex = 0; createTableDefaultPermissionsIndex < createTableDefaultPermissionsJsonList.GetLength(); ++createTableDefaultPermissionsIndex)
   {
     createTableDefaultPermissionsJsonList[createTableDefaultPermissionsIndex].AsObject(m_createTableDefaultPermissions[createTableDefaultPermissionsIndex].Jsonize());
   }
   payload.WithArray("CreateTableDefaultPermissions", std::move(createTableDefaultPermissionsJsonList));

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

  if(m_trustedResourceOwnersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trustedResourceOwnersJsonList(m_trustedResourceOwners.size());
   for(unsigned trustedResourceOwnersIndex = 0; trustedResourceOwnersIndex < trustedResourceOwnersJsonList.GetLength(); ++trustedResourceOwnersIndex)
   {
     trustedResourceOwnersJsonList[trustedResourceOwnersIndex].AsString(m_trustedResourceOwners[trustedResourceOwnersIndex]);
   }
   payload.WithArray("TrustedResourceOwners", std::move(trustedResourceOwnersJsonList));

  }

  if(m_allowExternalDataFilteringHasBeenSet)
  {
   payload.WithBool("AllowExternalDataFiltering", m_allowExternalDataFiltering);

  }

  if(m_externalDataFilteringAllowListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalDataFilteringAllowListJsonList(m_externalDataFilteringAllowList.size());
   for(unsigned externalDataFilteringAllowListIndex = 0; externalDataFilteringAllowListIndex < externalDataFilteringAllowListJsonList.GetLength(); ++externalDataFilteringAllowListIndex)
   {
     externalDataFilteringAllowListJsonList[externalDataFilteringAllowListIndex].AsObject(m_externalDataFilteringAllowList[externalDataFilteringAllowListIndex].Jsonize());
   }
   payload.WithArray("ExternalDataFilteringAllowList", std::move(externalDataFilteringAllowListJsonList));

  }

  if(m_authorizedSessionTagValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedSessionTagValueListJsonList(m_authorizedSessionTagValueList.size());
   for(unsigned authorizedSessionTagValueListIndex = 0; authorizedSessionTagValueListIndex < authorizedSessionTagValueListJsonList.GetLength(); ++authorizedSessionTagValueListIndex)
   {
     authorizedSessionTagValueListJsonList[authorizedSessionTagValueListIndex].AsString(m_authorizedSessionTagValueList[authorizedSessionTagValueListIndex]);
   }
   payload.WithArray("AuthorizedSessionTagValueList", std::move(authorizedSessionTagValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
