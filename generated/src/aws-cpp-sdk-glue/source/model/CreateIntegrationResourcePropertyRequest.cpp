/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateIntegrationResourcePropertyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIntegrationResourcePropertyRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection CreateIntegrationResourcePropertyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateIntegrationResourceProperty"));
  return headers;

}




