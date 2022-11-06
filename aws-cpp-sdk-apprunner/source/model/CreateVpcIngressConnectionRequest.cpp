/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CreateVpcIngressConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcIngressConnectionRequest::CreateVpcIngressConnectionRequest() : 
    m_serviceArnHasBeenSet(false),
    m_vpcIngressConnectionNameHasBeenSet(false),
    m_ingressVpcConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVpcIngressConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_vpcIngressConnectionNameHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionName", m_vpcIngressConnectionName);

  }

  if(m_ingressVpcConfigurationHasBeenSet)
  {
   payload.WithObject("IngressVpcConfiguration", m_ingressVpcConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVpcIngressConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.CreateVpcIngressConnection"));
  return headers;

}




