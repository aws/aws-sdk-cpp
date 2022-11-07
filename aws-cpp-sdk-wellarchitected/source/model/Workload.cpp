/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/Workload.h>
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

Workload::Workload() : 
    m_workloadIdHasBeenSet(false),
    m_workloadArnHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environment(WorkloadEnvironment::NOT_SET),
    m_environmentHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_awsRegionsHasBeenSet(false),
    m_nonAwsRegionsHasBeenSet(false),
    m_architecturalDesignHasBeenSet(false),
    m_reviewOwnerHasBeenSet(false),
    m_reviewRestrictionDateHasBeenSet(false),
    m_isReviewOwnerUpdateAcknowledged(false),
    m_isReviewOwnerUpdateAcknowledgedHasBeenSet(false),
    m_industryTypeHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_improvementStatus(WorkloadImprovementStatus::NOT_SET),
    m_improvementStatusHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_pillarPrioritiesHasBeenSet(false),
    m_lensesHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_shareInvitationIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_discoveryConfigHasBeenSet(false),
    m_applicationsHasBeenSet(false)
{
}

Workload::Workload(JsonView jsonValue) : 
    m_workloadIdHasBeenSet(false),
    m_workloadArnHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environment(WorkloadEnvironment::NOT_SET),
    m_environmentHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_awsRegionsHasBeenSet(false),
    m_nonAwsRegionsHasBeenSet(false),
    m_architecturalDesignHasBeenSet(false),
    m_reviewOwnerHasBeenSet(false),
    m_reviewRestrictionDateHasBeenSet(false),
    m_isReviewOwnerUpdateAcknowledged(false),
    m_isReviewOwnerUpdateAcknowledgedHasBeenSet(false),
    m_industryTypeHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_improvementStatus(WorkloadImprovementStatus::NOT_SET),
    m_improvementStatusHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_pillarPrioritiesHasBeenSet(false),
    m_lensesHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_shareInvitationIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_discoveryConfigHasBeenSet(false),
    m_applicationsHasBeenSet(false)
{
  *this = jsonValue;
}

