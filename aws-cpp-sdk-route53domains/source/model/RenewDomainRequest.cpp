/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/RenewDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RenewDomainRequest::RenewDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_durationInYears(0),
    m_durationInYearsHasBeenSet(false),
    m_currentExpiryYear(0),
    m_currentExpiryYearHasBeenSet(false)
{
}

Aws::String RenewDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_durationInYearsHasBeenSet)
  {
   payload.WithInteger("DurationInYears", m_durationInYears);

  }

  if(m_currentExpiryYearHasBeenSet)
  {
   payload.WithInteger("CurrentExpiryYear", m_currentExpiryYear);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RenewDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.RenewDomain"));
  return headers;

}




