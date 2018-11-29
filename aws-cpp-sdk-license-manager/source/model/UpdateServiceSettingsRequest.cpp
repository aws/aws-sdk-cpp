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

#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceSettingsRequest::UpdateServiceSettingsRequest() : 
    m_s3BucketArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_organizationConfigurationHasBeenSet(false),
    m_enableCrossAccountsDiscovery(false),
    m_enableCrossAccountsDiscoveryHasBeenSet(false)
{
}

Aws::String UpdateServiceSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("S3BucketArn", m_s3BucketArn);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_organizationConfigurationHasBeenSet)
  {
   payload.WithObject("OrganizationConfiguration", m_organizationConfiguration.Jsonize());

  }

  if(m_enableCrossAccountsDiscoveryHasBeenSet)
  {
   payload.WithBool("EnableCrossAccountsDiscovery", m_enableCrossAccountsDiscovery);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.UpdateServiceSettings"));
  return headers;

}




