/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeInterconnectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInterconnectsRequest::DescribeInterconnectsRequest() : 
    m_interconnectIdHasBeenSet(false)
{
}

Aws::String DescribeInterconnectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_interconnectIdHasBeenSet)
  {
   payload.WithString("interconnectId", m_interconnectId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeInterconnectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeInterconnects"));
  return headers;

}




