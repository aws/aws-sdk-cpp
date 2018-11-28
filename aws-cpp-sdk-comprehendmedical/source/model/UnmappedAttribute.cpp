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

#include <aws/comprehendmedical/model/UnmappedAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

UnmappedAttribute::UnmappedAttribute() : 
    m_type(EntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_attributeHasBeenSet(false)
{
}

UnmappedAttribute::UnmappedAttribute(JsonView jsonValue) : 
    m_type(EntityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_attributeHasBeenSet(false)
{
  *this = jsonValue;
}

UnmappedAttribute& UnmappedAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = jsonValue.GetObject("Attribute");

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue UnmappedAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EntityTypeMapper::GetNameForEntityType(m_type));
  }

  if(m_attributeHasBeenSet)
  {
   payload.WithObject("Attribute", m_attribute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
