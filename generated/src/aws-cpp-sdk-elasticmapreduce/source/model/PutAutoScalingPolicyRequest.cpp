/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PutAutoScalingPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAutoScalingPolicyRequest::PutAutoScalingPolicyRequest() : 
    m_clusterIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_autoScalingPolicyHasBeenSet(false)
{
}

Aws::String PutAutoScalingPolicyRequest::SerializePayload() const
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

  if(m_autoScalingPolicyHasBeenSet)
  {
   payload.WithObject("AutoScalingPolicy", m_autoScalingPolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAutoScalingPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.PutAutoScalingPolicy"));
  return headers;

}




