/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchAllRelatedItemsResponseItem.h>
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

SearchAllRelatedItemsResponseItem::SearchAllRelatedItemsResponseItem(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchAllRelatedItemsResponseItem& SearchAllRelatedItemsResponseItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relatedItemId"))
  {
    m_relatedItemId = jsonValue.GetString("relatedItemId");
    m_relatedItemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");
    m_caseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = RelatedItemTypeMapper::GetRelatedItemTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("performedBy"))
  {
    m_performedBy = jsonValue.GetObject("performedBy");
    m_performedByHasBeenSet = true;
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
  return *this;
}

JsonValue SearchAllRelatedItemsResponseItem::Jsonize() const
{
  JsonValue payload;

  if(m_relatedItemIdHasBeenSet)
  {
   payload.WithString("relatedItemId", m_relatedItemId);

  }

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RelatedItemTypeMapper::GetNameForRelatedItemType(m_type));
  }

  if(m_associationTimeHasBeenSet)
  {
   payload.WithString("associationTime", m_associationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_performedByHasBeenSet)
  {
   payload.WithObject("performedBy", m_performedBy.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
