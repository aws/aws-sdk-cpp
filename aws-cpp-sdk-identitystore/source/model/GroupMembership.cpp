/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/GroupMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

GroupMembership::GroupMembership() : 
    m_identityStoreIdHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

GroupMembership::GroupMembership(JsonView jsonValue) : 
    m_identityStoreIdHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
  *this = jsonValue;
}

GroupMembership& GroupMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");

    m_identityStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MembershipId"))
  {
    m_membershipId = jsonValue.GetString("MembershipId");

    m_membershipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetObject("MemberId");

    m_memberIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupMembership::Jsonize() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("MembershipId", m_membershipId);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithObject("MemberId", m_memberId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
