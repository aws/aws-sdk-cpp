/*
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

#include <aws/config/model/PutOrganizationConformancePackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutOrganizationConformancePackRequest::PutOrganizationConformancePackRequest() : 
    m_organizationConformancePackNameHasBeenSet(false),
    m_templateS3UriHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_deliveryS3BucketHasBeenSet(false),
    m_deliveryS3KeyPrefixHasBeenSet(false),
    m_conformancePackInputParametersHasBeenSet(false),
    m_excludedAccountsHasBeenSet(false)
{
}

Aws::String PutOrganizationConformancePackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConformancePackNameHasBeenSet)
  {
   payload.WithString("OrganizationConformancePackName", m_organizationConformancePackName);

  }

  if(m_templateS3UriHasBeenSet)
  {
   payload.WithString("TemplateS3Uri", m_templateS3Uri);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("TemplateBody", m_templateBody);

  }

  if(m_deliveryS3BucketHasBeenSet)
  {
   payload.WithString("DeliveryS3Bucket", m_deliveryS3Bucket);

  }

  if(m_deliveryS3KeyPrefixHasBeenSet)
  {
   payload.WithString("DeliveryS3KeyPrefix", m_deliveryS3KeyPrefix);

  }

  if(m_conformancePackInputParametersHasBeenSet)
  {
   Array<JsonValue> conformancePackInputParametersJsonList(m_conformancePackInputParameters.size());
   for(unsigned conformancePackInputParametersIndex = 0; conformancePackInputParametersIndex < conformancePackInputParametersJsonList.GetLength(); ++conformancePackInputParametersIndex)
   {
     conformancePackInputParametersJsonList[conformancePackInputParametersIndex].AsObject(m_conformancePackInputParameters[conformancePackInputParametersIndex].Jsonize());
   }
   payload.WithArray("ConformancePackInputParameters", std::move(conformancePackInputParametersJsonList));

  }

  if(m_excludedAccountsHasBeenSet)
  {
   Array<JsonValue> excludedAccountsJsonList(m_excludedAccounts.size());
   for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
   {
     excludedAccountsJsonList[excludedAccountsIndex].AsString(m_excludedAccounts[excludedAccountsIndex]);
   }
   payload.WithArray("ExcludedAccounts", std::move(excludedAccountsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutOrganizationConformancePackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutOrganizationConformancePack"));
  return headers;

}




