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

#include <aws/clouddirectory/model/Facet.h>
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

Facet::Facet() : 
    m_nameHasBeenSet(false),
    m_objectType(ObjectType::NOT_SET),
    m_objectTypeHasBeenSet(false),
    m_facetStyle(FacetStyle::NOT_SET),
    m_facetStyleHasBeenSet(false)
{
}

Facet::Facet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_objectType(ObjectType::NOT_SET),
    m_objectTypeHasBeenSet(false),
    m_facetStyle(FacetStyle::NOT_SET),
    m_facetStyleHasBeenSet(false)
{
  *this = jsonValue;
}

Facet& Facet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectType"))
  {
    m_objectType = ObjectTypeMapper::GetObjectTypeForName(jsonValue.GetString("ObjectType"));

    m_objectTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FacetStyle"))
  {
    m_facetStyle = FacetStyleMapper::GetFacetStyleForName(jsonValue.GetString("FacetStyle"));

    m_facetStyleHasBeenSet = true;
  }

  return *this;
}

JsonValue Facet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_objectTypeHasBeenSet)
  {
   payload.WithString("ObjectType", ObjectTypeMapper::GetNameForObjectType(m_objectType));
  }

  if(m_facetStyleHasBeenSet)
  {
   payload.WithString("FacetStyle", FacetStyleMapper::GetNameForFacetStyle(m_facetStyle));
  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
