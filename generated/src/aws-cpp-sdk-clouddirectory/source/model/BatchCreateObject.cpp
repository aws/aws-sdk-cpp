/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchCreateObject.h>
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

BatchCreateObject::BatchCreateObject() : 
    m_schemaFacetHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
}

BatchCreateObject::BatchCreateObject(JsonView jsonValue) : 
    m_schemaFacetHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchCreateObject& BatchCreateObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacet"))
  {
    Aws::Utils::Array<JsonView> schemaFacetJsonList = jsonValue.GetArray("SchemaFacet");
    for(unsigned schemaFacetIndex = 0; schemaFacetIndex < schemaFacetJsonList.GetLength(); ++schemaFacetIndex)
    {
      m_schemaFacet.push_back(schemaFacetJsonList[schemaFacetIndex].AsObject());
    }
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

  if(jsonValue.ValueExists("ParentReference"))
  {
    m_parentReference = jsonValue.GetObject("ParentReference");

    m_parentReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkName"))
  {
    m_linkName = jsonValue.GetString("LinkName");

    m_linkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchReferenceName"))
  {
    m_batchReferenceName = jsonValue.GetString("BatchReferenceName");

    m_batchReferenceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchCreateObject::Jsonize() const
{
  JsonValue payload;

  if(m_schemaFacetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaFacetJsonList(m_schemaFacet.size());
   for(unsigned schemaFacetIndex = 0; schemaFacetIndex < schemaFacetJsonList.GetLength(); ++schemaFacetIndex)
   {
     schemaFacetJsonList[schemaFacetIndex].AsObject(m_schemaFacet[schemaFacetIndex].Jsonize());
   }
   payload.WithArray("SchemaFacet", std::move(schemaFacetJsonList));

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

  if(m_parentReferenceHasBeenSet)
  {
   payload.WithObject("ParentReference", m_parentReference.Jsonize());

  }

  if(m_linkNameHasBeenSet)
  {
   payload.WithString("LinkName", m_linkName);

  }

  if(m_batchReferenceNameHasBeenSet)
  {
   payload.WithString("BatchReferenceName", m_batchReferenceName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
