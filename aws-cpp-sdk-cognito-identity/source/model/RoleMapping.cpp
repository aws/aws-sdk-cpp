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

#include <aws/cognito-identity/model/RoleMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

RoleMapping::RoleMapping() : 
    m_type(RoleMappingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_ambiguousRoleResolution(AmbiguousRoleResolutionType::NOT_SET),
    m_ambiguousRoleResolutionHasBeenSet(false),
    m_rulesConfigurationHasBeenSet(false)
{
}

RoleMapping::RoleMapping(const JsonValue& jsonValue) : 
    m_type(RoleMappingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_ambiguousRoleResolution(AmbiguousRoleResolutionType::NOT_SET),
    m_ambiguousRoleResolutionHasBeenSet(false),
    m_rulesConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RoleMapping& RoleMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RoleMappingTypeMapper::GetRoleMappingTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmbiguousRoleResolution"))
  {
    m_ambiguousRoleResolution = AmbiguousRoleResolutionTypeMapper::GetAmbiguousRoleResolutionTypeForName(jsonValue.GetString("AmbiguousRoleResolution"));

    m_ambiguousRoleResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RulesConfiguration"))
  {
    m_rulesConfiguration = jsonValue.GetObject("RulesConfiguration");

    m_rulesConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RoleMapping::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RoleMappingTypeMapper::GetNameForRoleMappingType(m_type));
  }

  if(m_ambiguousRoleResolutionHasBeenSet)
  {
   payload.WithString("AmbiguousRoleResolution", AmbiguousRoleResolutionTypeMapper::GetNameForAmbiguousRoleResolutionType(m_ambiguousRoleResolution));
  }

  if(m_rulesConfigurationHasBeenSet)
  {
   payload.WithObject("RulesConfiguration", m_rulesConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws