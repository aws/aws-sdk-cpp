/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ListRetirableGrantsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRetirableGrantsRequest::ListRetirableGrantsRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_retiringPrincipalHasBeenSet(false)
{
}

Aws::String ListRetirableGrantsRequest::SerializePayload() const
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

  if(m_retiringPrincipalHasBeenSet)
  {
   payload.WithString("RetiringPrincipal", m_retiringPrincipal);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRetirableGrantsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ListRetirableGrants"));
  return headers;

}




