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

#include <aws/lightsail/model/Blueprint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Blueprint::Blueprint() : 
    m_blueprintIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_type(BlueprintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_minPower(0),
    m_minPowerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_versionCodeHasBeenSet(false),
    m_productUrlHasBeenSet(false),
    m_licenseUrlHasBeenSet(false)
{
}

Blueprint::Blueprint(const JsonValue& jsonValue) : 
    m_blueprintIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_type(BlueprintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_minPower(0),
    m_minPowerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_versionCodeHasBeenSet(false),
    m_productUrlHasBeenSet(false),
    m_licenseUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Blueprint& Blueprint::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("blueprintId"))
  {
    m_blueprintId = jsonValue.GetString("blueprintId");

    m_blueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = BlueprintTypeMapper::GetBlueprintTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minPower"))
  {
    m_minPower = jsonValue.GetInteger("minPower");

    m_minPowerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionCode"))
  {
    m_versionCode = jsonValue.GetString("versionCode");

    m_versionCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productUrl"))
  {
    m_productUrl = jsonValue.GetString("productUrl");

    m_productUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseUrl"))
  {
    m_licenseUrl = jsonValue.GetString("licenseUrl");

    m_licenseUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Blueprint::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintIdHasBeenSet)
  {
   payload.WithString("blueprintId", m_blueprintId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", BlueprintTypeMapper::GetNameForBlueprintType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_minPowerHasBeenSet)
  {
   payload.WithInteger("minPower", m_minPower);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_versionCodeHasBeenSet)
  {
   payload.WithString("versionCode", m_versionCode);

  }

  if(m_productUrlHasBeenSet)
  {
   payload.WithString("productUrl", m_productUrl);

  }

  if(m_licenseUrlHasBeenSet)
  {
   payload.WithString("licenseUrl", m_licenseUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws