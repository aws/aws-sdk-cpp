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

#include <aws/ssm/model/ParameterMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ParameterMetadata::ParameterMetadata() : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_tier(ParameterTier::NOT_SET),
    m_tierHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
}

ParameterMetadata::ParameterMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_tier(ParameterTier::NOT_SET),
    m_tierHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterMetadata& ParameterMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedUser"))
  {
    m_lastModifiedUser = jsonValue.GetString("LastModifiedUser");

    m_lastModifiedUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedPattern"))
  {
    m_allowedPattern = jsonValue.GetString("AllowedPattern");

    m_allowedPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = ParameterTierMapper::GetParameterTierForName(jsonValue.GetString("Tier"));

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policies"))
  {
    Array<JsonView> policiesJsonList = jsonValue.GetArray("Policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedUserHasBeenSet)
  {
   payload.WithString("LastModifiedUser", m_lastModifiedUser);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_allowedPatternHasBeenSet)
  {
   payload.WithString("AllowedPattern", m_allowedPattern);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", ParameterTierMapper::GetNameForParameterTier(m_tier));
  }

  if(m_policiesHasBeenSet)
  {
   Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
   }
   payload.WithArray("Policies", std::move(policiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
