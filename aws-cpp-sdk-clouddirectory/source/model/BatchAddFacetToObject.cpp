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

BatchAddFacetToObject::BatchAddFacetToObject(const JsonValue& jsonValue) : 
    m_schemaFacetHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAddFacetToObject& BatchAddFacetToObject::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacet"))
  {
    m_schemaFacet = jsonValue.GetObject("SchemaFacet");

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
   Array<JsonValue> objectAttributeListJsonList(m_objectAttributeList.size());
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