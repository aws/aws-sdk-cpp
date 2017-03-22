/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_rejectedPatchesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePatchBaselineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdatePatchBaseline"));
  return headers;

}




