/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{

Member::Member(JsonView jsonValue)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemberType"))
  {
    m_memberType = MemberTypeMapper::GetMemberTypeForName(jsonValue.GetString("MemberType"));
    m_memberTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");
    m_sAMAccountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");
    m_sIDHasBeenSet = true;
  }
  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_memberTypeHasBeenSet)
  {
   payload.WithString("MemberType", MemberTypeMapper::GetNameForMemberType(m_memberType));
  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  if(m_sIDHasBeenSet)
  {
   payload.WithString("SID", m_sID);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
