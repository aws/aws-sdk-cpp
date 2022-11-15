/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

WorkloadSummary::WorkloadSummary() : 
    m_workloadIdHasBeenSet(false),
    m_workloadArnHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lensesHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_improvementStatus(WorkloadImprovementStatus::NOT_SET),
    m_improvementStatusHasBeenSet(false)
{
}

WorkloadSummary::WorkloadSummary(JsonView jsonValue) : 
    m_workloadIdHasBeenSet(false),
    m_workloadArnHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lensesHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_improvementStatus(WorkloadImprovementStatus::NOT_SET),
    m_improvementStatusHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadSummary& WorkloadSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadArn"))
  {
    m_workloadArn = jsonValue.GetString("WorkloadArn");

    m_workloadArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadName"))
  {
    m_workloadName = jsonValue.GetString("WorkloadName");

    m_workloadNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lenses"))
  {
    Aws::Utils::Array<JsonView> lensesJsonList = jsonValue.GetArray("Lenses");
    for(unsigned lensesIndex = 0; lensesIndex < lensesJsonList.GetLength(); ++lensesIndex)
    {
      m_lenses.push_back(lensesJsonList[lensesIndex].AsString());
    }
    m_lensesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskCounts"))
  {
    Aws::Map<Aws::String, JsonView> riskCountsJsonMap = jsonValue.GetObject("RiskCounts").GetAllObjects();
    for(auto& riskCountsItem : riskCountsJsonMap)
    {
      m_riskCounts[RiskMapper::GetRiskForName(riskCountsItem.first)] = riskCountsItem.second.AsInteger();
    }
    m_riskCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImprovementStatus"))
  {
    m_improvementStatus = WorkloadImprovementStatusMapper::GetWorkloadImprovementStatusForName(jsonValue.GetString("ImprovementStatus"));

    m_improvementStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadSummary::Jsonize() const
{
  JsonValue payload;

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_workloadArnHasBeenSet)
  {
   payload.WithString("WorkloadArn", m_workloadArn);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_lensesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lensesJsonList(m_lenses.size());
   for(unsigned lensesIndex = 0; lensesIndex < lensesJsonList.GetLength(); ++lensesIndex)
   {
     lensesJsonList[lensesIndex].AsString(m_lenses[lensesIndex]);
   }
   payload.WithArray("Lenses", std::move(lensesJsonList));

  }

  if(m_riskCountsHasBeenSet)
  {
   JsonValue riskCountsJsonMap;
   for(auto& riskCountsItem : m_riskCounts)
   {
     riskCountsJsonMap.WithInteger(RiskMapper::GetNameForRisk(riskCountsItem.first), riskCountsItem.second);
   }
   payload.WithObject("RiskCounts", std::move(riskCountsJsonMap));

  }

  if(m_improvementStatusHasBeenSet)
  {
   payload.WithString("ImprovementStatus", WorkloadImprovementStatusMapper::GetNameForWorkloadImprovementStatus(m_improvementStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
