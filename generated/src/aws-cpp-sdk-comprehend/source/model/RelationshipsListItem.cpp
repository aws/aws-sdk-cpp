/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/RelationshipsListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

RelationshipsListItem::RelationshipsListItem() : 
    m_idsHasBeenSet(false),
    m_type(RelationshipType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RelationshipsListItem::RelationshipsListItem(JsonView jsonValue) : 
    m_idsHasBeenSet(false),
    m_type(RelationshipType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RelationshipsListItem& RelationshipsListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ids"))
  {
    Aws::Utils::Array<JsonView> idsJsonList = jsonValue.GetArray("Ids");
    for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
    {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
    m_idsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RelationshipTypeMapper::GetRelationshipTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationshipsListItem::Jsonize() const
{
  JsonValue payload;

  if(m_idsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idsJsonList(m_ids.size());
   for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
   {
     idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
   }
   payload.WithArray("Ids", std::move(idsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RelationshipTypeMapper::GetNameForRelationshipType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
