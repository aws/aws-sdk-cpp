/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AccountStatistics.h>
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

AccountStatistics::AccountStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountStatistics& AccountStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastGeneratedAt"))
  {
    m_lastGeneratedAt = jsonValue.GetDouble("lastGeneratedAt");
    m_lastGeneratedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalFindings"))
  {
    m_totalFindings = jsonValue.GetInteger("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_lastGeneratedAtHasBeenSet)
  {
   payload.WithDouble("lastGeneratedAt", m_lastGeneratedAt.SecondsWithMSPrecision());
  }

  if(m_totalFindingsHasBeenSet)
  {
   payload.WithInteger("totalFindings", m_totalFindings);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
