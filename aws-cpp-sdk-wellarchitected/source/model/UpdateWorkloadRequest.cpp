/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateWorkloadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkloadRequest::UpdateWorkloadRequest() : 
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environment(WorkloadEnvironment::NOT_SET),
    m_environmentHasBeenSet(false),
    m_accountIdsHasBeenSet(false),
    m_awsRegionsHasBeenSet(false),
    m_nonAwsRegionsHasBeenSet(false),
    m_pillarPrioritiesHasBeenSet(false),
    m_architecturalDesignHasBeenSet(false),
    m_reviewOwnerHasBeenSet(false),
    m_isReviewOwnerUpdateAcknowledged(false),
    m_isReviewOwnerUpdateAcknowledgedHasBeenSet(false),
    m_industryTypeHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_improvementStatus(WorkloadImprovementStatus::NOT_SET),
    m_improvementStatusHasBeenSet(false),
    m_discoveryConfigHasBeenSet(false),
    m_applicationsHasBeenSet(false)
{
}

Aws::String UpdateWorkloadRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_pillarPrioritiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pillarPrioritiesJsonList(m_pillarPriorities.size());
   for(unsigned pillarPrioritiesIndex = 0; pillarPrioritiesIndex < pillarPrioritiesJsonList.GetLength(); ++pillarPrioritiesIndex)
   {
     pillarPrioritiesJsonList[pillarPrioritiesIndex].AsString(m_pillarPriorities[pillarPrioritiesIndex]);
   }
   payload.WithArray("PillarPriorities", std::move(pillarPrioritiesJsonList));

  }

  if(m_architecturalDesignHasBeenSet)
  {
   payload.WithString("ArchitecturalDesign", m_architecturalDesign);

  }

  if(m_reviewOwnerHasBeenSet)
  {
   payload.WithString("ReviewOwner", m_reviewOwner);

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

  return payload.View().WriteReadable();
}




