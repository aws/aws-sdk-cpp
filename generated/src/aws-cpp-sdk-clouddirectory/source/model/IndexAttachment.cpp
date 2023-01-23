/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

IndexAttachment::IndexAttachment(JsonView jsonValue) : 
    m_indexedAttributesHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

IndexAttachment& IndexAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexedAttributes"))
  {
    Aws::Utils::Array<JsonView> indexedAttributesJsonList = jsonValue.GetArray("IndexedAttributes");
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
   Aws::Utils::Array<JsonValue> indexedAttributesJsonList(m_indexedAttributes.size());
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
