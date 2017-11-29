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

#include <aws/guardduty/model/UnprocessedAccount.h>
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

UnprocessedAccount::UnprocessedAccount() : 
    m_accountIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

UnprocessedAccount::UnprocessedAccount(const JsonValue& jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedAccount& UnprocessedAccount::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetString("result");

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedAccount::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
