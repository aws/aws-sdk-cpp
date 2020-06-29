/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

UnprocessedAccount::UnprocessedAccount(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedAccount& UnprocessedAccount::operator =(JsonView jsonValue)
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
