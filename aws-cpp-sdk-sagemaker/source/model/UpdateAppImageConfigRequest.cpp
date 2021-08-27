/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateAppImageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppImageConfigRequest::UpdateAppImageConfigRequest() : 
    m_appImageConfigNameHasBeenSet(false),
    m_kernelGatewayImageConfigHasBeenSet(false)
{
}

Aws::String UpdateAppImageConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appImageConfigNameHasBeenSet)
  {
   payload.WithString("AppImageConfigName", m_appImageConfigName);

  }

  if(m_kernelGatewayImageConfigHasBeenSet)
  {
   payload.WithObject("KernelGatewayImageConfig", m_kernelGatewayImageConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAppImageConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateAppImageConfig"));
  return headers;

}




