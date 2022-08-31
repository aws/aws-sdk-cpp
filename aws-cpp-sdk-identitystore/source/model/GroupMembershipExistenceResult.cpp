/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/GroupMembershipExistenceResult.h>
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

GroupMembershipExistenceResult::GroupMembershipExistenceResult() : 
    m_groupIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_membershipExists(false),
    m_membershipExistsHasBeenSet(false)
{
}

GroupMembershipExistenceResult::GroupMembershipExistenceResult(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_membershipExists(false),
    m_membershipExistsHasBeenSet(false)
{
  *this = jsonValue;
}

GroupMembershipExistenceResult& GroupMembershipExistenceResult::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("MembershipExists"))
  {
    m_membershipExists = jsonValue.GetBool("MembershipExists");

    m_membershipExistsHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupMembershipExistenceResult::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithObject("MemberId", m_memberId.Jsonize());

  }

  if(m_membershipExistsHasBeenSet)
  {
   payload.WithBool("MembershipExists", m_membershipExists);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
