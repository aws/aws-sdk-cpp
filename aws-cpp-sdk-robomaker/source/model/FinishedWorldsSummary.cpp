/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/FinishedWorldsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

FinishedWorldsSummary::FinishedWorldsSummary() : 
    m_finishedCount(0),
    m_finishedCountHasBeenSet(false),
    m_succeededWorldsHasBeenSet(false),
    m_failureSummaryHasBeenSet(false)
{
}

FinishedWorldsSummary::FinishedWorldsSummary(JsonView jsonValue) : 
    m_finishedCount(0),
    m_finishedCountHasBeenSet(false),
    m_succeededWorldsHasBeenSet(false),
    m_failureSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

FinishedWorldsSummary& FinishedWorldsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("finishedCount"))
  {
    m_finishedCount = jsonValue.GetInteger("finishedCount");

    m_finishedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("succeededWorlds"))
  {
    Aws::Utils::Array<JsonView> succeededWorldsJsonList = jsonValue.GetArray("succeededWorlds");
    for(unsigned succeededWorldsIndex = 0; succeededWorldsIndex < succeededWorldsJsonList.GetLength(); ++succeededWorldsIndex)
    {
      m_succeededWorlds.push_back(succeededWorldsJsonList[succeededWorldsIndex].AsString());
    }
    m_succeededWorldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureSummary"))
  {
    m_failureSummary = jsonValue.GetObject("failureSummary");

    m_failureSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue FinishedWorldsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_finishedCountHasBeenSet)
  {
   payload.WithInteger("finishedCount", m_finishedCount);

  }

  if(m_succeededWorldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> succeededWorldsJsonList(m_succeededWorlds.size());
   for(unsigned succeededWorldsIndex = 0; succeededWorldsIndex < succeededWorldsJsonList.GetLength(); ++succeededWorldsIndex)
   {
     succeededWorldsJsonList[succeededWorldsIndex].AsString(m_succeededWorlds[succeededWorldsIndex]);
   }
   payload.WithArray("succeededWorlds", std::move(succeededWorldsJsonList));

  }

  if(m_failureSummaryHasBeenSet)
  {
   payload.WithObject("failureSummary", m_failureSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
