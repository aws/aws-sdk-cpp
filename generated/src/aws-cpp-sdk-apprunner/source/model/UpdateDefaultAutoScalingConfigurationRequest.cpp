/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/UpdateDefaultAutoScalingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDefaultAutoScalingConfigurationRequest::UpdateDefaultAutoScalingConfigurationRequest() : 
    m_autoScalingConfigurationArnHasBeenSet(false)
{
}

Aws::String UpdateDefaultAutoScalingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDefaultAutoScalingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.UpdateDefaultAutoScalingConfiguration"));
  return headers;

}




