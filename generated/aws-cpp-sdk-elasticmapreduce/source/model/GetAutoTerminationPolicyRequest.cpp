/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/GetAutoTerminationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAutoTerminationPolicyRequest::GetAutoTerminationPolicyRequest() : 
    m_clusterIdHasBeenSet(false)
{
}

Aws::String GetAutoTerminationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAutoTerminationPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.GetAutoTerminationPolicy"));
  return headers;

}




