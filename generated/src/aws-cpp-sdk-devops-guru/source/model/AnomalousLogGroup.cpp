/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalousLogGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

AnomalousLogGroup::AnomalousLogGroup() : 
    m_logGroupNameHasBeenSet(false),
    m_impactStartTimeHasBeenSet(false),
    m_impactEndTimeHasBeenSet(false),
    m_numberOfLogLinesScanned(0),
    m_numberOfLogLinesScannedHasBeenSet(false),
    m_logAnomalyShowcasesHasBeenSet(false)
{
}

AnomalousLogGroup::AnomalousLogGroup(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_impactStartTimeHasBeenSet(false),
    m_impactEndTimeHasBeenSet(false),
    m_numberOfLogLinesScanned(0),
    m_numberOfLogLinesScannedHasBeenSet(false),
    m_logAnomalyShowcasesHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalousLogGroup& AnomalousLogGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImpactStartTime"))
  {
    m_impactStartTime = jsonValue.GetDouble("ImpactStartTime");

    m_impactStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImpactEndTime"))
  {
    m_impactEndTime = jsonValue.GetDouble("ImpactEndTime");

    m_impactEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfLogLinesScanned"))
  {
    m_numberOfLogLinesScanned = jsonValue.GetInteger("NumberOfLogLinesScanned");

    m_numberOfLogLinesScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogAnomalyShowcases"))
  {
    Aws::Utils::Array<JsonView> logAnomalyShowcasesJsonList = jsonValue.GetArray("LogAnomalyShowcases");
    for(unsigned logAnomalyShowcasesIndex = 0; logAnomalyShowcasesIndex < logAnomalyShowcasesJsonList.GetLength(); ++logAnomalyShowcasesIndex)
    {
      m_logAnomalyShowcases.push_back(logAnomalyShowcasesJsonList[logAnomalyShowcasesIndex].AsObject());
    }
    m_logAnomalyShowcasesHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalousLogGroup::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_impactStartTimeHasBeenSet)
  {
   payload.WithDouble("ImpactStartTime", m_impactStartTime.SecondsWithMSPrecision());
  }

  if(m_impactEndTimeHasBeenSet)
  {
   payload.WithDouble("ImpactEndTime", m_impactEndTime.SecondsWithMSPrecision());
  }

  if(m_numberOfLogLinesScannedHasBeenSet)
  {
   payload.WithInteger("NumberOfLogLinesScanned", m_numberOfLogLinesScanned);

  }

  if(m_logAnomalyShowcasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logAnomalyShowcasesJsonList(m_logAnomalyShowcases.size());
   for(unsigned logAnomalyShowcasesIndex = 0; logAnomalyShowcasesIndex < logAnomalyShowcasesJsonList.GetLength(); ++logAnomalyShowcasesIndex)
   {
     logAnomalyShowcasesJsonList[logAnomalyShowcasesIndex].AsObject(m_logAnomalyShowcases[logAnomalyShowcasesIndex].Jsonize());
   }
   payload.WithArray("LogAnomalyShowcases", std::move(logAnomalyShowcasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
