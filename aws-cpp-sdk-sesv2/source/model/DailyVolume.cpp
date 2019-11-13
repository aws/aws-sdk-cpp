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

#include <aws/sesv2/model/DailyVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DailyVolume::DailyVolume() : 
    m_startDateHasBeenSet(false),
    m_volumeStatisticsHasBeenSet(false),
    m_domainIspPlacementsHasBeenSet(false)
{
}

DailyVolume::DailyVolume(JsonView jsonValue) : 
    m_startDateHasBeenSet(false),
    m_volumeStatisticsHasBeenSet(false),
    m_domainIspPlacementsHasBeenSet(false)
{
  *this = jsonValue;
}

DailyVolume& DailyVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeStatistics"))
  {
    m_volumeStatistics = jsonValue.GetObject("VolumeStatistics");

    m_volumeStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainIspPlacements"))
  {
    Array<JsonView> domainIspPlacementsJsonList = jsonValue.GetArray("DomainIspPlacements");
    for(unsigned domainIspPlacementsIndex = 0; domainIspPlacementsIndex < domainIspPlacementsJsonList.GetLength(); ++domainIspPlacementsIndex)
    {
      m_domainIspPlacements.push_back(domainIspPlacementsJsonList[domainIspPlacementsIndex].AsObject());
    }
    m_domainIspPlacementsHasBeenSet = true;
  }

  return *this;
}

JsonValue DailyVolume::Jsonize() const
{
  JsonValue payload;

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_volumeStatisticsHasBeenSet)
  {
   payload.WithObject("VolumeStatistics", m_volumeStatistics.Jsonize());

  }

  if(m_domainIspPlacementsHasBeenSet)
  {
   Array<JsonValue> domainIspPlacementsJsonList(m_domainIspPlacements.size());
   for(unsigned domainIspPlacementsIndex = 0; domainIspPlacementsIndex < domainIspPlacementsJsonList.GetLength(); ++domainIspPlacementsIndex)
   {
     domainIspPlacementsJsonList[domainIspPlacementsIndex].AsObject(m_domainIspPlacements[domainIspPlacementsIndex].Jsonize());
   }
   payload.WithArray("DomainIspPlacements", std::move(domainIspPlacementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
