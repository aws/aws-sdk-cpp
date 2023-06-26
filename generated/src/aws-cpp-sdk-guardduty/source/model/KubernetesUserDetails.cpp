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
    m_groupsHasBeenSet(false)
{
}

KubernetesUserDetails::KubernetesUserDetails(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_groupsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