Workload& Workload::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = WorkloadEnvironmentMapper::GetWorkloadEnvironmentForName(jsonValue.GetString("Environment"));

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("AccountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegions"))
  {
    Aws::Utils::Array<JsonView> awsRegionsJsonList = jsonValue.GetArray("AwsRegions");
    for(unsigned awsRegionsIndex = 0; awsRegionsIndex < awsRegionsJsonList.GetLength(); ++awsRegionsIndex)
    {
      m_awsRegions.push_back(awsRegionsJsonList[awsRegionsIndex].AsString());
    }
    m_awsRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonAwsRegions"))
  {
    Aws::Utils::Array<JsonView> nonAwsRegionsJsonList = jsonValue.GetArray("NonAwsRegions");
    for(unsigned nonAwsRegionsIndex = 0; nonAwsRegionsIndex < nonAwsRegionsJsonList.GetLength(); ++nonAwsRegionsIndex)
    {
      m_nonAwsRegions.push_back(nonAwsRegionsJsonList[nonAwsRegionsIndex].AsString());
    }
    m_nonAwsRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchitecturalDesign"))
  {
    m_architecturalDesign = jsonValue.GetString("ArchitecturalDesign");

    m_architecturalDesignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewOwner"))
  {
    m_reviewOwner = jsonValue.GetString("ReviewOwner");

    m_reviewOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewRestrictionDate"))
  {
    m_reviewRestrictionDate = jsonValue.GetDouble("ReviewRestrictionDate");

    m_reviewRestrictionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsReviewOwnerUpdateAcknowledged"))
  {
    m_isReviewOwnerUpdateAcknowledged = jsonValue.GetBool("IsReviewOwnerUpdateAcknowledged");

    m_isReviewOwnerUpdateAcknowledgedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndustryType"))
  {
    m_industryType = jsonValue.GetString("IndustryType");

    m_industryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Industry"))
  {
    m_industry = jsonValue.GetString("Industry");

    m_industryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

    m_notesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImprovementStatus"))
  {
    m_improvementStatus = WorkloadImprovementStatusMapper::GetWorkloadImprovementStatusForName(jsonValue.GetString("ImprovementStatus"));

    m_improvementStatusHasBeenSet = true;
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

  if(jsonValue.ValueExists("PillarPriorities"))
  {
    Aws::Utils::Array<JsonView> pillarPrioritiesJsonList = jsonValue.GetArray("PillarPriorities");
    for(unsigned pillarPrioritiesIndex = 0; pillarPrioritiesIndex < pillarPrioritiesJsonList.GetLength(); ++pillarPrioritiesIndex)
    {
      m_pillarPriorities.push_back(pillarPrioritiesJsonList[pillarPrioritiesIndex].AsString());
    }
    m_pillarPrioritiesHasBeenSet = true;
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

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareInvitationId"))
  {
    m_shareInvitationId = jsonValue.GetString("ShareInvitationId");

    m_shareInvitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiscoveryConfig"))
  {
    m_discoveryConfig = jsonValue.GetObject("DiscoveryConfig");

    m_discoveryConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Applications"))
  {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsString());
    }
    m_applicationsHasBeenSet = true;
  }

  return *this;
}

JsonValue Workload::Jsonize() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithString("Environment", WorkloadEnvironmentMapper::GetNameForWorkloadEnvironment(m_environment));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("AccountIds", std::move(accountIdsJsonList));

  }

  if(m_awsRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsRegionsJsonList(m_awsRegions.size());
   for(unsigned awsRegionsIndex = 0; awsRegionsIndex < awsRegionsJsonList.GetLength(); ++awsRegionsIndex)
   {
     awsRegionsJsonList[awsRegionsIndex].AsString(m_awsRegions[awsRegionsIndex]);
   }
   payload.WithArray("AwsRegions", std::move(awsRegionsJsonList));

  }

  if(m_nonAwsRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nonAwsRegionsJsonList(m_nonAwsRegions.size());
   for(unsigned nonAwsRegionsIndex = 0; nonAwsRegionsIndex < nonAwsRegionsJsonList.GetLength(); ++nonAwsRegionsIndex)
   {
     nonAwsRegionsJsonList[nonAwsRegionsIndex].AsString(m_nonAwsRegions[nonAwsRegionsIndex]);
   }
   payload.WithArray("NonAwsRegions", std::move(nonAwsRegionsJsonList));

  }

  if(m_architecturalDesignHasBeenSet)
  {
   payload.WithString("ArchitecturalDesign", m_architecturalDesign);

  }

  if(m_reviewOwnerHasBeenSet)
  {
   payload.WithString("ReviewOwner", m_reviewOwner);

  }

  if(m_reviewRestrictionDateHasBeenSet)
  {
   payload.WithDouble("ReviewRestrictionDate", m_reviewRestrictionDate.SecondsWithMSPrecision());
  }

  if(m_isReviewOwnerUpdateAcknowledgedHasBeenSet)
  {
   payload.WithBool("IsReviewOwnerUpdateAcknowledged", m_isReviewOwnerUpdateAcknowledged);

  }

  if(m_industryTypeHasBeenSet)
  {
   payload.WithString("IndustryType", m_industryType);

  }

  if(m_industryHasBeenSet)
  {
   payload.WithString("Industry", m_industry);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_improvementStatusHasBeenSet)
  {
   payload.WithString("ImprovementStatus", WorkloadImprovementStatusMapper::GetNameForWorkloadImprovementStatus(m_improvementStatus));
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

  if(m_pillarPrioritiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pillarPrioritiesJsonList(m_pillarPriorities.size());
   for(unsigned pillarPrioritiesIndex = 0; pillarPrioritiesIndex < pillarPrioritiesJsonList.GetLength(); ++pillarPrioritiesIndex)
   {
     pillarPrioritiesJsonList[pillarPrioritiesIndex].AsString(m_pillarPriorities[pillarPrioritiesIndex]);
   }
   payload.WithArray("PillarPriorities", std::move(pillarPrioritiesJsonList));

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

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_shareInvitationIdHasBeenSet)
  {
   payload.WithString("ShareInvitationId", m_shareInvitationId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_discoveryConfigHasBeenSet)
  {
   payload.WithObject("DiscoveryConfig", m_discoveryConfig.Jsonize());

  }

  if(m_applicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsString(m_applications[applicationsIndex]);
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
