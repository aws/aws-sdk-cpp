/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStepRequest::DescribeStepRequest() : 
    m_clusterIdHasBeenSet(false),
    m_stepIdHasBeenSet(false)
{
}

Aws::String DescribeStepRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("StepId", m_stepId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStepRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.DescribeStep"));
  return headers;

}




