/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
