/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ListCertificateAuthoritiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCertificateAuthoritiesRequest::ListCertificateAuthoritiesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_resourceOwner(ResourceOwner::NOT_SET),
    m_resourceOwnerHasBeenSet(false)
{
}

Aws::String ListCertificateAuthoritiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("ResourceOwner", ResourceOwnerMapper::GetNameForResourceOwner(m_resourceOwner));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListCertificateAuthoritiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.ListCertificateAuthorities"));
  return headers;

}




