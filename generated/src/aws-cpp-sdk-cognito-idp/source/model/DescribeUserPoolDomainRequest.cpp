/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DescribeUserPoolDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeUserPoolDomainRequest::DescribeUserPoolDomainRequest() : 
    m_domainHasBeenSet(false)
{
}

Aws::String DescribeUserPoolDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeUserPoolDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.DescribeUserPoolDomain"));
  return headers;

}




