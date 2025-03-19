/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateIntegrationResourcePropertyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIntegrationResourcePropertyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_sourceProcessingPropertiesHasBeenSet)
  {
   payload.WithObject("SourceProcessingProperties", m_sourceProcessingProperties.Jsonize());

  }

  if(m_targetProcessingPropertiesHasBeenSet)
  {
   payload.WithObject("TargetProcessingProperties", m_targetProcessingProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIntegrationResourcePropertyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateIntegrationResourceProperty"));
  return headers;

}




