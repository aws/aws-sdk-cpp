/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteAggregationAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAggregationAuthorizationRequest::DeleteAggregationAuthorizationRequest() : 
    m_authorizedAccountIdHasBeenSet(false),
    m_authorizedAwsRegionHasBeenSet(false)
{
}

Aws::String DeleteAggregationAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizedAccountIdHasBeenSet)
  {
   payload.WithString("AuthorizedAccountId", m_authorizedAccountId);

  }

  if(m_authorizedAwsRegionHasBeenSet)
  {
   payload.WithString("AuthorizedAwsRegion", m_authorizedAwsRegion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAggregationAuthorizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteAggregationAuthorization"));
  return headers;

}




