/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DateStatistics.h>
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

DateStatistics::DateStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

DateStatistics& DateStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetDouble("date");
    m_dateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastGeneratedAt"))
  {
    m_lastGeneratedAt = jsonValue.GetDouble("lastGeneratedAt");
    m_lastGeneratedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetDouble("severity");
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalFindings"))
  {
    m_totalFindings = jsonValue.GetInteger("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue DateStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("date", m_date.SecondsWithMSPrecision());
  }

  if(m_lastGeneratedAtHasBeenSet)
  {
   payload.WithDouble("lastGeneratedAt", m_lastGeneratedAt.SecondsWithMSPrecision());
  }

  if(m_severityHasBeenSet)
  {
   payload.WithDouble("severity", m_severity);

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
