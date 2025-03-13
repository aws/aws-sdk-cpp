/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DeleteRepositoryCreationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteRepositoryCreationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRepositoryCreationTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.DeleteRepositoryCreationTemplate"));
  return headers;

}




