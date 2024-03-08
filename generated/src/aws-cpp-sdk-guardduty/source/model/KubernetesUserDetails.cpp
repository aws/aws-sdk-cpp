/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesUserDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

KubernetesUserDetails::KubernetesUserDetails() : 
    m_usernameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_impersonatedUserHasBeenSet(false)
{
}

KubernetesUserDetails::KubernetesUserDetails(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_impersonatedUserHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesUserDetails& KubernetesUserDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");

    m_uidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionName"))
  {
    Aws::Utils::Array<JsonView> sessionNameJsonList = jsonValue.GetArray("sessionName");
    for(unsigned sessionNameIndex = 0; sessionNameIndex < sessionNameJsonList.GetLength(); ++sessionNameIndex)
    {
      m_sessionName.push_back(sessionNameJsonList[sessionNameIndex].AsString());
    }
    m_sessionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("impersonatedUser"))
  {
    m_impersonatedUser = jsonValue.GetObject("impersonatedUser");

    m_impersonatedUserHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesUserDetails::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  if(m_sessionNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sessionNameJsonList(m_sessionName.size());
   for(unsigned sessionNameIndex = 0; sessionNameIndex < sessionNameJsonList.GetLength(); ++sessionNameIndex)
   {
     sessionNameJsonList[sessionNameIndex].AsString(m_sessionName[sessionNameIndex]);
   }
   payload.WithArray("sessionName", std::move(sessionNameJsonList));

  }

  if(m_impersonatedUserHasBeenSet)
  {
   payload.WithObject("impersonatedUser", m_impersonatedUser.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
