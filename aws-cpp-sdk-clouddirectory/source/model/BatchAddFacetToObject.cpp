/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAddFacetToObject.h>
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

BatchAddFacetToObject::BatchAddFacetToObject() : 
    m_schemaFacetHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
}

BatchAddFacetToObject::BatchAddFacetToObject(JsonView jsonValue) : 
    m_schemaFacetHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAddFacetToObject& BatchAddFacetToObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacet"))
  {
    m_schemaFacet = jsonValue.GetObject("SchemaFacet");

    m_schemaFacetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectAttributeList"))
  {
    Aws::Utils::Array<JsonView> objectAttributeListJsonList = jsonValue.GetArray("ObjectAttributeList");
    for(unsigned objectAttributeListIndex = 0; objectAttributeListIndex < objectAttributeListJsonList.GetLength(); ++objectAttributeListIndex)
    {
      m_objectAttributeList.push_back(objectAttributeListJsonList[objectAttributeListIndex].AsObject());
    }
    m_objectAttributeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAddFacetToObject::Jsonize() const
{
  JsonValue payload;

  if(m_schemaFacetHasBeenSet)
  {
   payload.WithObject("SchemaFacet", m_schemaFacet.Jsonize());

  }

  if(m_objectAttributeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectAttributeListJsonList(m_objectAttributeList.size());
   for(unsigned objectAttributeListIndex = 0; objectAttributeListIndex < objectAttributeListJsonList.GetLength(); ++objectAttributeListIndex)
   {
     objectAttributeListJsonList[objectAttributeListIndex].AsObject(m_objectAttributeList[objectAttributeListIndex].Jsonize());
   }
   payload.WithArray("ObjectAttributeList", std::move(objectAttributeListJsonList));

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
