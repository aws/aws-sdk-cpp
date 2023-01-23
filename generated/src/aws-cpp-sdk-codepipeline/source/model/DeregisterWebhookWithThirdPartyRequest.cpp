/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/DeregisterWebhookWithThirdPartyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterWebhookWithThirdPartyRequest::DeregisterWebhookWithThirdPartyRequest() : 
    m_webhookNameHasBeenSet(false)
{
}

Aws::String DeregisterWebhookWithThirdPartyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webhookNameHasBeenSet)
  {
   payload.WithString("webhookName", m_webhookName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterWebhookWithThirdPartyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.DeregisterWebhookWithThirdParty"));
  return headers;

}




