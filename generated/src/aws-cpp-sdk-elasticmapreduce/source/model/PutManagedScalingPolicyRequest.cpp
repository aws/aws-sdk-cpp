/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PutManagedScalingPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutManagedScalingPolicyRequest::PutManagedScalingPolicyRequest() : 
    m_clusterIdHasBeenSet(false),
    m_managedScalingPolicyHasBeenSet(false)
{
}

Aws::String PutManagedScalingPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_managedScalingPolicyHasBeenSet)
  {
   payload.WithObject("ManagedScalingPolicy", m_managedScalingPolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutManagedScalingPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.PutManagedScalingPolicy"));
  return headers;

}




