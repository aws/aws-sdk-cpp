/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateImageVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateImageVersionRequest::CreateImageVersionRequest() : 
    m_baseImageHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_imageNameHasBeenSet(false)
{
}

Aws::String CreateImageVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baseImageHasBeenSet)
  {
   payload.WithString("BaseImage", m_baseImage);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateImageVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateImageVersion"));
  return headers;

}




