/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationRecipientType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

NotificationRecipientType::NotificationRecipientType() : 
    m_userTagsHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
}

NotificationRecipientType::NotificationRecipientType(JsonView jsonValue) : 
    m_userTagsHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationRecipientType& NotificationRecipientType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserTags"))
  {
    Aws::Map<Aws::String, JsonView> userTagsJsonMap = jsonValue.GetObject("UserTags").GetAllObjects();
    for(auto& userTagsItem : userTagsJsonMap)
    {
      m_userTags[userTagsItem.first] = userTagsItem.second.AsString();
    }
    m_userTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserIds"))
  {
    Aws::Utils::Array<JsonView> userIdsJsonList = jsonValue.GetArray("UserIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationRecipientType::Jsonize() const
{
  JsonValue payload;

  if(m_userTagsHasBeenSet)
  {
   JsonValue userTagsJsonMap;
   for(auto& userTagsItem : m_userTags)
   {
     userTagsJsonMap.WithString(userTagsItem.first, userTagsItem.second);
   }
   payload.WithObject("UserTags", std::move(userTagsJsonMap));

  }

  if(m_userIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("UserIds", std::move(userIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
