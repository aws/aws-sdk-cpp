/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageTopAccountResult.h>
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

UsageTopAccountResult::UsageTopAccountResult() : 
    m_accountIdHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

UsageTopAccountResult::UsageTopAccountResult(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

UsageTopAccountResult& UsageTopAccountResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetObject("total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageTopAccountResult::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithObject("total", m_total.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
