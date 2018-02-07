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

#include <aws/servicecatalog/model/ResourceTargetDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ResourceTargetDefinition::ResourceTargetDefinition() : 
    m_attribute(ResourceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiresRecreation(RequiresRecreation::NOT_SET),
    m_requiresRecreationHasBeenSet(false)
{
}

ResourceTargetDefinition::ResourceTargetDefinition(const JsonValue& jsonValue) : 
    m_attribute(ResourceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requiresRecreation(RequiresRecreation::NOT_SET),
    m_requiresRecreationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceTargetDefinition& ResourceTargetDefinition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = ResourceAttributeMapper::GetResourceAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiresRecreation"))
  {
    m_requiresRecreation = RequiresRecreationMapper::GetRequiresRecreationForName(jsonValue.GetString("RequiresRecreation"));

    m_requiresRecreationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceTargetDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", ResourceAttributeMapper::GetNameForResourceAttribute(m_attribute));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_requiresRecreationHasBeenSet)
  {
   payload.WithString("RequiresRecreation", RequiresRecreationMapper::GetNameForRequiresRecreation(m_requiresRecreation));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
