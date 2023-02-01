/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

UserContext::UserContext() : 
    m_tokenHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_dataSourceGroupsHasBeenSet(false)
{
}

UserContext::UserContext(JsonView jsonValue) : 
    m_tokenHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_dataSourceGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

UserContext& UserContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Token"))
  {
    m_token = jsonValue.GetString("Token");

    m_tokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceGroups"))
  {
    Aws::Utils::Array<JsonView> dataSourceGroupsJsonList = jsonValue.GetArray("DataSourceGroups");
    for(unsigned dataSourceGroupsIndex = 0; dataSourceGroupsIndex < dataSourceGroupsJsonList.GetLength(); ++dataSourceGroupsIndex)
    {
      m_dataSourceGroups.push_back(dataSourceGroupsJsonList[dataSourceGroupsIndex].AsObject());
    }
    m_dataSourceGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue UserContext::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_dataSourceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourceGroupsJsonList(m_dataSourceGroups.size());
   for(unsigned dataSourceGroupsIndex = 0; dataSourceGroupsIndex < dataSourceGroupsJsonList.GetLength(); ++dataSourceGroupsIndex)
   {
     dataSourceGroupsJsonList[dataSourceGroupsIndex].AsObject(m_dataSourceGroups[dataSourceGroupsIndex].Jsonize());
   }
   payload.WithArray("DataSourceGroups", std::move(dataSourceGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
