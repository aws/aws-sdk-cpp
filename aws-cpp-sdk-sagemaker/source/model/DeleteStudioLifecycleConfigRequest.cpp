/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteStudioLifecycleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteStudioLifecycleConfigRequest::DeleteStudioLifecycleConfigRequest() : 
    m_studioLifecycleConfigNameHasBeenSet(false)
{
}

Aws::String DeleteStudioLifecycleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_studioLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigName", m_studioLifecycleConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStudioLifecycleConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteStudioLifecycleConfig"));
  return headers;

}




