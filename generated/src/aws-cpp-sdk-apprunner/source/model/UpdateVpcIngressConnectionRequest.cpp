/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/UpdateVpcIngressConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVpcIngressConnectionRequest::UpdateVpcIngressConnectionRequest() : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_ingressVpcConfigurationHasBeenSet(false)
{
}

Aws::String UpdateVpcIngressConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpcIngressConnectionArnHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionArn", m_vpcIngressConnectionArn);

  }

  if(m_ingressVpcConfigurationHasBeenSet)
  {
   payload.WithObject("IngressVpcConfiguration", m_ingressVpcConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVpcIngressConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.UpdateVpcIngressConnection"));
  return headers;

}




