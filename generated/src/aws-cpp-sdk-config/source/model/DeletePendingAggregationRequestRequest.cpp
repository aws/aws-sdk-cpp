/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeletePendingAggregationRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePendingAggregationRequestRequest::DeletePendingAggregationRequestRequest() : 
    m_requesterAccountIdHasBeenSet(false),
    m_requesterAwsRegionHasBeenSet(false)
{
}

Aws::String DeletePendingAggregationRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requesterAccountIdHasBeenSet)
  {
   payload.WithString("RequesterAccountId", m_requesterAccountId);

  }

  if(m_requesterAwsRegionHasBeenSet)
  {
   payload.WithString("RequesterAwsRegion", m_requesterAwsRegion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePendingAggregationRequestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeletePendingAggregationRequest"));
  return headers;

}




