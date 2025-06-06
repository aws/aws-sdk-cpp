﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleConfigurationProperty.h>
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

RuleConfigurationProperty::RuleConfigurationProperty(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleConfigurationProperty& RuleConfigurationProperty::operator =(JsonView jsonValue)
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
    m_type = RuleConfigurationPropertyTypeMapper::GetRuleConfigurationPropertyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleConfigurationProperty::Jsonize() const
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
   payload.WithString("type", RuleConfigurationPropertyTypeMapper::GetNameForRuleConfigurationPropertyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
