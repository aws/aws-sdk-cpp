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

#include <aws/clouddirectory/model/BatchCreateIndex.h>
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

BatchCreateIndex::BatchCreateIndex() : 
    m_orderedIndexedAttributeListHasBeenSet(false),
    m_isUnique(false),
    m_isUniqueHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
}

BatchCreateIndex::BatchCreateIndex(const JsonValue& jsonValue) : 
    m_orderedIndexedAttributeListHasBeenSet(false),
    m_isUnique(false),
    m_isUniqueHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchCreateIndex& BatchCreateIndex::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OrderedIndexedAttributeList"))
  {
    Array<JsonValue> orderedIndexedAttributeListJsonList = jsonValue.GetArray("OrderedIndexedAttributeList");
    for(unsigned orderedIndexedAttributeListIndex = 0; orderedIndexedAttributeListIndex < orderedIndexedAttributeListJsonList.GetLength(); ++orderedIndexedAttributeListIndex)
    {
      m_orderedIndexedAttributeList.push_back(orderedIndexedAttributeListJsonList[orderedIndexedAttributeListIndex].AsObject());
    }
    m_orderedIndexedAttributeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsUnique"))
  {
    m_isUnique = jsonValue.GetBool("IsUnique");

    m_isUniqueHasBeenSet = true;
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

JsonValue BatchCreateIndex::Jsonize() const
{
  JsonValue payload;

  if(m_orderedIndexedAttributeListHasBeenSet)
  {
   Array<JsonValue> orderedIndexedAttributeListJsonList(m_orderedIndexedAttributeList.size());
   for(unsigned orderedIndexedAttributeListIndex = 0; orderedIndexedAttributeListIndex < orderedIndexedAttributeListJsonList.GetLength(); ++orderedIndexedAttributeListIndex)
   {
     orderedIndexedAttributeListJsonList[orderedIndexedAttributeListIndex].AsObject(m_orderedIndexedAttributeList[orderedIndexedAttributeListIndex].Jsonize());
   }
   payload.WithArray("OrderedIndexedAttributeList", std::move(orderedIndexedAttributeListJsonList));

  }

  if(m_isUniqueHasBeenSet)
  {
   payload.WithBool("IsUnique", m_isUnique);

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
