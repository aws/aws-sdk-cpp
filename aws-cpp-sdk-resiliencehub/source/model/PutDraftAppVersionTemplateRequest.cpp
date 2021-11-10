/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PutDraftAppVersionTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDraftAppVersionTemplateRequest::PutDraftAppVersionTemplateRequest() : 
    m_appArnHasBeenSet(false),
    m_appTemplateBodyHasBeenSet(false)
{
}

Aws::String PutDraftAppVersionTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_appTemplateBodyHasBeenSet)
  {
   payload.WithString("appTemplateBody", m_appTemplateBody);

  }

  return payload.View().WriteReadable();
}




