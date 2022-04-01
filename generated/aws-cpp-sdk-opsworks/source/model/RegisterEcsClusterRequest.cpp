/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/RegisterEcsClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterEcsClusterRequest::RegisterEcsClusterRequest() : 
    m_ecsClusterArnHasBeenSet(false),
    m_stackIdHasBeenSet(false)
{
}

Aws::String RegisterEcsClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("EcsClusterArn", m_ecsClusterArn);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterEcsClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.RegisterEcsCluster"));
  return headers;

}




