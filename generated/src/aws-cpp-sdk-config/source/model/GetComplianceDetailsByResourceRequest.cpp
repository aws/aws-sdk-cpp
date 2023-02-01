/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetComplianceDetailsByResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetComplianceDetailsByResourceRequest::GetComplianceDetailsByResourceRequest() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_complianceTypesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resourceEvaluationIdHasBeenSet(false)
{
}

Aws::String GetComplianceDetailsByResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_complianceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceTypesJsonList(m_complianceTypes.size());
   for(unsigned complianceTypesIndex = 0; complianceTypesIndex < complianceTypesJsonList.GetLength(); ++complianceTypesIndex)
   {
     complianceTypesJsonList[complianceTypesIndex].AsString(ComplianceTypeMapper::GetNameForComplianceType(m_complianceTypes[complianceTypesIndex]));
   }
   payload.WithArray("ComplianceTypes", std::move(complianceTypesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_resourceEvaluationIdHasBeenSet)
  {
   payload.WithString("ResourceEvaluationId", m_resourceEvaluationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetComplianceDetailsByResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetComplianceDetailsByResource"));
  return headers;

}




