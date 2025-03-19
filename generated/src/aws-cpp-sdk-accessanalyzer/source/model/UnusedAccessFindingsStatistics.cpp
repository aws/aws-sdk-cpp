/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedAccessFindingsStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

UnusedAccessFindingsStatistics::UnusedAccessFindingsStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

UnusedAccessFindingsStatistics& UnusedAccessFindingsStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unusedAccessTypeStatistics"))
  {
    Aws::Utils::Array<JsonView> unusedAccessTypeStatisticsJsonList = jsonValue.GetArray("unusedAccessTypeStatistics");
    for(unsigned unusedAccessTypeStatisticsIndex = 0; unusedAccessTypeStatisticsIndex < unusedAccessTypeStatisticsJsonList.GetLength(); ++unusedAccessTypeStatisticsIndex)
    {
      m_unusedAccessTypeStatistics.push_back(unusedAccessTypeStatisticsJsonList[unusedAccessTypeStatisticsIndex].AsObject());
    }
    m_unusedAccessTypeStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("topAccounts"))
  {
    Aws::Utils::Array<JsonView> topAccountsJsonList = jsonValue.GetArray("topAccounts");
    for(unsigned topAccountsIndex = 0; topAccountsIndex < topAccountsJsonList.GetLength(); ++topAccountsIndex)
    {
      m_topAccounts.push_back(topAccountsJsonList[topAccountsIndex].AsObject());
    }
    m_topAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalActiveFindings"))
  {
    m_totalActiveFindings = jsonValue.GetInteger("totalActiveFindings");
    m_totalActiveFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalArchivedFindings"))
  {
    m_totalArchivedFindings = jsonValue.GetInteger("totalArchivedFindings");
    m_totalArchivedFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalResolvedFindings"))
  {
    m_totalResolvedFindings = jsonValue.GetInteger("totalResolvedFindings");
    m_totalResolvedFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue UnusedAccessFindingsStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_unusedAccessTypeStatisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unusedAccessTypeStatisticsJsonList(m_unusedAccessTypeStatistics.size());
   for(unsigned unusedAccessTypeStatisticsIndex = 0; unusedAccessTypeStatisticsIndex < unusedAccessTypeStatisticsJsonList.GetLength(); ++unusedAccessTypeStatisticsIndex)
   {
     unusedAccessTypeStatisticsJsonList[unusedAccessTypeStatisticsIndex].AsObject(m_unusedAccessTypeStatistics[unusedAccessTypeStatisticsIndex].Jsonize());
   }
   payload.WithArray("unusedAccessTypeStatistics", std::move(unusedAccessTypeStatisticsJsonList));

  }

  if(m_topAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topAccountsJsonList(m_topAccounts.size());
   for(unsigned topAccountsIndex = 0; topAccountsIndex < topAccountsJsonList.GetLength(); ++topAccountsIndex)
   {
     topAccountsJsonList[topAccountsIndex].AsObject(m_topAccounts[topAccountsIndex].Jsonize());
   }
   payload.WithArray("topAccounts", std::move(topAccountsJsonList));

  }

  if(m_totalActiveFindingsHasBeenSet)
  {
   payload.WithInteger("totalActiveFindings", m_totalActiveFindings);

  }

  if(m_totalArchivedFindingsHasBeenSet)
  {
   payload.WithInteger("totalArchivedFindings", m_totalArchivedFindings);

  }

  if(m_totalResolvedFindingsHasBeenSet)
  {
   payload.WithInteger("totalResolvedFindings", m_totalResolvedFindings);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
