/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchRelatedItemsResponseItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

SearchRelatedItemsResponseItem::SearchRelatedItemsResponseItem() : 
    m_associationTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_relatedItemIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(RelatedItemType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SearchRelatedItemsResponseItem::SearchRelatedItemsResponseItem(JsonView jsonValue) : 
    m_associationTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_relatedItemIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(RelatedItemType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SearchRelatedItemsResponseItem& SearchRelatedItemsResponseItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associationTime"))
  {
    m_associationTime = jsonValue.GetString("associationTime");

    m_associationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedItemId"))
  {
    m_relatedItemId = jsonValue.GetString("relatedItemId");

    m_relatedItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RelatedItemTypeMapper::GetRelatedItemTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchRelatedItemsResponseItem::Jsonize() const
{
  JsonValue payload;

  if(m_associationTimeHasBeenSet)
  {
   payload.WithString("associationTime", m_associationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_relatedItemIdHasBeenSet)
  {
   payload.WithString("relatedItemId", m_relatedItemId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RelatedItemTypeMapper::GetNameForRelatedItemType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
