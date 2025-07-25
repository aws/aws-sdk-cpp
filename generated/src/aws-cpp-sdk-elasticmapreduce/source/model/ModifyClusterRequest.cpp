﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ModifyClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ModifyClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_stepConcurrencyLevelHasBeenSet)
  {
   payload.WithInteger("StepConcurrencyLevel", m_stepConcurrencyLevel);

  }

  if(m_extendedSupportHasBeenSet)
  {
   payload.WithBool("ExtendedSupport", m_extendedSupport);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ModifyCluster"));
  return headers;

}




