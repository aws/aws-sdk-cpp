/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> conformancePackInputParametersJsonList(m_conformancePackInputParameters.size());
   for(unsigned conformancePackInputParametersIndex = 0; conformancePackInputParametersIndex < conformancePackInputParametersJsonList.GetLength(); ++conformancePackInputParametersIndex)
   {
     conformancePackInputParametersJsonList[conformancePackInputParametersIndex].AsObject(m_conformancePackInputParameters[conformancePackInputParametersIndex].Jsonize());
   }
   payload.WithArray("ConformancePackInputParameters", std::move(conformancePackInputParametersJsonList));

  }

  if(m_excludedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedAccountsJsonList(m_excludedAccounts.size());
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




