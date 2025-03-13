/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

QueueMember::QueueMember(JsonView jsonValue)
{
  *this = jsonValue;
}

QueueMember& QueueMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");
    m_principalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principalType"))
  {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("principalType"));
    m_principalTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("identityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipLevel"))
  {
    m_membershipLevel = MembershipLevelMapper::GetMembershipLevelForName(jsonValue.GetString("membershipLevel"));
    m_membershipLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueMember::Jsonize() const
{
  JsonValue payload;

  if(m_farmIdHasBeenSet)
  {
   payload.WithString("farmId", m_farmId);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("principalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("identityStoreId", m_identityStoreId);

  }

  if(m_membershipLevelHasBeenSet)
  {
   payload.WithString("membershipLevel", MembershipLevelMapper::GetNameForMembershipLevel(m_membershipLevel));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
