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
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainContactPrivacyRequest::UpdateDomainContactPrivacyRequest() : 
    m_domainNameHasBeenSet(false),
    m_adminPrivacy(false),
    m_adminPrivacyHasBeenSet(false),
    m_registrantPrivacy(false),
    m_registrantPrivacyHasBeenSet(false),
    m_techPrivacy(false),
    m_techPrivacyHasBeenSet(false)
{
}

Aws::String UpdateDomainContactPrivacyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_adminPrivacyHasBeenSet)
  {
   payload.WithBool("AdminPrivacy", m_adminPrivacy);

  }

  if(m_registrantPrivacyHasBeenSet)
  {
   payload.WithBool("RegistrantPrivacy", m_registrantPrivacy);

  }

  if(m_techPrivacyHasBeenSet)
  {
   payload.WithBool("TechPrivacy", m_techPrivacy);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainContactPrivacyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.UpdateDomainContactPrivacy"));
  return headers;

}



