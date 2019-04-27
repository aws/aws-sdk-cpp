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

#include <aws/organizations/model/CreateGovCloudAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGovCloudAccountRequest::CreateGovCloudAccountRequest() : 
    m_emailHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_iamUserAccessToBilling(IAMUserAccessToBilling::NOT_SET),
    m_iamUserAccessToBillingHasBeenSet(false)
{
}

Aws::String CreateGovCloudAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("RoleName", m_roleName);

  }

  if(m_iamUserAccessToBillingHasBeenSet)
  {
   payload.WithString("IamUserAccessToBilling", IAMUserAccessToBillingMapper::GetNameForIAMUserAccessToBilling(m_iamUserAccessToBilling));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGovCloudAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.CreateGovCloudAccount"));
  return headers;

}




