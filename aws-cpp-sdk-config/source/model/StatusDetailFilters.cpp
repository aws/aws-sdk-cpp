/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
