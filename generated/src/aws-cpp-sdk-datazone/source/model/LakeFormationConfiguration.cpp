/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LakeFormationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

LakeFormationConfiguration::LakeFormationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LakeFormationConfiguration& LakeFormationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("locationRegistrationExcludeS3Locations"))
  {
    Aws::Utils::Array<JsonView> locationRegistrationExcludeS3LocationsJsonList = jsonValue.GetArray("locationRegistrationExcludeS3Locations");
    for(unsigned locationRegistrationExcludeS3LocationsIndex = 0; locationRegistrationExcludeS3LocationsIndex < locationRegistrationExcludeS3LocationsJsonList.GetLength(); ++locationRegistrationExcludeS3LocationsIndex)
    {
      m_locationRegistrationExcludeS3Locations.push_back(locationRegistrationExcludeS3LocationsJsonList[locationRegistrationExcludeS3LocationsIndex].AsString());
    }
    m_locationRegistrationExcludeS3LocationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("locationRegistrationRole"))
  {
    m_locationRegistrationRole = jsonValue.GetString("locationRegistrationRole");
    m_locationRegistrationRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue LakeFormationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_locationRegistrationExcludeS3LocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationRegistrationExcludeS3LocationsJsonList(m_locationRegistrationExcludeS3Locations.size());
   for(unsigned locationRegistrationExcludeS3LocationsIndex = 0; locationRegistrationExcludeS3LocationsIndex < locationRegistrationExcludeS3LocationsJsonList.GetLength(); ++locationRegistrationExcludeS3LocationsIndex)
   {
     locationRegistrationExcludeS3LocationsJsonList[locationRegistrationExcludeS3LocationsIndex].AsString(m_locationRegistrationExcludeS3Locations[locationRegistrationExcludeS3LocationsIndex]);
   }
   payload.WithArray("locationRegistrationExcludeS3Locations", std::move(locationRegistrationExcludeS3LocationsJsonList));

  }

  if(m_locationRegistrationRoleHasBeenSet)
  {
   payload.WithString("locationRegistrationRole", m_locationRegistrationRole);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
