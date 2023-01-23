/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/StartQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartQueryRequest::StartQueryRequest() : 
    m_queryStatementHasBeenSet(false),
    m_deliveryS3UriHasBeenSet(false)
{
}

Aws::String StartQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("QueryStatement", m_queryStatement);

  }

  if(m_deliveryS3UriHasBeenSet)
  {
   payload.WithString("DeliveryS3Uri", m_deliveryS3Uri);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.StartQuery"));
  return headers;

}




