/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageStatistics.h>
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

CoverageStatistics::CoverageStatistics() : 
    m_countByResourceTypeHasBeenSet(false),
    m_countByCoverageStatusHasBeenSet(false)
{
}

CoverageStatistics::CoverageStatistics(JsonView jsonValue) : 
    m_countByResourceTypeHasBeenSet(false),
    m_countByCoverageStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageStatistics& CoverageStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("countByResourceType"))
  {
    Aws::Map<Aws::String, JsonView> countByResourceTypeJsonMap = jsonValue.GetObject("countByResourceType").GetAllObjects();
    for(auto& countByResourceTypeItem : countByResourceTypeJsonMap)
    {
      m_countByResourceType[ResourceTypeMapper::GetResourceTypeForName(countByResourceTypeItem.first)] = countByResourceTypeItem.second.AsInt64();
    }
    m_countByResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("countByCoverageStatus"))
  {
    Aws::Map<Aws::String, JsonView> countByCoverageStatusJsonMap = jsonValue.GetObject("countByCoverageStatus").GetAllObjects();
    for(auto& countByCoverageStatusItem : countByCoverageStatusJsonMap)
    {
      m_countByCoverageStatus[CoverageStatusMapper::GetCoverageStatusForName(countByCoverageStatusItem.first)] = countByCoverageStatusItem.second.AsInt64();
    }
    m_countByCoverageStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_countByResourceTypeHasBeenSet)
  {
   JsonValue countByResourceTypeJsonMap;
   for(auto& countByResourceTypeItem : m_countByResourceType)
   {
     countByResourceTypeJsonMap.WithInt64(ResourceTypeMapper::GetNameForResourceType(countByResourceTypeItem.first), countByResourceTypeItem.second);
   }
   payload.WithObject("countByResourceType", std::move(countByResourceTypeJsonMap));

  }

  if(m_countByCoverageStatusHasBeenSet)
  {
   JsonValue countByCoverageStatusJsonMap;
   for(auto& countByCoverageStatusItem : m_countByCoverageStatus)
   {
     countByCoverageStatusJsonMap.WithInt64(CoverageStatusMapper::GetNameForCoverageStatus(countByCoverageStatusItem.first), countByCoverageStatusItem.second);
   }
   payload.WithObject("countByCoverageStatus", std::move(countByCoverageStatusJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
