/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/FacetAttribute.h>
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

FacetAttribute::FacetAttribute() : 
    m_nameHasBeenSet(false),
    m_attributeDefinitionHasBeenSet(false),
    m_attributeReferenceHasBeenSet(false),
    m_requiredBehavior(RequiredAttributeBehavior::NOT_SET),
    m_requiredBehaviorHasBeenSet(false)
{
}

FacetAttribute::FacetAttribute(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributeDefinitionHasBeenSet(false),
    m_attributeReferenceHasBeenSet(false),
    m_requiredBehavior(RequiredAttributeBehavior::NOT_SET),
    m_requiredBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

FacetAttribute& FacetAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeDefinition"))
  {
    m_attributeDefinition = jsonValue.GetObject("AttributeDefinition");

    m_attributeDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeReference"))
  {
    m_attributeReference = jsonValue.GetObject("AttributeReference");

    m_attributeReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiredBehavior"))
  {
    m_requiredBehavior = RequiredAttributeBehaviorMapper::GetRequiredAttributeBehaviorForName(jsonValue.GetString("RequiredBehavior"));

    m_requiredBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue FacetAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributeDefinitionHasBeenSet)
  {
   payload.WithObject("AttributeDefinition", m_attributeDefinition.Jsonize());

  }

  if(m_attributeReferenceHasBeenSet)
  {
   payload.WithObject("AttributeReference", m_attributeReference.Jsonize());

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
