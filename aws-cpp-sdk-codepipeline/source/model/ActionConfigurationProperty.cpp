/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ActionConfigurationProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionConfigurationProperty::ActionConfigurationProperty() : 
    m_nameHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_key(false),
    m_keyHasBeenSet(false),
    m_secret(false),
    m_secretHasBeenSet(false),
    m_queryable(false),
    m_queryableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ActionConfigurationPropertyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ActionConfigurationProperty::ActionConfigurationProperty(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_key(false),
    m_keyHasBeenSet(false),
    m_secret(false),
    m_secretHasBeenSet(false),
    m_queryable(false),
    m_queryableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ActionConfigurationPropertyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ActionConfigurationProperty& ActionConfigurationProperty::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetBool("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secret"))
  {
    m_secret = jsonValue.GetBool("secret");

    m_secretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryable"))
  {
    m_queryable = jsonValue.GetBool("queryable");

    m_queryableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ActionConfigurationPropertyTypeMapper::GetActionConfigurationPropertyTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionConfigurationProperty::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithBool("key", m_key);

  }

  if(m_secretHasBeenSet)
  {
   payload.WithBool("secret", m_secret);

  }

  if(m_queryableHasBeenSet)
  {
   payload.WithBool("queryable", m_queryable);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ActionConfigurationPropertyTypeMapper::GetNameForActionConfigurationPropertyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws