/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/organizations/model/Account.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Account::Account() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(AccountStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_joinedMethod(AccountJoinedMethod::NOT_SET),
    m_joinedMethodHasBeenSet(false),
    m_joinedTimestampHasBeenSet(false)
{
}

Account::Account(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(AccountStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_joinedMethod(AccountJoinedMethod::NOT_SET),
    m_joinedMethodHasBeenSet(false),
    m_joinedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Account& Account::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AccountStatusMapper::GetAccountStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinedMethod"))
  {
    m_joinedMethod = AccountJoinedMethodMapper::GetAccountJoinedMethodForName(jsonValue.GetString("JoinedMethod"));

    m_joinedMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinedTimestamp"))
  {
    m_joinedTimestamp = jsonValue.GetDouble("JoinedTimestamp");

    m_joinedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AccountStatusMapper::GetNameForAccountStatus(m_status));
  }

  if(m_joinedMethodHasBeenSet)
  {
   payload.WithString("JoinedMethod", AccountJoinedMethodMapper::GetNameForAccountJoinedMethod(m_joinedMethod));
  }

  if(m_joinedTimestampHasBeenSet)
  {
   payload.WithDouble("JoinedTimestamp", m_joinedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws