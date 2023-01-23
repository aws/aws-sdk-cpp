/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StatusDetailFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

StatusDetailFilters::StatusDetailFilters() : 
    m_accountIdHasBeenSet(false),
    m_memberAccountRuleStatus(MemberAccountRuleStatus::NOT_SET),
    m_memberAccountRuleStatusHasBeenSet(false)
{
}

StatusDetailFilters::StatusDetailFilters(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_memberAccountRuleStatus(MemberAccountRuleStatus::NOT_SET),
    m_memberAccountRuleStatusHasBeenSet(false)
{
  *this = jsonValue;
}

StatusDetailFilters& StatusDetailFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberAccountRuleStatus"))
  {
    m_memberAccountRuleStatus = MemberAccountRuleStatusMapper::GetMemberAccountRuleStatusForName(jsonValue.GetString("MemberAccountRuleStatus"));

    m_memberAccountRuleStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue StatusDetailFilters::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_memberAccountRuleStatusHasBeenSet)
  {
   payload.WithString("MemberAccountRuleStatus", MemberAccountRuleStatusMapper::GetNameForMemberAccountRuleStatus(m_memberAccountRuleStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
