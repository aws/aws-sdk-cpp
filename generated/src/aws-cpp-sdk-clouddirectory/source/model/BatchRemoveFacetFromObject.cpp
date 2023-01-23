/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchRemoveFacetFromObject.h>
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

BatchRemoveFacetFromObject::BatchRemoveFacetFromObject() : 
    m_schemaFacetHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
}

BatchRemoveFacetFromObject::BatchRemoveFacetFromObject(JsonView jsonValue) : 
    m_schemaFacetHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchRemoveFacetFromObject& BatchRemoveFacetFromObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacet"))
  {
    m_schemaFacet = jsonValue.GetObject("SchemaFacet");

    m_schemaFacetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchRemoveFacetFromObject::Jsonize() const
{
  JsonValue payload;

  if(m_schemaFacetHasBeenSet)
  {
   payload.WithObject("SchemaFacet", m_schemaFacet.Jsonize());

  }

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
