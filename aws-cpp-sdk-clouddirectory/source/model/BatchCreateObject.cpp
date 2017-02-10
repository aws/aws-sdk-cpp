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

BatchCreateObject::BatchCreateObject(const JsonValue& jsonValue) : 
    m_schemaFacetHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchCreateObject& BatchCreateObject::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacet"))
  {
    Array<JsonValue> schemaFacetJsonList = jsonValue.GetArray("SchemaFacet");
    for(unsigned schemaFacetIndex = 0; schemaFacetIndex < schemaFacetJsonList.GetLength(); ++schemaFacetIndex)
    {
      m_schemaFacet.push_back(schemaFacetJsonList[schemaFacetIndex].AsObject());
    }
    m_schemaFacetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectAttributeList"))
  {
    Array<JsonValue> objectAttributeListJsonList = jsonValue.GetArray("ObjectAttributeList");
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
   Array<JsonValue> schemaFacetJsonList(m_schemaFacet.size());
   for(unsigned schemaFacetIndex = 0; schemaFacetIndex < schemaFacetJsonList.GetLength(); ++schemaFacetIndex)
   {
     schemaFacetJsonList[schemaFacetIndex].AsObject(m_schemaFacet[schemaFacetIndex].Jsonize());
   }
   payload.WithArray("SchemaFacet", std::move(schemaFacetJsonList));

  }

  if(m_objectAttributeListHasBeenSet)
  {
   Array<JsonValue> objectAttributeListJsonList(m_objectAttributeList.size());
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