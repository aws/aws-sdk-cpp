/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PutAutoTerminationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAutoTerminationPolicyRequest::PutAutoTerminationPolicyRequest() : 
    m_clusterIdHasBeenSet(false),
    m_autoTerminationPolicyHasBeenSet(false)
{
}

Aws::String PutAutoTerminationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_autoTerminationPolicyHasBeenSet)
  {
   payload.WithObject("AutoTerminationPolicy", m_autoTerminationPolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAutoTerminationPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.PutAutoTerminationPolicy"));
  return headers;

}




