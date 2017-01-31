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

FacetAttribute::FacetAttribute(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributeDefinitionHasBeenSet(false),
    m_attributeReferenceHasBeenSet(false),
    m_requiredBehavior(RequiredAttributeBehavior::NOT_SET),
    m_requiredBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

FacetAttribute& FacetAttribute::operator =(const JsonValue& jsonValue)
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