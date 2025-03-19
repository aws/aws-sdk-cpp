/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListProfileObjectTypeItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListProfileObjectTypeItem::ListProfileObjectTypeItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListProfileObjectTypeItem& ListProfileObjectTypeItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");
    m_objectTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxProfileObjectCount"))
  {
    m_maxProfileObjectCount = jsonValue.GetInteger("MaxProfileObjectCount");
    m_maxProfileObjectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxAvailableProfileObjectCount"))
  {
    m_maxAvailableProfileObjectCount = jsonValue.GetInteger("MaxAvailableProfileObjectCount");
    m_maxAvailableProfileObjectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListProfileObjectTypeItem::Jsonize() const
{
  JsonValue payload;

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_maxProfileObjectCountHasBeenSet)
  {
   payload.WithInteger("MaxProfileObjectCount", m_maxProfileObjectCount);

  }

  if(m_maxAvailableProfileObjectCountHasBeenSet)
  {
   payload.WithInteger("MaxAvailableProfileObjectCount", m_maxAvailableProfileObjectCount);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
