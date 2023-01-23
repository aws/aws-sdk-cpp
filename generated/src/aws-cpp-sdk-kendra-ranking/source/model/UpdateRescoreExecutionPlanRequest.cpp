/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/UpdateRescoreExecutionPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KendraRanking::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRescoreExecutionPlanRequest::UpdateRescoreExecutionPlanRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_capacityUnitsHasBeenSet(false)
{
}

Aws::String UpdateRescoreExecutionPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_capacityUnitsHasBeenSet)
  {
   payload.WithObject("CapacityUnits", m_capacityUnits.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRescoreExecutionPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraRerankingFrontendService.UpdateRescoreExecutionPlan"));
  return headers;

}




