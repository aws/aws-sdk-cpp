/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FindingStatistics.h>
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

FindingStatistics::FindingStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

FindingStatistics& FindingStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupedByAccount"))
  {
    Aws::Utils::Array<JsonView> groupedByAccountJsonList = jsonValue.GetArray("groupedByAccount");
    for(unsigned groupedByAccountIndex = 0; groupedByAccountIndex < groupedByAccountJsonList.GetLength(); ++groupedByAccountIndex)
    {
      m_groupedByAccount.push_back(groupedByAccountJsonList[groupedByAccountIndex].AsObject());
    }
    m_groupedByAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupedByDate"))
  {
    Aws::Utils::Array<JsonView> groupedByDateJsonList = jsonValue.GetArray("groupedByDate");
    for(unsigned groupedByDateIndex = 0; groupedByDateIndex < groupedByDateJsonList.GetLength(); ++groupedByDateIndex)
    {
      m_groupedByDate.push_back(groupedByDateJsonList[groupedByDateIndex].AsObject());
    }
    m_groupedByDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupedByFindingType"))
  {
    Aws::Utils::Array<JsonView> groupedByFindingTypeJsonList = jsonValue.GetArray("groupedByFindingType");
    for(unsigned groupedByFindingTypeIndex = 0; groupedByFindingTypeIndex < groupedByFindingTypeJsonList.GetLength(); ++groupedByFindingTypeIndex)
    {
      m_groupedByFindingType.push_back(groupedByFindingTypeJsonList[groupedByFindingTypeIndex].AsObject());
    }
    m_groupedByFindingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupedByResource"))
  {
    Aws::Utils::Array<JsonView> groupedByResourceJsonList = jsonValue.GetArray("groupedByResource");
    for(unsigned groupedByResourceIndex = 0; groupedByResourceIndex < groupedByResourceJsonList.GetLength(); ++groupedByResourceIndex)
    {
      m_groupedByResource.push_back(groupedByResourceJsonList[groupedByResourceIndex].AsObject());
    }
    m_groupedByResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupedBySeverity"))
  {
    Aws::Utils::Array<JsonView> groupedBySeverityJsonList = jsonValue.GetArray("groupedBySeverity");
    for(unsigned groupedBySeverityIndex = 0; groupedBySeverityIndex < groupedBySeverityJsonList.GetLength(); ++groupedBySeverityIndex)
    {
      m_groupedBySeverity.push_back(groupedBySeverityJsonList[groupedBySeverityIndex].AsObject());
    }
    m_groupedBySeverityHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_groupedByAccountHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupedByAccountJsonList(m_groupedByAccount.size());
   for(unsigned groupedByAccountIndex = 0; groupedByAccountIndex < groupedByAccountJsonList.GetLength(); ++groupedByAccountIndex)
   {
     groupedByAccountJsonList[groupedByAccountIndex].AsObject(m_groupedByAccount[groupedByAccountIndex].Jsonize());
   }
   payload.WithArray("groupedByAccount", std::move(groupedByAccountJsonList));

  }

  if(m_groupedByDateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupedByDateJsonList(m_groupedByDate.size());
   for(unsigned groupedByDateIndex = 0; groupedByDateIndex < groupedByDateJsonList.GetLength(); ++groupedByDateIndex)
   {
     groupedByDateJsonList[groupedByDateIndex].AsObject(m_groupedByDate[groupedByDateIndex].Jsonize());
   }
   payload.WithArray("groupedByDate", std::move(groupedByDateJsonList));

  }

  if(m_groupedByFindingTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupedByFindingTypeJsonList(m_groupedByFindingType.size());
   for(unsigned groupedByFindingTypeIndex = 0; groupedByFindingTypeIndex < groupedByFindingTypeJsonList.GetLength(); ++groupedByFindingTypeIndex)
   {
     groupedByFindingTypeJsonList[groupedByFindingTypeIndex].AsObject(m_groupedByFindingType[groupedByFindingTypeIndex].Jsonize());
   }
   payload.WithArray("groupedByFindingType", std::move(groupedByFindingTypeJsonList));

  }

  if(m_groupedByResourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupedByResourceJsonList(m_groupedByResource.size());
   for(unsigned groupedByResourceIndex = 0; groupedByResourceIndex < groupedByResourceJsonList.GetLength(); ++groupedByResourceIndex)
   {
     groupedByResourceJsonList[groupedByResourceIndex].AsObject(m_groupedByResource[groupedByResourceIndex].Jsonize());
   }
   payload.WithArray("groupedByResource", std::move(groupedByResourceJsonList));

  }

  if(m_groupedBySeverityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupedBySeverityJsonList(m_groupedBySeverity.size());
   for(unsigned groupedBySeverityIndex = 0; groupedBySeverityIndex < groupedBySeverityJsonList.GetLength(); ++groupedBySeverityIndex)
   {
     groupedBySeverityJsonList[groupedBySeverityIndex].AsObject(m_groupedBySeverity[groupedBySeverityIndex].Jsonize());
   }
   payload.WithArray("groupedBySeverity", std::move(groupedBySeverityJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
