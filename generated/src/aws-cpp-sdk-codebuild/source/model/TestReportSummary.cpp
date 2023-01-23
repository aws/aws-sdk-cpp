/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/TestReportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

TestReportSummary::TestReportSummary() : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_statusCountsHasBeenSet(false),
    m_durationInNanoSeconds(0),
    m_durationInNanoSecondsHasBeenSet(false)
{
}

TestReportSummary::TestReportSummary(JsonView jsonValue) : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_statusCountsHasBeenSet(false),
    m_durationInNanoSeconds(0),
    m_durationInNanoSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

TestReportSummary& TestReportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCounts"))
  {
    Aws::Map<Aws::String, JsonView> statusCountsJsonMap = jsonValue.GetObject("statusCounts").GetAllObjects();
    for(auto& statusCountsItem : statusCountsJsonMap)
    {
      m_statusCounts[statusCountsItem.first] = statusCountsItem.second.AsInteger();
    }
    m_statusCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationInNanoSeconds"))
  {
    m_durationInNanoSeconds = jsonValue.GetInt64("durationInNanoSeconds");

    m_durationInNanoSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue TestReportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("total", m_total);

  }

  if(m_statusCountsHasBeenSet)
  {
   JsonValue statusCountsJsonMap;
   for(auto& statusCountsItem : m_statusCounts)
   {
     statusCountsJsonMap.WithInteger(statusCountsItem.first, statusCountsItem.second);
   }
   payload.WithObject("statusCounts", std::move(statusCountsJsonMap));

  }

  if(m_durationInNanoSecondsHasBeenSet)
  {
   payload.WithInt64("durationInNanoSeconds", m_durationInNanoSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
