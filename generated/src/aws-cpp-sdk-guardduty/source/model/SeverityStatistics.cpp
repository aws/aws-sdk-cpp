/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/SeverityStatistics.h>
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

SeverityStatistics::SeverityStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

SeverityStatistics& SeverityStatistics::operator =(JsonView jsonValue)
{
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

JsonValue SeverityStatistics::Jsonize() const
{
  JsonValue payload;

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
