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
    m_nextTokenHasBeenSet(false)
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
   Array<JsonValue> complianceTypesJsonList(m_complianceTypes.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetComplianceDetailsByResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetComplianceDetailsByResource"));
  return headers;

}




