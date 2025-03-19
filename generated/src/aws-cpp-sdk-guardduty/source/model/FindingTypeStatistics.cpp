/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FindingTypeStatistics.h>
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

FindingTypeStatistics::FindingTypeStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

FindingTypeStatistics& FindingTypeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("findingType"))
  {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
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

JsonValue FindingTypeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_findingTypeHasBeenSet)
  {
   payload.WithString("findingType", m_findingType);

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
