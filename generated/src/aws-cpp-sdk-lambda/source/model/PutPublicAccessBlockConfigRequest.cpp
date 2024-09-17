/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/PutPublicAccessBlockConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPublicAccessBlockConfigRequest::PutPublicAccessBlockConfigRequest() : 
    m_resourceArnHasBeenSet(false),
    m_publicAccessBlockConfigHasBeenSet(false)
{
}

Aws::String PutPublicAccessBlockConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_publicAccessBlockConfigHasBeenSet)
  {
   payload.WithObject("PublicAccessBlockConfig", m_publicAccessBlockConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




