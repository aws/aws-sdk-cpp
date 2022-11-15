/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DeleteVpcIngressConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVpcIngressConnectionRequest::DeleteVpcIngressConnectionRequest() : 
    m_vpcIngressConnectionArnHasBeenSet(false)
{
}

Aws::String DeleteVpcIngressConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcIngressConnectionArnHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionArn", m_vpcIngressConnectionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVpcIngressConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.DeleteVpcIngressConnection"));
  return headers;

}




