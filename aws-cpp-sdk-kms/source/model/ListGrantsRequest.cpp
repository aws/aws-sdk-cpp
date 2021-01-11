/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ListGrantsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListGrantsRequest::ListGrantsRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_grantIdHasBeenSet(false),
    m_granteePrincipalHasBeenSet(false)
{
}

Aws::String ListGrantsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_grantIdHasBeenSet)
  {
   payload.WithString("GrantId", m_grantId);

  }

  if(m_granteePrincipalHasBeenSet)
  {
   payload.WithString("GranteePrincipal", m_granteePrincipal);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListGrantsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ListGrants"));
  return headers;

}




