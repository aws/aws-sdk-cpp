/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StartSoftwareDeploymentToImageBuilderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSoftwareDeploymentToImageBuilderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageBuilderNameHasBeenSet)
  {
   payload.WithString("ImageBuilderName", m_imageBuilderName);

  }

  if(m_retryFailedDeploymentsHasBeenSet)
  {
   payload.WithBool("RetryFailedDeployments", m_retryFailedDeployments);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSoftwareDeploymentToImageBuilderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.StartSoftwareDeploymentToImageBuilder"));
  return headers;

}




