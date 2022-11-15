/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreatePatchBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePatchBaselineRequest::CreatePatchBaselineRequest() : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_globalFiltersHasBeenSet(false),
    m_approvalRulesHasBeenSet(false),
    m_approvedPatchesHasBeenSet(false),
    m_approvedPatchesComplianceLevel(PatchComplianceLevel::NOT_SET),
    m_approvedPatchesComplianceLevelHasBeenSet(false),
    m_approvedPatchesEnableNonSecurity(false),
    m_approvedPatchesEnableNonSecurityHasBeenSet(false),
    m_rejectedPatchesHasBeenSet(false),
    m_rejectedPatchesAction(PatchAction::NOT_SET),
    m_rejectedPatchesActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePatchBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_globalFiltersHasBeenSet)
  {
   payload.WithObject("GlobalFilters", m_globalFilters.Jsonize());

  }

  if(m_approvalRulesHasBeenSet)
  {
   payload.WithObject("ApprovalRules", m_approvalRules.Jsonize());

  }

  if(m_approvedPatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approvedPatchesJsonList(m_approvedPatches.size());
   for(unsigned approvedPatchesIndex = 0; approvedPatchesIndex < approvedPatchesJsonList.GetLength(); ++approvedPatchesIndex)
   {
     approvedPatchesJsonList[approvedPatchesIndex].AsString(m_approvedPatches[approvedPatchesIndex]);
   }
   payload.WithArray("ApprovedPatches", std::move(approvedPatchesJsonList));

  }

  if(m_approvedPatchesComplianceLevelHasBeenSet)
  {
   payload.WithString("ApprovedPatchesComplianceLevel", PatchComplianceLevelMapper::GetNameForPatchComplianceLevel(m_approvedPatchesComplianceLevel));
  }

  if(m_approvedPatchesEnableNonSecurityHasBeenSet)
  {
   payload.WithBool("ApprovedPatchesEnableNonSecurity", m_approvedPatchesEnableNonSecurity);

  }

  if(m_rejectedPatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rejectedPatchesJsonList(m_rejectedPatches.size());
   for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
   {
     rejectedPatchesJsonList[rejectedPatchesIndex].AsString(m_rejectedPatches[rejectedPatchesIndex]);
   }
   payload.WithArray("RejectedPatches", std::move(rejectedPatchesJsonList));

  }

  if(m_rejectedPatchesActionHasBeenSet)
  {
   payload.WithString("RejectedPatchesAction", PatchActionMapper::GetNameForPatchAction(m_rejectedPatchesAction));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("Sources", std::move(sourcesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePatchBaselineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreatePatchBaseline"));
  return headers;

}




