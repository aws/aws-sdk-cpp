/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeVpcEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVpcEndpointsRequest::DescribeVpcEndpointsRequest() : 
    m_vpcEndpointIdsHasBeenSet(false)
{
}

Aws::String DescribeVpcEndpointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcEndpointIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcEndpointIdsJsonList(m_vpcEndpointIds.size());
   for(unsigned vpcEndpointIdsIndex = 0; vpcEndpointIdsIndex < vpcEndpointIdsJsonList.GetLength(); ++vpcEndpointIdsIndex)
   {
     vpcEndpointIdsJsonList[vpcEndpointIdsIndex].AsString(m_vpcEndpointIds[vpcEndpointIdsIndex]);
   }
   payload.WithArray("VpcEndpointIds", std::move(vpcEndpointIdsJsonList));

  }

  return payload.View().WriteReadable();
}




