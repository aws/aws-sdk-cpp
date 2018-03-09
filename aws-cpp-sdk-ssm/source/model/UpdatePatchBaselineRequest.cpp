﻿/*
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

#include <aws/ssm/model/UpdatePatchBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePatchBaselineRequest::UpdatePatchBaselineRequest() : 
    m_baselineIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_globalFiltersHasBeenSet(false),
    m_approvalRulesHasBeenSet(false),
    m_approvedPatchesHasBeenSet(false),
    m_approvedPatchesComplianceLevel(PatchComplianceLevel::NOT_SET),
    m_approvedPatchesComplianceLevelHasBeenSet(false),
    m_approvedPatchesEnableNonSecurity(false),
    m_approvedPatchesEnableNonSecurityHasBeenSet(false),
    m_rejectedPatchesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_replace(false),
    m_replaceHasBeenSet(false)
{
}

Aws::String UpdatePatchBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baselineIdHasBeenSet)
  {
   payload.WithString("BaselineId", m_baselineId);

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
   Array<JsonValue> approvedPatchesJsonList(m_approvedPatches.size());
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
   Array<JsonValue> rejectedPatchesJsonList(m_rejectedPatches.size());
   for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
   {
     rejectedPatchesJsonList[rejectedPatchesIndex].AsString(m_rejectedPatches[rejectedPatchesIndex]);
   }
   payload.WithArray("RejectedPatches", std::move(rejectedPatchesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sourcesHasBeenSet)
  {
   Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("Sources", std::move(sourcesJsonList));

  }

  if(m_replaceHasBeenSet)
  {
   payload.WithBool("Replace", m_replace);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePatchBaselineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdatePatchBaseline"));
  return headers;

}




