/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/AssociateCustomDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateCustomDomainRequest::AssociateCustomDomainRequest() : 
    m_serviceArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_enableWWWSubdomain(false),
    m_enableWWWSubdomainHasBeenSet(false)
{
}

Aws::String AssociateCustomDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_enableWWWSubdomainHasBeenSet)
  {
   payload.WithBool("EnableWWWSubdomain", m_enableWWWSubdomain);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateCustomDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.AssociateCustomDomain"));
  return headers;

}




