/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ResendContactReachabilityEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResendContactReachabilityEmailRequest::ResendContactReachabilityEmailRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String ResendContactReachabilityEmailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResendContactReachabilityEmailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.ResendContactReachabilityEmail"));
  return headers;

}




