/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/InternalAccessFindingsStatistics.h>
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

InternalAccessFindingsStatistics::InternalAccessFindingsStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

InternalAccessFindingsStatistics& InternalAccessFindingsStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceTypeStatistics"))
  {
    Aws::Map<Aws::String, JsonView> resourceTypeStatisticsJsonMap = jsonValue.GetObject("resourceTypeStatistics").GetAllObjects();
    for(auto& resourceTypeStatisticsItem : resourceTypeStatisticsJsonMap)
    {
      m_resourceTypeStatistics[ResourceTypeMapper::GetResourceTypeForName(resourceTypeStatisticsItem.first)] = resourceTypeStatisticsItem.second.AsObject();
    }
    m_resourceTypeStatisticsHasBeenSet = true;
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

JsonValue InternalAccessFindingsStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeStatisticsHasBeenSet)
  {
   JsonValue resourceTypeStatisticsJsonMap;
   for(auto& resourceTypeStatisticsItem : m_resourceTypeStatistics)
   {
     resourceTypeStatisticsJsonMap.WithObject(ResourceTypeMapper::GetNameForResourceType(resourceTypeStatisticsItem.first), resourceTypeStatisticsItem.second.Jsonize());
   }
   payload.WithObject("resourceTypeStatistics", std::move(resourceTypeStatisticsJsonMap));

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
