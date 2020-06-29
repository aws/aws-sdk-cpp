/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeregisterEcsClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterEcsClusterRequest::DeregisterEcsClusterRequest() : 
    m_ecsClusterArnHasBeenSet(false)
{
}

Aws::String DeregisterEcsClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("EcsClusterArn", m_ecsClusterArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterEcsClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeregisterEcsCluster"));
  return headers;

}




