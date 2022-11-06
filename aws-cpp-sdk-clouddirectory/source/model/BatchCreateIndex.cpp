/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchCreateIndex::BatchCreateIndex(JsonView jsonValue) : 
    m_orderedIndexedAttributeListHasBeenSet(false),
    m_isUnique(false),
    m_isUniqueHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchCreateIndex& BatchCreateIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrderedIndexedAttributeList"))
  {
    Aws::Utils::Array<JsonView> orderedIndexedAttributeListJsonList = jsonValue.GetArray("OrderedIndexedAttributeList");
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
   Aws::Utils::Array<JsonValue> orderedIndexedAttributeListJsonList(m_orderedIndexedAttributeList.size());
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
