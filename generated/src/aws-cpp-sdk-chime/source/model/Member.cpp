/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Member::Member() : 
    m_memberIdHasBeenSet(false),
    m_memberType(MemberType::NOT_SET),
    m_memberTypeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_memberIdHasBeenSet(false),
    m_memberType(MemberType::NOT_SET),
    m_memberTypeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetString("MemberId");

    m_memberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberType"))
  {
    m_memberType = MemberTypeMapper::GetMemberTypeForName(jsonValue.GetString("MemberType"));

    m_memberTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FullName"))
  {
    m_fullName = jsonValue.GetString("FullName");

    m_fullNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  if(m_memberTypeHasBeenSet)
  {
   payload.WithString("MemberType", MemberTypeMapper::GetNameForMemberType(m_memberType));
  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_fullNameHasBeenSet)
  {
   payload.WithString("FullName", m_fullName);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
