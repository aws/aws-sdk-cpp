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
