/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/UpdateDomainContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainContactRequest::UpdateDomainContactRequest() : 
    m_domainNameHasBeenSet(false),
    m_adminContactHasBeenSet(false),
    m_registrantContactHasBeenSet(false),
    m_techContactHasBeenSet(false),
    m_consentHasBeenSet(false)
{
}

Aws::String UpdateDomainContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

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

  if(m_consentHasBeenSet)
  {
   payload.WithObject("Consent", m_consent.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainContactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.UpdateDomainContact"));
  return headers;

}




