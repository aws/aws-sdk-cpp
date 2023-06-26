/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/TypedLinkAttributeDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedLinkAttributeDefinition::TypedLinkAttributeDefinition() : 
    m_nameHasBeenSet(false),
    m_type(FacetAttributeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isImmutable(false),
    m_isImmutableHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_requiredBehavior(RequiredAttributeBehavior::NOT_SET),
    m_requiredBehaviorHasBeenSet(false)
{
}

TypedLinkAttributeDefinition::TypedLinkAttributeDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(FacetAttributeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isImmutable(false),
    m_isImmutableHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_requiredBehavior(RequiredAttributeBehavior::NOT_SET),
    m_requiredBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkAttributeDefinition& TypedLinkAttributeDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = FacetAttributeTypeMapper::GetFacetAttributeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetObject("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsImmutable"))
  {
    m_isImmutable = jsonValue.GetBool("IsImmutable");

    m_isImmutableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Map<Aws::String, JsonView> rulesJsonMap = jsonValue.GetObject("Rules").GetAllObjects();
    for(auto& rulesItem : rulesJsonMap)
    {
      m_rules[rulesItem.first] = rulesItem.second.AsObject();
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiredBehavior"))
  {
    m_requiredBehavior = RequiredAttributeBehaviorMapper::GetRequiredAttributeBehaviorForName(jsonValue.GetString("RequiredBehavior"));

    m_requiredBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkAttributeDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", FacetAttributeTypeMapper::GetNameForFacetAttributeType(m_type));
  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithObject("DefaultValue", m_defaultValue.Jsonize());

  }

  if(m_isImmutableHasBeenSet)
  {
   payload.WithBool("IsImmutable", m_isImmutable);

  }

  if(m_rulesHasBeenSet)
  {
   JsonValue rulesJsonMap;
   for(auto& rulesItem : m_rules)
   {
     rulesJsonMap.WithObject(rulesItem.first, rulesItem.second.Jsonize());
   }
   payload.WithObject("Rules", std::move(rulesJsonMap));

  }

  if(m_requiredBehaviorHasBeenSet)
  {
   payload.WithString("RequiredBehavior", RequiredAttributeBehaviorMapper::GetNameForRequiredAttributeBehavior(m_requiredBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
