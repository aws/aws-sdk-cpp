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
#include <aws/route53domains/model/TransferDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TransferDomainRequest::TransferDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_idnLangCodeHasBeenSet(false),
    m_durationInYears(0),
    m_durationInYearsHasBeenSet(false),
    m_nameserversHasBeenSet(false),
    m_authCodeHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_adminContactHasBeenSet(false),
    m_registrantContactHasBeenSet(false),
    m_techContactHasBeenSet(false),
    m_privacyProtectAdminContact(false),
    m_privacyProtectAdminContactHasBeenSet(false),
    m_privacyProtectRegistrantContact(false),
    m_privacyProtectRegistrantContactHasBeenSet(false),
    m_privacyProtectTechContact(false),
    m_privacyProtectTechContactHasBeenSet(false)
{
}

Aws::String TransferDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_idnLangCodeHasBeenSet)
  {
   payload.WithString("IdnLangCode", m_idnLangCode);

  }

  if(m_durationInYearsHasBeenSet)
  {
   payload.WithInteger("DurationInYears", m_durationInYears);

  }

  if(m_nameserversHasBeenSet)
  {
   Array<JsonValue> nameserversJsonList(m_nameservers.size());
   for(unsigned nameserversIndex = 0; nameserversIndex < nameserversJsonList.GetLength(); ++nameserversIndex)
   {
     nameserversJsonList[nameserversIndex].AsObject(m_nameservers[nameserversIndex].Jsonize());
   }
   payload.WithArray("Nameservers", std::move(nameserversJsonList));

  }

  if(m_authCodeHasBeenSet)
  {
   payload.WithString("AuthCode", m_authCode);

  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithBool("AutoRenew", m_autoRenew);

  }

  if(m_adminContactHasBeenSet)
  {
   payload.WithObject("AdminContact", m_adminContact.Jsonize());

  }

  if(m_registrantContactHasBeenSet)
  {
   payload.WithObject("RegistrantContact", m_registrantContact.Jsonize());

  }

  if(m_techContactHasBeenSet)
  {
   payload.WithObject("TechContact", m_techContact.Jsonize());

  }

  if(m_privacyProtectAdminContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectAdminContact", m_privacyProtectAdminContact);

  }

  if(m_privacyProtectRegistrantContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectRegistrantContact", m_privacyProtectRegistrantContact);

  }

  if(m_privacyProtectTechContactHasBeenSet)
  {
   payload.WithBool("PrivacyProtectTechContact", m_privacyProtectTechContact);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection TransferDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.TransferDomain"));
  return headers;

}



