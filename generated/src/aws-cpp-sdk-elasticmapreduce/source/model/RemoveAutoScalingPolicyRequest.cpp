/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest() : 
    m_clusterIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false)
{
}

Aws::String RemoveAutoScalingPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_instanceGroupIdHasBeenSet)
  {
   payload.WithString("InstanceGroupId", m_instanceGroupId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveAutoScalingPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.RemoveAutoScalingPolicy"));
  return headers;

}




