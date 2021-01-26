/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/FacetAttributeDefinition.h>
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

FacetAttributeDefinition::FacetAttributeDefinition() : 
    m_type(FacetAttributeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isImmutable(false),
    m_isImmutableHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

FacetAttributeDefinition::FacetAttributeDefinition(JsonView jsonValue) : 
    m_type(FacetAttributeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_isImmutable(false),
    m_isImmutableHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

FacetAttributeDefinition& FacetAttributeDefinition::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue FacetAttributeDefinition::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
