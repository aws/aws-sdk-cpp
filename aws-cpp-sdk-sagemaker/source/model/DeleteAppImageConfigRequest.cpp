/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteAppImageConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppImageConfigRequest::DeleteAppImageConfigRequest() : 
    m_appImageConfigNameHasBeenSet(false)
{
}

Aws::String DeleteAppImageConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appImageConfigNameHasBeenSet)
  {
   payload.WithString("AppImageConfigName", m_appImageConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAppImageConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteAppImageConfig"));
  return headers;

}




