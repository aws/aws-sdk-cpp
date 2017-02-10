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
#include <aws/clouddirectory/model/IndexAttachment.h>
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

IndexAttachment::IndexAttachment() : 
    m_indexedAttributesHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false)
{
}

IndexAttachment::IndexAttachment(const JsonValue& jsonValue) : 
    m_indexedAttributesHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

IndexAttachment& IndexAttachment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IndexedAttributes"))
  {
    Array<JsonValue> indexedAttributesJsonList = jsonValue.GetArray("IndexedAttributes");
    for(unsigned indexedAttributesIndex = 0; indexedAttributesIndex < indexedAttributesJsonList.GetLength(); ++indexedAttributesIndex)
    {
      m_indexedAttributes.push_back(indexedAttributesJsonList[indexedAttributesIndex].AsObject());
    }
    m_indexedAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_indexedAttributesHasBeenSet)
  {
   Array<JsonValue> indexedAttributesJsonList(m_indexedAttributes.size());
   for(unsigned indexedAttributesIndex = 0; indexedAttributesIndex < indexedAttributesJsonList.GetLength(); ++indexedAttributesIndex)
   {
     indexedAttributesJsonList[indexedAttributesIndex].AsObject(m_indexedAttributes[indexedAttributesIndex].Jsonize());
   }
   payload.WithArray("IndexedAttributes", std::move(indexedAttributesJsonList));

  }

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws